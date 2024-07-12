#ifndef APPBT_H
#define APPBT_H

#include <QWidget>
#include <QEnterEvent>  // 确保包含 QEnterEvent 头文件
#include <QPixmap>  // 用于存储图片

class QMouseEvent;
class QPaintEvent;
class QEvent;

class AppBt : public QWidget
{
    Q_OBJECT

public:
    explicit AppBt(QWidget *parent = nullptr);
    ~AppBt();

    void setDisabled(bool disabled);
    void setButtonImage(const QPixmap &pixmap);  // 设置按钮图片的接口

signals:
    void clicked();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;

private:
    void updateStyle();

    bool m_pressed;
    bool m_disabled;
    QPixmap m_pixmap;  // 存储按钮图片
};

#endif // APPBT_H
