#include "appbt.h"
#include <QMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <QEnterEvent>  // 确保包含 QEnterEvent 头文件

AppBt::AppBt(QWidget *parent)
    : QWidget(parent), m_pressed(false), m_disabled(false)
{
    setMouseTracking(true);  // 鼠标跟踪
    setFont(QFont("微软雅黑", 10));
    updateStyle();  // 初始化样式
}

AppBt::~AppBt()
{
}

void AppBt::setDisabled(bool disabled) {
    m_disabled = disabled;
    updateStyle();
}

void AppBt::setButtonImage(const QPixmap &pixmap)
{
    m_pixmap = pixmap;
    update();  // 重新绘制按钮
}

void AppBt::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QStyleOptionButton opt;
    opt.initFrom(this);
    QPainter p(this);

    // 绘制按钮背景
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);

    // 绘制图片
    if (!m_pixmap.isNull()) {
        // 动态缩放图片以适应按钮大小
        QPixmap scaledPixmap = m_pixmap.scaled(this->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        // int x = width();
        // int y = height();

        int x = (width() - scaledPixmap.width())/2;
        int y = (height() - scaledPixmap.height())/2;
        p.drawPixmap(x, y, scaledPixmap);
    }
}

void AppBt::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && !m_disabled)
    {
        m_pressed = true;
        updateStyle();
    }
    QWidget::mousePressEvent(event);  // 父类鼠标按住事件
}

void AppBt::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && !m_disabled)
    {
        m_pressed = false;
        updateStyle();
        emit clicked();  // 点击信号
    }
    QWidget::mouseReleaseEvent(event);  // 父类鼠标释放事件
}

void AppBt::enterEvent(QEnterEvent *event)  // 更改参数类型为 QEnterEvent*
{
    if (!m_disabled)
    {
        setStyleSheet(
            "color: #FFFFFF;"
            "background-color: #718093;"
            "border-color: #2f3640;"
            "border-radius: 15px;"  // 保留圆角
            );
    }
    QWidget::enterEvent(event);
}

void AppBt::leaveEvent(QEvent *event)
{
    if (!m_disabled)
    {
        updateStyle();  // 离开时恢复默认样式
    }
    QWidget::leaveEvent(event);
}

void AppBt::updateStyle()
{
    if (m_disabled)
    {
        setStyleSheet(
            "color: #FFFFFF;"
            "background-color: #dcdde1;"
            "border-color: #dcdde1;"
            "border-radius: 15px;"  // 保留圆角
            );
    }
    else if (m_pressed)
    {
        setStyleSheet(
            "color: #FFFFFF;"
            "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);"
            "border-color: #2f3640;"
            "border-radius: 15px;"  // 保留圆角
            );
    }
    else
    {
        setStyleSheet(
            "color: #2f3640;"
            "background-color: #f5f6fa;"
            "border-color: #2f3640;"
            "border-radius: 15px;"  // 保留圆角
            "border-style: solid;"
            "border-width: 2px;"
            "padding: 5px;"
            );
    }
}
