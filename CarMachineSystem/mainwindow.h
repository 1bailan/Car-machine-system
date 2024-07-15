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
#include "musicbt.h"
#include "gpsbt.h"
#include "paidbt.h"
#include "rescuebt.h"
#include "seatbt.h"
#include "voicebt.h"
#include "backcarbt.h"
#include "musicplayer.h"
#include "state.h"

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

    void setState(State* state);
    void handle();

protected:
    void mousePressEvent(QMouseEvent *event) override;

protected slots:
    // void onCustomButtonClicked();           //测试按钮槽函数
    void onMusicButtonClicked();            //Music按钮槽函数（音乐）
    void onGPSButtonClicked();              //GPS按钮槽函数（导航）
    void onPaidButtonClicked();             //Paid按钮槽函数（充值）
    void onRescueButtonClicked();           //Rescue按钮槽函数（道路救援）
    void onSeatButtonClicked();             //Seat按钮槽函数（座椅调节）
    void onVoiceButtonClicked();            //Voice按钮槽函数（语音）
    void onBackCarButtonClicked();          //BackCar按钮槽函数（倒车影像）

private:
    Ui::MainWindow *ui;                     //UI对象
    Context* context;                       //上下文对象
    //按钮对象
    GpsBt* GPS_button;
    MusicBt* Music_button;
    PaidBt * Paid_button;
    RescueBt * Rescue_button;
    SeatBt * Seat_button;
    VoiceBt * Voice_button;
    BackCarBt * BackCar_button;

    //功能对象
    MusicPlayer * Music_obj;                //音乐对象

};
#endif // MAINWINDOW_H
