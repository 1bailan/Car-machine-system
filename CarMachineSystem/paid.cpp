#include "paid.h"
#include "ui_paid.h"

Paid::Paid(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Paid)
{
    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

    QPixmap  bkgnd(":/UI/login.png");  // 确保图片在资源文件中正确配置
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);  // 使用 QPalette::Window 替换 QPalette::Background
    this->setPalette(palette);

    ui->setupUi(this);

}

Paid::~Paid()
{
    delete ui;
}

void Paid::on_loginBt_clicked()
{
    QPixmap  bkgnd(":/UI/login.png");  // 确保图片在资源文件中正确配置

}


void Paid::on_quitBt_clicked()
{
    this->parentWidget()->show();
    emit quit();
    delete this;
}


