﻿#include "gpsbt.h"

GpsBt::GpsBt(QWidget *parent): AppBt(parent)
{
    // 派生类初始化代码，如果有的话
}

// 鼠标按下事件
void GpsBt::mousePressEvent(QMouseEvent *event)
{
    emit pressed();
    AppBt::mousePressEvent(event);
}

// 鼠标释放事件
void GpsBt::mouseReleaseEvent(QMouseEvent *event)
{
    emit release();     // 释放信号
    emit clicked();     // 点击信号

   qDebug() << "GPS按钮点击释放\n";

    AppBt::mouseReleaseEvent(event);
}