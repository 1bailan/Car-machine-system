
#include "mainwindow.h"
#include "menu.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_menuBt_clicked()
{
    Menu * M = new Menu;
    M->show();
    this->hide();
}

