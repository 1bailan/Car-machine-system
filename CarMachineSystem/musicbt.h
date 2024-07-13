/*!
* @file MusicBt.h
* @brief 概述 音乐按钮
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / xx / xx
*/
#ifndef MUSICBT_H
#define MUSICBT_H

#include "appbt.h"

class MusicBt : public AppBt
{
    Q_OBJECT
public:
    explicit MusicBt(QWidget *parent = nullptr);
};

#endif // MUSICBT_H
