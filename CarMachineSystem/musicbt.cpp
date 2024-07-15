#include "musicbt.h"

MusicBt::MusicBt(QWidget *parent) : AppBt(parent)
{
    // 派生类初始化代码，如果有的话
}

void MusicBt::mousePressEvent(QMouseEvent *event)
{
    emit pressed();
    AppBt::mousePressEvent(event);
}

void MusicBt::mouseReleaseEvent(QMouseEvent *event)
{
    emit release();     // 释放信号
    emit clicked();     // 点击信号

   qDebug() << "Music按钮点击释放\n";

    AppBt::mouseReleaseEvent(event);
}
