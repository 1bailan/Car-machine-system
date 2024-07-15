/*!
* @file RescueBt.h
* @brief 概述 道路救援按钮
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 15
*/
#ifndef RESCUEBT_H
#define RESCUEBT_H

#include "appbt.h"

class RescueBt : public AppBt
{
    Q_OBJECT
public:
    explicit RescueBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // RESCUEBT_H
