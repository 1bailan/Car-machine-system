#ifndef PAIDCLIENT_H
#define PAIDCLIENT_H

#include <QWidget>

namespace Ui {
class PaidClient;
}

class PaidClient : public QWidget
{
    Q_OBJECT

public:
    explicit PaidClient(QWidget *parent = nullptr);
    ~PaidClient();
signals:
    //信号
    void release();

private slots:

    void on_quitBt_clicked();

    void on_loginBt_clicked();

    void on_registerBt_clicked();

    void handleLogin();

private:
    Ui::PaidClient *ui;

    int flag;
};

#endif // PAIDCLIENT_H
