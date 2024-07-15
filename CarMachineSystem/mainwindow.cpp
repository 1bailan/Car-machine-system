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
    //初始化状态
    handle();
    //设置窗口画面大小固定
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);

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
    this->Voice_button = qobject_cast<VoiceBt *>(ui->VoiceButton);
    if(Voice_button)
    {
        QPixmap pixmap(":/UI/Voice.png");      // 设置图片路径
        Voice_button->setButtonImage(pixmap);  // 设置按钮图片
        connect(Voice_button, &VoiceBt::clicked, this, &MainWindow::onVoiceButtonClicked);
    }

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
        this->show();
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
    if (dynamic_cast<StandbyState*>(context->getState()))
    {
        handle(); // 从待机模式切换到开始模式
    }
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

    Music_obj->show();
    this->hide();

}

void MainWindow::onGPSButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(GPS)";
}

void MainWindow::onPaidButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(充值)";
}

void MainWindow::onRescueButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(道路救援)";
}

void MainWindow::onSeatButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(座椅调节)";
}

void MainWindow::onVoiceButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(语音)";
}

void MainWindow::onBackCarButtonClicked()
{
    qDebug()<<"槽函数-鼠标被点击(倒车影像)";
}
