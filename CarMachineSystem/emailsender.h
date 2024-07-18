#ifndef EMAILSENDER_H
#define EMAILSENDER_H

#include <QObject>
#include <QTcpSocket>
#include <QString>
#include <QHostAddress>

class EmailSender : public QObject {
    Q_OBJECT

public:
    EmailSender(const QString &server, quint16 port, QObject *parent = nullptr);
    void sendEmail(const QString &username, const QString &password, const QString &to, const QString &subject, const QString &body);

private slots:
    void onReadyRead();
    void onConnected();

private:
    void sendCommand(const QString &command);
    QString receiveResponse();
    QString base64Encode(const QString &data);

    QTcpSocket *socket;
    QString server;
    quint16 port;
    QString username;
    QString password;
    QString to;
    QString subject;
    QString body;
    QString response;
    QStringList commands;
    int currentCommandIndex;
};

#endif // EMAILSENDER_H
