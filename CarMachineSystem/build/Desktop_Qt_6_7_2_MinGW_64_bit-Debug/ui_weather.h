/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weather
{
public:
    QTextEdit *weatherEd;
    QLabel *weeatherLb;

    void setupUi(QWidget *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName("Weather");
        Weather->resize(605, 370);
        weatherEd = new QTextEdit(Weather);
        weatherEd->setObjectName("weatherEd");
        weatherEd->setGeometry(QRect(240, 130, 104, 64));
        weeatherLb = new QLabel(Weather);
        weeatherLb->setObjectName("weeatherLb");
        weeatherLb->setGeometry(QRect(130, 120, 81, 81));
        weeatherLb->setStyleSheet(QString::fromUtf8("image: url(:/UI/11.png);"));

        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QWidget *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "Form", nullptr));
        weeatherLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
