/*!
* @file SeatBt.h
* @brief 概述 座椅调节按钮
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 15
*/
#ifndef SEATBT_H
#define SEATBT_H

#include "appbt.h"

class SeatBt : public AppBt
{
    Q_OBJECT
public:
    explicit SeatBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // SEATBT_H
