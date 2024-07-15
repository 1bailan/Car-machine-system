/*!
* @file AppBt.h
* @brief 概述 主要实现按钮的样式
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / 07 / 10
*/
#ifndef APPBT_H
#define APPBT_H

#include <QWidget>
#include <QEnterEvent>  // 确保包含 QEnterEvent 头文件
#include <QPixmap>      // 用于存储图片

class QMouseEvent;
class QPaintEvent;
class QEvent;

class AppBt : public QWidget
{
    Q_OBJECT

public:
    explicit AppBt(QWidget *parent = nullptr);
    ~AppBt();

    void setDisabled(bool disabled);             // 设置按钮失效（不可点击）
    void setButtonImage(const QPixmap &pixmap);  // 设置按钮图片的接口

signals:
    void clicked();

protected:
    void paintEvent(QPaintEvent *event) override;           //显示事件
    void mousePressEvent(QMouseEvent *event) override;      //鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *event) override;    //鼠标释放事件
    void enterEvent(QEnterEvent *event) override;           //鼠标进入事件
    void leaveEvent(QEvent *event) override;                //鼠标离开事件

private:
    void updateStyle();   //更新样式（按下、释放、进入、离开）

    bool m_pressed;       //是否按下标志位
    bool m_disabled;      //是否失效标志位
    QPixmap m_pixmap;     //存储按钮图片
};

#endif // APPBT_H
