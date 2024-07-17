#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setbt.h"
#include "concretestates.h"
#include "customdialog.h"
#include "emailsender.h"
#include "backcar.h"
#include <QDebug>
#include <QDialog>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , context(new Context(new StartState()))
    , emailSender(new EmailSender(this))
{
    ui->setupUi(this);
    //初始化状态
    handle();
    ui->standLb->hide();

    //设置主界面背景
    QPixmap  bkgnd(":/UI/login.png");  // 确保图片在资源文件中正确配置
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);  // 使用 QPalette::Window 替换 QPalette::Background
    this->setPalette(palette);

    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

    mtimer = new QTimer();
    connect(mtimer,&QTimer::timeout,this,[this](){
        setState(new StandbyState());
        handle();  // 调用handle函数,调整状态
        ui->standLb->show();
        mtimer->stop();

    });

    //创建数据库
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名称
    this->db.setDatabaseName("./Server.db");
    //打开数据库
    if(!this->db.open())
    {
        qDebug()<< db.lastError().text();
    }
    //执行创建表格语句 id/用户名/密码/流量
    QString createSql = "create table if not exists user(id integer primary key,username varchar(255) unique, password varchar(255),paid integer)";
    QSqlQuery query;
    if(!query.exec(createSql))
    {
        qDebug()<<query.lastError().text();
    }

    // 连接按钮点击信号到状态切换槽（测试）
    connect(ui->someButton, &QPushButton::clicked, this, &MainWindow::handle);

    // 将某个按钮提升为 SetBt 类
    // SetBt *custombutton = qobject_cast<SetBt *>(ui->SeatButton); // 假设你的按钮对象名为 customButton
    // if (custombutton)
    // {
    //     QPixmap pixmap(":/UI/er.png");         // 设置图片路径
    //     custombutton->setButtonImage(pixmap);  // 设置按钮图片
    //     connect(custombutton, &SetBt::clicked, this, &MainWindow::onCustomButtonClicked);
    // }

    //GPS按钮槽函数
    this->GPS_button = qobject_cast<GpsBt *>(ui->GPSButton);
    if(GPS_button)
    {
        QPixmap pixmap(":/UI/GPS.png");      // 设置图片路径
        GPS_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(GPS_button, &GpsBt::clicked, this, &MainWindow::onGPSButtonClicked);
    }

    //音乐播放器按钮槽函数
    this->Music_button = qobject_cast<MusicBt *>(ui->MusicButton);
    if(Music_button)
    {
        QPixmap pixmap(":/UI/Music.png");      // 设置图片路径
        Music_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(Music_button, &MusicBt::clicked, this, &MainWindow::onMusicButtonClicked);
    }

    //流量充值按钮槽函数
    this->Paid_button = qobject_cast<PaidBt *>(ui->PaidButton);
    if(Paid_button)
    {
        QPixmap pixmap(":/UI/Paid.png");      // 设置图片路径
        Paid_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(Paid_button, &PaidBt::clicked, this, &MainWindow::onPaidButtonClicked);
    }

    //道路救援按钮槽函数
    this->Rescue_button = qobject_cast<RescueBt *>(ui->RescueButton);
    if(Paid_button)
    {
        QPixmap pixmap(":/UI/Rescue.png");      // 设置图片路径
        Rescue_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(Rescue_button, &RescueBt::clicked, this, &MainWindow::onRescueButtonClicked);
    }

    //座椅调节按钮槽函数
    this->Seat_button = qobject_cast<SeatBt *>(ui->SeatButton);
    if(Seat_button)
    {
        QPixmap pixmap(":/UI/Seat.png");      // 设置图片路径
        Seat_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(Seat_button, &SeatBt::clicked, this, &MainWindow::onSeatButtonClicked);

    }

    //语音按钮槽函数
    // this->Voice_button = qobject_cast<VoiceBt *>(ui->VoiceButton);
    // if(Voice_button)
    // {
    //     QPixmap pixmap(":/UI/Voice.png");      // 设置图片路径
    //     Voice_button->setButtonImage(pixmap);  // 设置按钮图片
    //     connect(Voice_button, &VoiceBt::clicked, this, &MainWindow::onVoiceButtonClicked);
    // }

    //倒车影像按钮槽函数
    this->BackCar_button = qobject_cast<BackCarBt *>(ui->BackCarButton);
    if(BackCar_button)
    {
        QPixmap pixmap(":/UI/BackCar.png");      // 设置图片路径
        BackCar_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(BackCar_button, &BackCarBt::clicked, this, &MainWindow::onBackCarButtonClicked);
    }

    //创建音乐对象
    this->Music_obj = new  MusicPlayer();
    connect(Music_obj, &MusicPlayer::release, this, [=](){
        this->show();       //点击退出按钮后让主界面显示
        mtimer->start(5000);
    });

    this->Paid_obj = new PaidClient(nullptr);
    connect(Paid_obj,&PaidClient::release,this,[=](){
        this->show();       //点击退出按钮后让主界面显示
        mtimer->start(5000);
    });

    this->backcar_obj = new BackCar(nullptr);
    connect(backcar_obj,&BackCar::release,this,[=](){
        this->show();       //点击退出按钮后让主界面显示
        mtimer->start(5000);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    delete context;
    delete GPS_button;
    delete Music_button;
    delete Paid_button;
    delete Rescue_button;
    delete Seat_button;
    delete Voice_button;
    delete BackCar_button;
    delete Music_obj;
    delete emailSender;
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    QFile::remove("./Server.db");
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
    // if (dynamic_cast<StandbyState*>(context->getState()))
    // {
        setState(new RunningState);
        mtimer->start(5000);
        handle(); // 从待机模式切换到开始模式
        ui->standLb->hide();
    // }
    qDebug()<<"从待机模式切换到开始模式";
    QMainWindow::mousePressEvent(event);
}

// //测试按钮槽函数
// void MainWindow::onCustomButtonClicked()
// {
//     // 自定义按钮点击处理
//     qDebug()<<"槽函数-鼠标被点击(测试)";
// }

void MainWindow::onMusicButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(音乐)";
    mtimer->stop();
    Music_obj->show();
    this->hide();

}

