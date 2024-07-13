#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setbt.h"
#include "concretestates.h"
#include <QDebug>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , context(new Context(new StartState()))
{
    ui->setupUi(this);
    handle();
    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

    // 连接按钮点击信号到状态切换槽
    connect(ui->someButton, &QPushButton::clicked, this, &MainWindow::handle);

    // 将某个按钮提升为 SetBt 类
    SetBt *button = qobject_cast<SetBt *>(ui->customButton); // 假设你的按钮对象名为 customButton
    if (button)
    {
        QPixmap pixmap(":/UI/er.png"); // 设置图片路径
        button->setButtonImage(pixmap);  // 设置按钮图片
        connect(button, &SetBt::clicked, this, &MainWindow::onCustomButtonClicked);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete context;
}

void MainWindow::setState(State *state)
{
    context->setState(state);
}

void MainWindow::handle()
{
    context->request(this);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (dynamic_cast<StandbyState*>(context->getState())) {
        handle(); // 从待机模式切换到开始模式
    }
    qDebug()<<"从待机模式切换到开始模式";
    QMainWindow::mousePressEvent(event);
}

void MainWindow::onCustomButtonClicked()
{
    // 自定义按钮点击处理
    qDebug()<<"鼠标被点击";
}


