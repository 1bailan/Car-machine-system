/*!
* @file SetBt.h
* @brief 概述 设置按钮（测试）
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / xx / xx
*/
#ifndef SETBT_H
#define SETBT_H

#include "appbt.h"

class SetBt : public AppBt
{
    Q_OBJECT

public:
    explicit SetBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // SETBT_H
