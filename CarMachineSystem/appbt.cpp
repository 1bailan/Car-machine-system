#include "appbt.h"
#include "ui_appbt.h"

AppBt::AppBt(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AppBt)
{
    ui->setupUi(this);
}

AppBt::~AppBt()
{
    delete ui;
}

void AppBt::setAppName(const QString &name)
{
    ui->nameLb->setText(name);
}

void AppBt::setAppPic(const QString filename)   //文件路径
{
    // QIcon(const QPixmap &pixmap);
    QPixmap m_pixmap;
    m_pixmap.load(filename);            //获取图片

    ui->PicBt->setIcon(QIcon(m_pixmap));
}
