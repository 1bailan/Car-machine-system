#include "backcarbt.h"

BackCarBt::BackCarBt(QWidget *parent): AppBt(parent)
{

}

// 鼠标按下事件
void BackCarBt::mousePressEvent(QMouseEvent *event)
{
    emit pressed();
    AppBt::mousePressEvent(event);
}

// 鼠标释放事件
void BackCarBt::mouseReleaseEvent(QMouseEvent *event)
{
    emit release();     // 释放信号
    emit clicked();     // 点击信号

   qDebug() << "倒车影像按钮点击释放\n";

    AppBt::mouseReleaseEvent(event);
}
