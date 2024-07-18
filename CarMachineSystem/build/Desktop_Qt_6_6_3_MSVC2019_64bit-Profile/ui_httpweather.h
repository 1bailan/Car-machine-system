/********************************************************************************
** Form generated from reading UI file 'httpweather.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTTPWEATHER_H
#define UI_HTTPWEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HttpWeather
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *timeLb;
    QHBoxLayout *horizontalLayout;
    QLabel *dataLb;
    QLabel *weekLb;
    QLabel *PicLb;
    QVBoxLayout *verticalLayout;
    QLabel *tempLb;
    QLabel *areaLb;

    void setupUi(QWidget *HttpWeather)
    {
        if (HttpWeather->objectName().isEmpty())
            HttpWeather->setObjectName("HttpWeather");
        HttpWeather->resize(750, 200);
        HttpWeather->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(HttpWeather);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        timeLb = new QLabel(HttpWeather);
        timeLb->setObjectName("timeLb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Titillium Web")});
        font.setPointSize(72);
        timeLb->setFont(font);
        timeLb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(timeLb);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        dataLb = new QLabel(HttpWeather);
        dataLb->setObjectName("dataLb");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(14);
        dataLb->setFont(font1);
        dataLb->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(dataLb);

        weekLb = new QLabel(HttpWeather);
        weekLb->setObjectName("weekLb");
        weekLb->setFont(font1);
        weekLb->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(weekLb);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_2);

        PicLb = new QLabel(HttpWeather);
        PicLb->setObjectName("PicLb");
        PicLb->setStyleSheet(QString::fromUtf8(""));
        PicLb->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(PicLb);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tempLb = new QLabel(HttpWeather);
        tempLb->setObjectName("tempLb");
        tempLb->setFont(font);
        tempLb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tempLb);

        areaLb = new QLabel(HttpWeather);
        areaLb->setObjectName("areaLb");
        areaLb->setFont(font1);
        areaLb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(areaLb);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(HttpWeather);

        QMetaObject::connectSlotsByName(HttpWeather);
    } // setupUi

    void retranslateUi(QWidget *HttpWeather)
    {
        HttpWeather->setWindowTitle(QCoreApplication::translate("HttpWeather", "Form", nullptr));
        timeLb->setText(QCoreApplication::translate("HttpWeather", "10:36", nullptr));
        dataLb->setText(QCoreApplication::translate("HttpWeather", "2024/02/22", nullptr));
        weekLb->setText(QCoreApplication::translate("HttpWeather", "\346\230\237\346\234\237\345\233\233", nullptr));
        PicLb->setText(QString());
        tempLb->setText(QCoreApplication::translate("HttpWeather", "23\342\204\203", nullptr));
        areaLb->setText(QCoreApplication::translate("HttpWeather", "\346\267\261\345\234\263 | \346\231\264\346\234\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HttpWeather: public Ui_HttpWeather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTTPWEATHER_H
