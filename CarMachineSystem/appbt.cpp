#include "appbt.h"
#include <QMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <QEnterEvent>

AppBt::AppBt(QWidget *parent)
    : QWidget(parent), m_pressed(false), m_disabled(false)      //初始化列表
{
    setMouseTracking(true);             // 鼠标跟踪
    setFont(QFont("微软雅黑", 10));      //设置字体样式、大小
    updateStyle();                      // 初始化样式
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
    m_pixmap = pixmap;              //图片对象
    update();                       //重新绘制按钮
}

void AppBt::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);            //声明该参数不调用不警告
    QStyleOptionButton opt;     //声明样式选择按钮对象，用于存储和处理关于样式选项按钮的信息和状态
    opt.initFrom(this);         //将当前对象的状态和样式信息复制到 opt 对象中，以便后续的样式渲染和处理。
    QPainter p(this);           //画笔对象

    // 绘制按钮背景
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);

    // 绘制图片
    if (!m_pixmap.isNull()) {
        // 动态缩放图片以适应按钮大小
        QPixmap scaledPixmap = m_pixmap.scaled(this->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
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
    }
    QWidget::mouseReleaseEvent(event);  // 父类鼠标释放事件
}

void AppBt::enterEvent(QEnterEvent *event)  // 更改参数类型为 QEnterEvent*
{
    if (!m_disabled)
    {
        setStyleSheet(
            "color: #FFFFFF;"               //字体颜色
            "background-color: #718093;"    //背景颜色
            "border-color: #2f3640;"        //边框颜色
            "border-radius: 15px;"          //边框圆角
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
            "border-radius: 15px;"
            );
    }
    else if (m_pressed)
    {
        setStyleSheet(
            "color: #FFFFFF;"
            "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);"
            "border-color: #2f3640;"
            "border-radius: 15px;"
            );
    }
    else
    {
        setStyleSheet(
            "color: #2f3640;"
            "background-color: #f5f6fa;"
            "border-color: #2f3640;"
            "border-radius: 15px;"
            "border-style: solid;"
            "border-width: 2px;"
            "padding: 5px;"             //边距
            );
    }
}
