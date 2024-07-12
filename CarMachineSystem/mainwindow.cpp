#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setbt.h"
#include <QDebug>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

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
}

void MainWindow::onCustomButtonClicked()
{
    // 自定义按钮点击处理
    qDebug()<<"鼠标被点击";
}

