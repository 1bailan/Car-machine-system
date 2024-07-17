#ifndef EMAILSENDER_H
#define EMAILSENDER_H

#include <QObject>
#include <QTcpSocket>
#include <QHostInfo>

class EmailSender : public QObject
{
    Q_OBJECT

public:
    explicit EmailSender(QObject *parent = nullptr);

    // 发送邮件
    void sendEmail(const QString &server, short port, const QString &username, const QString &password, const QString &to, const QString &subject, const QString &body);

signals:
    // 邮件发送结果信号
    void emailSent(bool success, const QString &message);

private slots:
    // 连接成功时的槽函数
    void onConnected();

    // 准备读取数据时的槽函数
    void onReadyRead();

private:
    QTcpSocket *socket;        // 套接字
    QString username;          // 用户名
    QString password;          // 密码
    QString to;                // 收件人
    QString subject;           // 主题
    QString body;              // 邮件内容
    QString serverResponse;    // 服务器响应
    QList<QString> commands;   // 命令列表

    // 发送命令
    void sendCommand(const QString &command);
};

#endif // EMAILSENDER_H
