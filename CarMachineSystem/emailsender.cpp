#include "EmailSender.h"
#include <QTextStream>
#include <QDebug>
#include <QByteArray>

EmailSender::EmailSender(QObject *parent) :
    QObject(parent),
    socket(new QTcpSocket(this))
{
    // 连接信号和槽
    connect(socket, &QTcpSocket::connected, this, &EmailSender::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &EmailSender::onReadyRead);
}

void EmailSender::sendEmail(const QString &server, short port, const QString &username, const QString &password, const QString &to, const QString &subject, const QString &body)
{
    this->username = username;
    this->password = password;
    this->to = to;
    this->subject = subject;
    this->body = body;

    // 打开连接
    socket->connectToHost(server, port);
}

void EmailSender::onConnected()
{
    qDebug() << "连接到服务器成功";

    // 填充命令列表
    commands << "HELO " + QHostInfo::localHostName()
             << "AUTH LOGIN"
             << QByteArray(username.toUtf8()).toBase64()
             << QByteArray(password.toUtf8()).toBase64()
             << "MAIL FROM:<" + username + ">"
             << "RCPT TO:<" + to + ">"
             << "DATA"
             << "From: " + username
             << "To: " + to
             << "Subject: " + subject
             << "\r\n" + body
             << "."
             << "QUIT";

    // 发送第一条命令
    sendCommand(commands.takeFirst());
}

void EmailSender::onReadyRead()
{
    // 读取服务器响应
    while (socket->canReadLine()) {
        serverResponse = socket->readLine().trimmed();
        qDebug() << "服务器响应: " << serverResponse;

        // 如果有更多命令要发送
        if (!commands.isEmpty()) {
            sendCommand(commands.takeFirst());
        } else {
            // 如果所有命令都已发送完毕
            emit emailSent(true, "邮件发送成功");
            socket->disconnectFromHost();
        }
    }
}

void EmailSender::sendCommand(const QString &command)
{
    qDebug() << "发送命令: " << command;
    socket->write(command.toUtf8() + "\r\n");
}
