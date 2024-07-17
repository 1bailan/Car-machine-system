#include "backcar.h"
#include "ui_backcar.h"

BackCar::BackCar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BackCar)
{
    ui->setupUi(this);
    QTimer btimer;
    cap.open("/dev/video0");
    connect(&btimer,&QTimer::timeout,this,&BackCar::timerEvent);                  //关联时间更新槽函数，信号定时器

}

BackCar::~BackCar()
{
    delete ui;
}

void BackCar::timerEvent()
{
    cv::Mat image;
    cap>>image; //采集一帧数据
    cv::cvtColor(image,image,cv::COLOR_BGR2RGB);    //将opencv中的颜色控件RGB转换为QT的RGB
    QImage img = QImage(image.data,image.cols,image.rows,QImage::Format_RGB888);
    QPixmap mpix = QPixmap::fromImage(img);
    ui->label->setPixmap(mpix);
}

void BackCar::on_closeBt_clicked()
{
    emit release();     // 释放信号
    this->hide();
}

