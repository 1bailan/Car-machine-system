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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppBt
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *PicBt;
    QLabel *nameLb;

    void setupUi(QWidget *AppBt)
    {
        if (AppBt->objectName().isEmpty())
            AppBt->setObjectName("AppBt");
        AppBt->resize(94, 107);
        verticalLayout = new QVBoxLayout(AppBt);
        verticalLayout->setObjectName("verticalLayout");
        PicBt = new QPushButton(AppBt);
        PicBt->setObjectName("PicBt");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PicBt->sizePolicy().hasHeightForWidth());
        PicBt->setSizePolicy(sizePolicy);
        PicBt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"   "
                        " color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        verticalLayout->addWidget(PicBt);

        nameLb = new QLabel(AppBt);
        nameLb->setObjectName("nameLb");
        nameLb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nameLb);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        retranslateUi(AppBt);

        QMetaObject::connectSlotsByName(AppBt);
    } // setupUi

    void retranslateUi(QWidget *AppBt)
    {
        AppBt->setWindowTitle(QCoreApplication::translate("AppBt", "Form", nullptr));
        PicBt->setText(QString());
        nameLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AppBt: public Ui_AppBt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPBT_H
