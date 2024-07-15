/*!
* @file PaidBt.h
* @brief 概述 流量充值按钮
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 15
*/

#ifndef PAIDBT_H
#define PAIDBT_H

#include "appbt.h"

class PaidBt : public AppBt
{
    Q_OBJECT

public:
    explicit PaidBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // PAIDBT_H
