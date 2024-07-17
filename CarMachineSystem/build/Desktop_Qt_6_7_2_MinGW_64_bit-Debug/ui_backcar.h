/********************************************************************************
** Form generated from reading UI file 'backcar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKCAR_H
#define UI_BACKCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackCar
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *closeBt;

    void setupUi(QWidget *BackCar)
    {
        if (BackCar->objectName().isEmpty())
            BackCar->setObjectName("BackCar");
        BackCar->resize(800, 480);
        verticalLayout = new QVBoxLayout(BackCar);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(BackCar);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        closeBt = new QPushButton(BackCar);
        closeBt->setObjectName("closeBt");
        closeBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00ffff; /* \346\214\211\351\222\256\347\232\204\351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 15px 32px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
""
                        "    background-color: #2e7d32; /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    padding-top: 19px; /* \346\214\211\344\270\213\346\227\266\347\232\204\345\206\205\350\276\271\350\267\235\345\217\230\345\214\226\357\274\214\346\250\241\346\213\237\344\275\215\347\247\273\346\225\210\346\236\234 */\n"
"    padding-bottom: 11px; /* \346\214\211\344\270\213\346\227\266\347\232\204\345\206\205\350\276\271\350\267\235\345\217\230\345\214\226\357\274\214\346\250\241\346\213\237\344\275\215\347\247\273\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #4CAF50; /* \347\204\246\347\202\271\347\212\266\346\200\201\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #cccccc; /* \347\246\201\347\224\250\347\212\266\346\200\201\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #666666; /* \347\246\201"
                        "\347\224\250\347\212\266\346\200\201\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
""));

        verticalLayout->addWidget(closeBt);


        retranslateUi(BackCar);

        QMetaObject::connectSlotsByName(BackCar);
    } // setupUi

    void retranslateUi(QWidget *BackCar)
    {
        BackCar->setWindowTitle(QCoreApplication::translate("BackCar", "Form", nullptr));
        label->setText(QCoreApplication::translate("BackCar", "pic", nullptr));
        closeBt->setText(QCoreApplication::translate("BackCar", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BackCar: public Ui_BackCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKCAR_H
