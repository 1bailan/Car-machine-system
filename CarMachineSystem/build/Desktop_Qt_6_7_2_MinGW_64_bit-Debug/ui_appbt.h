/********************************************************************************
** Form generated from reading UI file 'appbt.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPBT_H
#define UI_APPBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppBt
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *picLb;

    void setupUi(QWidget *AppBt)
    {
        if (AppBt->objectName().isEmpty())
            AppBt->setObjectName("AppBt");
        AppBt->resize(120, 120);
        AppBt->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AppBt);
        verticalLayout->setObjectName("verticalLayout");
        picLb = new QLabel(AppBt);
        picLb->setObjectName("picLb");
        picLb->setStyleSheet(QString::fromUtf8(""));
        picLb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(picLb);


        retranslateUi(AppBt);

        QMetaObject::connectSlotsByName(AppBt);
    } // setupUi

    void retranslateUi(QWidget *AppBt)
    {
        AppBt->setWindowTitle(QCoreApplication::translate("AppBt", "Form", nullptr));
        picLb->setText(QCoreApplication::translate("AppBt", "pic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppBt: public Ui_AppBt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPBT_H
