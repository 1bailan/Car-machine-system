#ifndef HKEYBUTTON_H
#define HKEYBUTTON_H

#include <QLabel>
#include <QMouseEvent>
#include <QObject>
#include <QWidget>

class HKeyButton : public QWidget
{
    Q_OBJECT
public:
    explicit HKeyButton(QWidget *parent = nullptr);

    ~HKeyButton();
    //添加鼠标事件
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    void paintEvent(QPaintEvent *);

    void setText(QString text);
signals:
    //自定义信号
    void clicked();     //点击信号
    void pressed();     //按下信号
    void release();     //释放信号
private:
    QLabel * text;

};

#endif // HKEYBUTTON_H
