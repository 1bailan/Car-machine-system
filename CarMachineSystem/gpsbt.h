﻿/*!
* @file GpsBt.h
* @brief 概述 导航按钮
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 15
*/

#ifndef GPSBT_H
#define GPSBT_H

#include "appbt.h"

class GpsBt : public AppBt
{
    Q_OBJECT
public:
    explicit GpsBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // GPSBT_H
