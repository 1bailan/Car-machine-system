/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <backcarbt.h>
#include <gpsbt.h>
#include <httpweather.h>
#include <musicbt.h>
#include <paidbt.h>
#include <rescuebt.h>
#include <seatbt.h>
#include <voicebt.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    SeatBt *SeatButton;
    MusicBt *MusicButton;
    RescueBt *RescueButton;
    GpsBt *GPSButton;
    PaidBt *PaidButton;
    BackCarBt *BackCarButton;
    HttpWeather *weatherWg;
    QLabel *GPSLb;
    QLabel *VoiceLb;
    QLabel *MusicLb;
    QLabel *PaidLb;
    QLabel *RescueLb;
    QLabel *BackCarLb;
    QPushButton *someButton;
    VoiceBt *VoiceButton;
    QLabel *SeatLb;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256\347\252\227\345\217\243\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"QWidget#weatherWg {\n"
"    border: 2px solid #4CAF50;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SeatButton = new SeatBt(centralwidget);
        SeatButton->setObjectName("SeatButton");
        SeatButton->setGeometry(QRect(125, 350, 100, 100));
        SeatButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        MusicButton = new MusicBt(centralwidget);
        MusicButton->setObjectName("MusicButton");
        MusicButton->setGeometry(QRect(260, 230, 100, 100));
        MusicButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        RescueButton = new RescueBt(centralwidget);
        RescueButton->setObjectName("RescueButton");
        RescueButton->setGeometry(QRect(620, 230, 100, 100));
        RescueButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        GPSButton = new GpsBt(centralwidget);
        GPSButton->setObjectName("GPSButton");
        GPSButton->setGeometry(QRect(80, 230, 100, 100));
        GPSButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        PaidButton = new PaidBt(centralwidget);
        PaidButton->setObjectName("PaidButton");
        PaidButton->setGeometry(QRect(440, 230, 100, 100));
        PaidButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        BackCarButton = new BackCarBt(centralwidget);
        BackCarButton->setObjectName("BackCarButton");
        BackCarButton->setGeometry(QRect(575, 350, 100, 100));
        BackCarButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        weatherWg = new HttpWeather(centralwidget);
        weatherWg->setObjectName("weatherWg");
        weatherWg->setGeometry(QRect(30, 20, 750, 200));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weatherWg->sizePolicy().hasHeightForWidth());
        weatherWg->setSizePolicy(sizePolicy);
        weatherWg->setMinimumSize(QSize(700, 180));
        weatherWg->setStyleSheet(QString::fromUtf8(""));
        GPSLb = new QLabel(centralwidget);
        GPSLb->setObjectName("GPSLb");
        GPSLb->setGeometry(QRect(100, 330, 61, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 BlkEx BT")});
        font.setPointSize(16);
        GPSLb->setFont(font);
        GPSLb->setAlignment(Qt::AlignCenter);
        VoiceLb = new QLabel(centralwidget);
        VoiceLb->setObjectName("VoiceLb");
        VoiceLb->setGeometry(QRect(370, 450, 61, 21));
        VoiceLb->setFont(font);
        VoiceLb->setAlignment(Qt::AlignCenter);
        MusicLb = new QLabel(centralwidget);
        MusicLb->setObjectName("MusicLb");
        MusicLb->setGeometry(QRect(255, 330, 111, 21));
        MusicLb->setFont(font);
        MusicLb->setAlignment(Qt::AlignCenter);
        PaidLb = new QLabel(centralwidget);
        PaidLb->setObjectName("PaidLb");
        PaidLb->setGeometry(QRect(450, 330, 81, 21));
        PaidLb->setFont(font);
        PaidLb->setAlignment(Qt::AlignCenter);
        RescueLb = new QLabel(centralwidget);
        RescueLb->setObjectName("RescueLb");
        RescueLb->setGeometry(QRect(630, 330, 81, 21));
        RescueLb->setFont(font);
        RescueLb->setAlignment(Qt::AlignCenter);
        BackCarLb = new QLabel(centralwidget);
        BackCarLb->setObjectName("BackCarLb");
        BackCarLb->setGeometry(QRect(590, 450, 81, 21));
        BackCarLb->setFont(font);
        BackCarLb->setAlignment(Qt::AlignCenter);
        someButton = new QPushButton(centralwidget);
        someButton->setObjectName("someButton");
        someButton->setGeometry(QRect(370, 0, 80, 18));
        VoiceButton = new VoiceBt(centralwidget);
        VoiceButton->setObjectName("VoiceButton");
        VoiceButton->setGeometry(QRect(350, 350, 100, 100));
        VoiceButton->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        SeatLb = new QLabel(centralwidget);
        SeatLb->setObjectName("SeatLb");
        SeatLb->setGeometry(QRect(140, 450, 81, 21));
        SeatLb->setFont(font);
        SeatLb->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        GPSLb->setText(QCoreApplication::translate("MainWindow", "\345\257\274\350\210\252", nullptr));
        VoiceLb->setText(QCoreApplication::translate("MainWindow", "\350\257\255\351\237\263", nullptr));
        MusicLb->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        PaidLb->setText(QCoreApplication::translate("MainWindow", "\346\265\201\351\207\217\345\205\205\345\200\274", nullptr));
        RescueLb->setText(QCoreApplication::translate("MainWindow", "\351\201\223\350\267\257\346\225\221\346\217\264", nullptr));
        BackCarLb->setText(QCoreApplication::translate("MainWindow", "\345\200\222\350\275\246\345\275\261\345\203\217", nullptr));
        someButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\212\266\346\200\201", nullptr));
        SeatLb->setText(QCoreApplication::translate("MainWindow", "\345\272\247\346\244\205\350\260\203\350\212\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
