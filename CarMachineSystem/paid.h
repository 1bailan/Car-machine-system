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

private slots:
    void on_loginBt_clicked();

    void on_quitBt_clicked();

signals:
    //自定义一个信号
    void quit();

private:
    Ui::Paid *ui;
};

#endif // PAID_H
