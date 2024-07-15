#include "paidbt.h"

PaidBt::PaidBt(QWidget *parent) : AppBt(parent)
{

}

void PaidBt::mousePressEvent(QMouseEvent *event)
{
    emit pressed();
    AppBt::mousePressEvent(event);
}

void PaidBt::mouseReleaseEvent(QMouseEvent *event)
{
    emit release();     // 释放信号
    emit clicked();     // 点击信号

   qDebug() << "流量充值按钮点击释放\n";

    AppBt::mouseReleaseEvent(event);
}
