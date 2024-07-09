/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *SettingsBt;
    QPushButton *RescueBt;
    QPushButton *imageBt;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BackupCameraBt;
    QPushButton *pushButton_5;
    QPushButton *weatherBt;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *VciBt;
    QPushButton *batteryBt;
    QPushButton *homeBt;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(800, 480);
        verticalLayout_2 = new QVBoxLayout(Menu);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        SettingsBt = new QPushButton(Menu);
        SettingsBt->setObjectName("SettingsBt");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsBt->sizePolicy().hasHeightForWidth());
        SettingsBt->setSizePolicy(sizePolicy);
        SettingsBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/N.png);"));

        horizontalLayout->addWidget(SettingsBt);

        RescueBt = new QPushButton(Menu);
        RescueBt->setObjectName("RescueBt");
        sizePolicy.setHeightForWidth(RescueBt->sizePolicy().hasHeightForWidth());
        RescueBt->setSizePolicy(sizePolicy);
        RescueBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/1.png);"));

        horizontalLayout->addWidget(RescueBt);

        imageBt = new QPushButton(Menu);
        imageBt->setObjectName("imageBt");
        sizePolicy.setHeightForWidth(imageBt->sizePolicy().hasHeightForWidth());
        imageBt->setSizePolicy(sizePolicy);
        imageBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/Z.png);"));

        horizontalLayout->addWidget(imageBt);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        BackupCameraBt = new QPushButton(Menu);
        BackupCameraBt->setObjectName("BackupCameraBt");
        sizePolicy.setHeightForWidth(BackupCameraBt->sizePolicy().hasHeightForWidth());
        BackupCameraBt->setSizePolicy(sizePolicy);
        BackupCameraBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/ee.png);"));

        horizontalLayout_2->addWidget(BackupCameraBt);

        pushButton_5 = new QPushButton(Menu);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/UI/wqe.png);"));

        horizontalLayout_2->addWidget(pushButton_5);

        weatherBt = new QPushButton(Menu);
        weatherBt->setObjectName("weatherBt");
        sizePolicy.setHeightForWidth(weatherBt->sizePolicy().hasHeightForWidth());
        weatherBt->setSizePolicy(sizePolicy);
        weatherBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/12.png);"));

        horizontalLayout_2->addWidget(weatherBt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        VciBt = new QPushButton(Menu);
        VciBt->setObjectName("VciBt");
        sizePolicy.setHeightForWidth(VciBt->sizePolicy().hasHeightForWidth());
        VciBt->setSizePolicy(sizePolicy);
        VciBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/ss.png);"));

        horizontalLayout_3->addWidget(VciBt);

        batteryBt = new QPushButton(Menu);
        batteryBt->setObjectName("batteryBt");
        sizePolicy.setHeightForWidth(batteryBt->sizePolicy().hasHeightForWidth());
        batteryBt->setSizePolicy(sizePolicy);
        batteryBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/4.png);"));

        horizontalLayout_3->addWidget(batteryBt);

        homeBt = new QPushButton(Menu);
        homeBt->setObjectName("homeBt");
        sizePolicy.setHeightForWidth(homeBt->sizePolicy().hasHeightForWidth());
        homeBt->setSizePolicy(sizePolicy);
        homeBt->setStyleSheet(QString::fromUtf8("image: url(:/UI/J.png);"));

        horizontalLayout_3->addWidget(homeBt);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        SettingsBt->setText(QString());
        RescueBt->setText(QString());
        imageBt->setText(QString());
        BackupCameraBt->setText(QString());
        pushButton_5->setText(QString());
        weatherBt->setText(QString());
        VciBt->setText(QString());
        batteryBt->setText(QString());
        homeBt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
