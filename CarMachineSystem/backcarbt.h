/*!
* @file BackCarBt.h
* @brief 概述 倒车影像按钮
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 15
*/
#ifndef BACKCARBT_H
#define BACKCARBT_H

#include "appbt.h"

class BackCarBt : public AppBt
{
    Q_OBJECT
public:
    explicit BackCarBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // BACKCARBT_H
