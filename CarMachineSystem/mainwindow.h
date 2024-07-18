/*!
* @file QMainWindow.h
* @brief 概述 主界面
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / xx / xx
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "musicbt.h"
#include "gpsbt.h"
#include "paidbt.h"
#include "rescuebt.h"
#include "seatbt.h"
#include "voicebt.h"
#include "backcarbt.h"
#include "musicplayer.h"
#include "state.h"
#include "paidclient.h"
#include "emailsender.h"
#include "customdialog.h"
#include "setbt.h"
#include "concretestates.h"
// #include "backcar.h"     倒车头文件
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QCryptographicHash>
#include "VideoPlayer.h"
#include "webmap.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTimer* mtimer;

    void setState(State* state);
    void handle();
    void startVideo();

protected:
    void mousePressEvent(QMouseEvent *event) override;

protected slots:
    // void onCustomButtonClicked();           //测试按钮槽函数
    // void onVoiceButtonClicked();            //Voice按钮槽函数（语音）
    void onMusicButtonClicked();            //Music按钮槽函数（音乐）
    void onGPSButtonClicked();              //GPS按钮槽函数（导航）
    void onPaidButtonClicked();             //Paid按钮槽函数（充值）
    void onRescueButtonClicked();           //Rescue按钮槽函数（道路救援）
    void onSeatButtonClicked();             //Seat按钮槽函数（座椅调节）
    void onBackCarButtonClicked();          //BackCar按钮槽函数（倒车影像）

    void myplayVideo();
private:
    Ui::MainWindow *ui;                     //UI对象
    //动画
    Context* context;                       //上下文对象
    //按钮对象
    GpsBt* GPS_button;                      //GPS按钮
    MusicBt* Music_button;                  //音乐播放器按钮
    PaidBt * Paid_button;                   //流量充值按钮
    RescueBt * Rescue_button;               //道路救援按钮
    SeatBt * Seat_button;                   //座椅调节按钮
    VoiceBt * Voice_button;                 //语音按钮（扩展）
    // BackCarBt * BackCar_button;             //倒车影像按钮

    //功能对象
    MusicPlayer * Music_obj;                //音乐对象
    PaidClient * Paid_obj;                  //流量充值界面
    QSqlDatabase db;                        //数据库对象
    EmailSender *email;                     //邮箱对象
    // BackCar * backcar_obj;                 //倒车对象
    Webmap * map;                          //地图对象

};
#endif // MAINWINDOW_H
