#include "CustomDialog.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QTimer>

CustomDialog::CustomDialog(QWidget *parent)
    : QDialog(parent)
    ,m_value(90)
{
    // 设置对话框大小
    setFixedSize(400, 400);

    // 创建按钮和标签
    this->btnPlus = new QPushButton("+", this);
    this->btnMinus = new QPushButton("-", this);
    m_label = new QLabel(QString::number(m_value), this);
    closeButton = new QPushButton("退出", this);

    //设置样式
    m_label->setAlignment(Qt::AlignCenter);
    m_label->setStyleSheet("font: bold italic 72px; color:white ;");
    btnPlus->setStyleSheet("font: bold italic 20px; color:white ;");

    // 设置样式表
    btnPlus->setStyleSheet(R"(
            QPushButton {
                background-color: #00ffff; /* 按钮的默认背景颜色 */
                color: white; /* 按钮的文字颜色 */
                border: none; /* 无边框 */
                padding: 15px 32px; /* 按钮的内边距 */
                text-align: center; /* 文字居中对齐 */
                font-size: 42px; /* 字体大小 */
                margin: 4px 2px; /* 外边距 */
                border-radius: 15px; /* 圆角边框 */
            }

            QPushButton:hover {
                background-color: #45a049; /* 鼠标悬停时的背景颜色 */
            }

            QPushButton:pressed {
                background-color: #2e7d32; /* 按下时的背景颜色 */
                padding-top: 19px; /* 按下时的内边距变化，模拟位移效果 */
                padding-bottom: 11px; /* 按下时的内边距变化，模拟位移效果 */
            }

            QPushButton:focus {
                background-color: #4CAF50; /* 焦点状态时的背景颜色 */
            }

            QPushButton:disabled {
                background-color: #cccccc; /* 禁用状态时的背景颜色 */
                color: #666666; /* 禁用状态时的文字颜色 */
            }
        )");

    btnMinus->setStyleSheet(R"(
            QPushButton {
                background-color: #00ffff; /* 按钮的默认背景颜色 */
                color: white; /* 按钮的文字颜色 */
                border: none; /* 无边框 */
                padding: 15px 32px; /* 按钮的内边距 */
                text-align: center; /* 文字居中对齐 */
                font-size: 42px; /* 字体大小 */
                margin: 4px 2px; /* 外边距 */
                border-radius: 15px; /* 圆角边框 */
            }

            QPushButton:hover {
                background-color: #45a049; /* 鼠标悬停时的背景颜色 */
            }

            QPushButton:pressed {
                background-color: #2e7d32; /* 按下时的背景颜色 */
                padding-top: 19px; /* 按下时的内边距变化，模拟位移效果 */
                padding-bottom: 11px; /* 按下时的内边距变化，模拟位移效果 */
            }

            QPushButton:focus {
                background-color: #4CAF50; /* 焦点状态时的背景颜色 */
            }

            QPushButton:disabled {
                background-color: #cccccc; /* 禁用状态时的背景颜色 */
                color: #666666; /* 禁用状态时的文字颜色 */
            }
        )");

    closeButton->setStyleSheet(R"(
            QPushButton {
                background-color: #00ffff; /* 按钮的默认背景颜色 */
                color: white; /* 按钮的文字颜色 */
                border: none; /* 无边框 */
                padding: 15px 32px; /* 按钮的内边距 */
                text-align: center; /* 文字居中对齐 */
                font-size: 38px; /* 字体大小 */
                margin: 4px 2px; /* 外边距 */
                border-radius: 15px; /* 圆角边框 */
            }

            QPushButton:hover {
                background-color: #45a049; /* 鼠标悬停时的背景颜色 */
            }

            QPushButton:pressed {
                background-color: #2e7d32; /* 按下时的背景颜色 */
                padding-top: 19px; /* 按下时的内边距变化，模拟位移效果 */
                padding-bottom: 11px; /* 按下时的内边距变化，模拟位移效果 */
            }

            QPushButton:focus {
                background-color: #4CAF50; /* 焦点状态时的背景颜色 */
            }

            QPushButton:disabled {
                background-color: #cccccc; /* 禁用状态时的背景颜色 */
                color: #666666; /* 禁用状态时的文字颜色 */
            }
        )");

    // 创建布局
    QHBoxLayout *topLayout = new QHBoxLayout();
    topLayout->addWidget(btnPlus);
    topLayout->addWidget(btnMinus);

    btnPlus->setMinimumSize(100,100);
    btnMinus->setMinimumSize(100,100);
    closeButton->setMinimumSize(50,100);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    mainLayout->addWidget(m_label);
    mainLayout->addLayout(topLayout);
    mainLayout->addWidget(closeButton);

    setLayout(mainLayout);

    // 创建定时器对象
    m_timer = new QTimer(this);

    // 连接按钮按下和松开信号
    connect(btnPlus, &QPushButton::pressed, this, [this]() {
        m_timer->start(200);  // 每200毫秒增加一次
    });
    connect(btnPlus, &QPushButton::released, this, [this]() {
        m_timer->stop();  // 按钮松开时停止定时器
    });

    connect(btnMinus, &QPushButton::pressed, this, [this]() {
        m_timer->start(200);  // 每200毫秒减少一次
    });
    connect(btnMinus, &QPushButton::released, this, [this]() {
        m_timer->stop();  // 按钮松开时停止定时器
    });

    // 定时器超时时执行的槽函数
    connect(m_timer, &QTimer::timeout, this, [this]() {
        if (btnPlus->isDown()) {
            m_value++;
        } else if (btnMinus->isDown()) {
            m_value--;
        }
        m_label->setText(QString::number(m_value));
    });

    connect(closeButton, &QPushButton::clicked, this, &CustomDialog::onCloseButtonClicked);

    // 设置窗口的标题和大小
    setWindowTitle("座椅角度调节");
    resize(200, 150);
}

void CustomDialog::onCloseButtonClicked()
{
    accept(); // 关闭对话框
}
