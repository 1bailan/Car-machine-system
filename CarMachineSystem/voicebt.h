/*!
* @file VoiceBt.h
* @brief 概述 语音按钮（测试）
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 15
*/
#ifndef VOICEBT_H
#define VOICEBT_H

#include "appbt.h"

class VoiceBt : public AppBt
{
    Q_OBJECT
public:
    explicit VoiceBt(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:
    void pressed();
    void release();
};

#endif // VOICEBT_H
