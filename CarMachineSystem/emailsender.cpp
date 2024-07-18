#include "EmailSender.h"
#include <QDebug>
#include <QTextStream>
#include <QHostInfo>

EmailSender::EmailSender(const QString &server, quint16 port, QObject *parent)
    : QObject(parent), server(server), port(port), currentCommandIndex(0) {
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &EmailSender::onReadyRead);
    connect(socket, &QTcpSocket::connected, this, &EmailSender::onConnected);
}

void EmailSender::sendEmail(const QString &username, const QString &password, const QString &to, const QString &subject, const QString &body) {
    this->username = username;
    this->password = password;
    this->to = to;
    this->subject = subject;
    this->body = body;

    QHostInfo info = QHostInfo::fromName(server);
    if (info.error() == QHostInfo::NoError && !info.addresses().isEmpty()) {
        socket->connectToHost(info.addresses().first(), port);
    } else {
        qCritical() << "获取主机名错误:" << info.errorString();
    }
}

void EmailSender::onConnected() {
    qDebug() << "连接到服务器:" << server << "端口:" << port;
    commands << "HELO " + server + "\r\n"
             << "AUTH LOGIN\r\n"
             << base64Encode(username) + "\r\n"
             << base64Encode(password) + "\r\n"
             << "MAIL FROM:<" + username + ">\r\n"
             << "RCPT TO:<" + to + ">\r\n"
             << "DATA\r\n"
             << "From: " + username + "\r\nTo: " + to + "\r\nSubject: " + subject + "\r\n\r\n" + body + "\r\n.\r\n"
             << "QUIT\r\n";
    sendCommand(commands[currentCommandIndex]);
}

void EmailSender::onReadyRead() {
    response = receiveResponse();
    qDebug() << "服务器响应:" << response;

    if (response.contains("535")) {
        qCritical() << "身份验证失败:" << response;
        socket->disconnectFromHost();
        return;
    }

    currentCommandIndex++;
    if (currentCommandIndex < commands.size()) {
        sendCommand(commands[currentCommandIndex]);
    } else {
        socket->disconnectFromHost();
    }
}

void EmailSender::sendCommand(const QString &command) {
    qDebug() << "发送命令:" << command;
    socket->write(command.toUtf8());
}

QString EmailSender::receiveResponse() {
    QString response;
    while (socket->canReadLine()) {
        response += socket->readLine();
    }
    return response;
}

QString EmailSender::base64Encode(const QString &data) {
    return data.toUtf8().toBase64();
}
