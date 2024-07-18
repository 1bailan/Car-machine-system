/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
#include <gpsbt.h>
#include <httpweather.h>
#include <musicbt.h>
#include <paidbt.h>
#include <rescuebt.h>
#include <seatbt.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    HttpWeather *weatherWg;
    QPushButton *someButton;
    QWidget *Appwidget;
    QLabel *RescueLb;
    RescueBt *RescueButton;
    PaidBt *PaidButton;
    QLabel *MusicLb;
    SeatBt *SeatButton;
    QLabel *GPSLb;
    MusicBt *MusicButton;
    GpsBt *GPSButton;
    QLabel *PaidLb;
    QLabel *SeatLb;
    QWidget *standLb;
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
        weatherWg = new HttpWeather(centralwidget);
        weatherWg->setObjectName("weatherWg");
        weatherWg->setGeometry(QRect(30, 0, 750, 200));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weatherWg->sizePolicy().hasHeightForWidth());
        weatherWg->setSizePolicy(sizePolicy);
        weatherWg->setMinimumSize(QSize(700, 180));
        weatherWg->setStyleSheet(QString::fromUtf8(""));
        someButton = new QPushButton(centralwidget);
        someButton->setObjectName("someButton");
        someButton->setGeometry(QRect(370, 0, 80, 18));
        Appwidget = new QWidget(centralwidget);
        Appwidget->setObjectName("Appwidget");
        Appwidget->setGeometry(QRect(30, 200, 741, 261));
        RescueLb = new QLabel(Appwidget);
        RescueLb->setObjectName("RescueLb");
        RescueLb->setGeometry(QRect(530, 110, 81, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 BlkEx BT")});
        font.setPointSize(16);
        RescueLb->setFont(font);
        RescueLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        RescueLb->setAlignment(Qt::AlignCenter);
        RescueButton = new RescueBt(Appwidget);
        RescueButton->setObjectName("RescueButton");
        RescueButton->setGeometry(QRect(520, 10, 100, 100));
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
        PaidButton = new PaidBt(Appwidget);
        PaidButton->setObjectName("PaidButton");
        PaidButton->setGeometry(QRect(420, 120, 100, 100));
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
        MusicLb = new QLabel(Appwidget);
        MusicLb->setObjectName("MusicLb");
        MusicLb->setGeometry(QRect(290, 110, 111, 21));
        MusicLb->setFont(font);
        MusicLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        MusicLb->setAlignment(Qt::AlignCenter);
        SeatButton = new SeatBt(Appwidget);
        SeatButton->setObjectName("SeatButton");
        SeatButton->setGeometry(QRect(200, 120, 100, 100));
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
        GPSLb = new QLabel(Appwidget);
        GPSLb->setObjectName("GPSLb");
        GPSLb->setGeometry(QRect(100, 110, 61, 21));
        GPSLb->setFont(font);
        GPSLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        GPSLb->setAlignment(Qt::AlignCenter);
        MusicButton = new MusicBt(Appwidget);
        MusicButton->setObjectName("MusicButton");
        MusicButton->setGeometry(QRect(300, 10, 100, 100));
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
        GPSButton = new GpsBt(Appwidget);
        GPSButton->setObjectName("GPSButton");
        GPSButton->setGeometry(QRect(80, 10, 100, 100));
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
        PaidLb = new QLabel(Appwidget);
        PaidLb->setObjectName("PaidLb");
        PaidLb->setGeometry(QRect(430, 220, 81, 21));
        PaidLb->setFont(font);
        PaidLb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        PaidLb->setAlignment(Qt::AlignCenter);
        SeatLb = new QLabel(Appwidget);
        SeatLb->setObjectName("SeatLb");
        SeatLb->setGeometry(QRect(210, 220, 81, 21));
        SeatLb->setFont(font);
        SeatLb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        SeatLb->setAlignment(Qt::AlignCenter);
        standLb = new QWidget(centralwidget);
        standLb->setObjectName("standLb");
        standLb->setGeometry(QRect(0, 0, 800, 480));
        standLb->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        Appwidget->raise();
        weatherWg->raise();
        someButton->raise();
        standLb->raise();
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
        someButton->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\212\266\346\200\201", nullptr));
        RescueLb->setText(QCoreApplication::translate("MainWindow", "\351\201\223\350\267\257\346\225\221\346\217\264", nullptr));
        MusicLb->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        GPSLb->setText(QCoreApplication::translate("MainWindow", "\345\257\274\350\210\252", nullptr));
        PaidLb->setText(QCoreApplication::translate("MainWindow", "\346\265\201\351\207\217\345\205\205\345\200\274", nullptr));
        SeatLb->setText(QCoreApplication::translate("MainWindow", "\345\272\247\346\244\205\350\260\203\350\212\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
