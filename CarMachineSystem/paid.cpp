#include "paid.h"
#include "ui_paid.h"

#include <QMessageBox>
#include <QPainter>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QTimer>

Paid::Paid(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Paid)
{
    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

    this->mtimer = new QTimer(this);
    // 连接定时器的timeout()信号到自定义的槽函数
    connect(mtimer, &QTimer::timeout, this, &Paid::num_change);

    mtimer->start(1000);

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
    delete this->mtimer;
}

void Paid::setInfo(QString username)
{
    this->username = username;
}

void Paid::on_loginBt_clicked()
{
    // static int AgoGb= 100;
    this->TextGb = ui->textEdit->text().toInt();
    QString NowGb = QString::number(AgoGb+TextGb)+"GB";
    AgoGb = AgoGb+TextGb;
    // qDebug()<<AgoGb;
    ui->numLb->setText(NowGb);

    QMessageBox msgBox(this);
    msgBox.setWindowTitle("请扫描二维码！");
    msgBox.setFixedSize(300, 300);
    //设置二维码图片
    QPixmap  bkgnd(":/UI/ewm.png");  // 确保图片在资源文件中正确配置
    QLabel *label = new QLabel();
    label->setPixmap(bkgnd);
    msgBox.layout()->addWidget(label);
    msgBox.exec();
}


void Paid::on_quitBt_clicked()
{
    this->parentWidget()->show();
    emit quit();
    delete this;
}

void Paid::num_change()
{
    this->AgoGb--;
    QString Gb =QString::number(AgoGb)+"GB";
    ui->numLb->setText(Gb);
    // qDebug()<<AgoGb;

    QString insertSql = QString("insert into user(paid) values('%1');").arg(this->AgoGb);

    qDebug()<<this->AgoGb;
    QSqlQuery query;
    if(!query.exec(insertSql))
    {
        qDebug()<<"插入失败";
    }
    else
    {
        qDebug()<<"插入成功！";
    }


    QString selectSql = QString("select * from user where username='%1';").arg(this->username);
    query.exec(selectSql);
    while(query.next())
    {
        //保存一行数据
        QSqlRecord record = query.record();
        qDebug()<<record.value(0).toInt() << record.value("username").toString()<<record.value(2).toString()<<record.value(3).toInt();
    }
}
// "create table if not exists user(id integer primary key,username varchar(255) unique, password varchar(255),paid integer)";
