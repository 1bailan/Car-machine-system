#include "seatbt.h"

SeatBt::SeatBt(QWidget *parent) : AppBt(parent)
{

}

// 鼠标按下事件
void SeatBt::mousePressEvent(QMouseEvent *event)
{
    emit pressed();
    AppBt::mousePressEvent(event);
}

// 鼠标释放事件
void SeatBt::mouseReleaseEvent(QMouseEvent *event)
{
    emit release();     // 释放信号
    emit clicked();     // 点击信号

    qDebug() << "座椅调节按钮点击释放\n";

    AppBt::mouseReleaseEvent(event);
}
