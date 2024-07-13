/*!
* @file Concretestates.h
* @brief 概述 状态类
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 13
*/
#ifndef CONCRETESTATES_H
#define CONCRETESTATES_H

#include "state.h"
#include "MainWindow.h"
#include <iostream>

class StartState : public State
{
public:
    void handle(MainWindow* mainWindow) override;

};

//运行模式
class RunningState : public State
{
public:
    void handle(MainWindow* mainWindow) override;

};

// 待机模式
class StandbyState : public State
{
public:
    void handle(MainWindow* mainWindow) override;

};

#endif // CONCRETESTATES_H
