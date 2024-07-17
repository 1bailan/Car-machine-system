#ifndef PAID_H
#define PAID_H

#include <QMainWindow>

namespace Ui {
class Paid;
}

class Paid : public QMainWindow
{
    Q_OBJECT

public:
    explicit Paid(QWidget *parent = nullptr);
    ~Paid();

    void setInfo(QString username);         //正向传递接受数据
private slots:
    void on_loginBt_clicked();

    void on_quitBt_clicked();

    void num_change();
signals:
    //自定义一个信号
    void quit();



private:
    Ui::Paid *ui;
    int AgoGb = 100;
    int TextGb;
    QTimer * mtimer;
    QString username;
};

#endif // PAID_H
