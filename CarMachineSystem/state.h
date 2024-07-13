/*!
* @file State.h
* @brief 概述 状态类
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / xx / xx
*/
#ifndef STATE_H
#define STATE_H

class MainWindow;     //定义一个主界面对象

//状态类
class State
{
protected:
    MainWindow* mainWindow;
public:
    // State(); 状态类不需要写构造函数
/*
 * 状态类的基类在实现状态模式时，并不需要定义构造函数。
 * 在C++中，基类的构造函数并不会被直接继承到派生类中，而是由派生类自己负责调用基类的构造函数。
 * 由于状态类通常是抽象类，其目的是定义接口和声明纯虚函数，而不会包含具体的成员变量或需要初始化的状态信息。
 */
    virtual ~State() {}
    //处理函数
    virtual void handle(MainWindow* mainWindow) = 0;
};

//环境类（山下文）
class Context
{
private:
    State* state;   //状态对象

public:
    //构造析构函数
    Context(State* state);
    ~Context();

    //设置状态
    void setState(State* state);
    //发送请求
    void request(MainWindow* mainWindow);
    //获取状态
    State *getState() const;
};

#endif // STATE_H