void MainWindow::onGPSButtonClicked()
{
    mtimer->stop();
    qDebug()<<"槽函数-鼠标被点击(GPS)";
}

void MainWindow::onPaidButtonClicked()
{
    mtimer->stop();
    qDebug()<<"槽函数-鼠标被点击(充值)";
    Paid_obj->show();
    this->hide();
}

void MainWindow::onRescueButtonClicked()
{
    mtimer->stop();
    qDebug()<<"槽函数-鼠标被点击(道路救援)";

    //弹出消息对话框
   int ret =  QMessageBox::warning(this, "注意", "已发送救援信息，请立即逃离至安全区域等待救援！",QMessageBox::Yes);
    if(ret == QMessageBox::Yes)
   {
       mtimer->start(5000);
   }
    // 使用适当的SMTP服务器信息和用户凭据
    QString server = "smtp.163.com";
    short port = 25;
    QString username = "bailan1632024@163.com";
    QString password = "WVXZCUTCDQMVPGQQ";
    QString to = "1789414411@qq.com";
    QString subject = "测试主题";
    QString body = "测试内容";

    emailSender->sendEmail(server, port, username, password, to, subject, body);

}

void MainWindow::onSeatButtonClicked()
{
    mtimer->stop();
    qDebug()<<"槽函数-鼠标被点击(座椅调节)";
    CustomDialog dialog;
    dialog.exec();
}

// void MainWindow::onVoiceButtonClicked()
// {
//     qDebug()<<"槽函数-鼠标被点击(语音)";
// }

void MainWindow::onBackCarButtonClicked()
{
    mtimer->stop();
    qDebug()<<"槽函数-鼠标被点击(倒车影像)";
    backcar_obj->show();
    this->hide();
}


