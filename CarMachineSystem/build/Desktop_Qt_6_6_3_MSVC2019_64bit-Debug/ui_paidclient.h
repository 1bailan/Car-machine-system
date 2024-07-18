/********************************************************************************
** Form generated from reading UI file 'paidclient.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAIDCLIENT_H
#define UI_PAIDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaidClient
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *userLd;
    QSpacerItem *verticalSpacer;
    QLineEdit *passLd;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerBt;
    QPushButton *loginBt;
    QPushButton *quitBt;

    void setupUi(QWidget *PaidClient)
    {
        if (PaidClient->objectName().isEmpty())
            PaidClient->setObjectName("PaidClient");
        PaidClient->resize(800, 480);
        PaidClient->setStyleSheet(QString::fromUtf8("QWidget#PaidClient{\n"
"border-image: url(:/UI/login.png);\n"
"}"));
        layoutWidget = new QWidget(PaidClient);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 80, 481, 291));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(48);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        userLd = new QLineEdit(layoutWidget);
        userLd->setObjectName("userLd");
        userLd->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(20);
        font1.setBold(true);
        userLd->setFont(font1);
        userLd->setAutoFillBackground(false);
        userLd->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:2px solid #ffffff;\n"
"	border-radius:10px;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	color: rgb(0, 170, 255);\n"
"}"));

        verticalLayout->addWidget(userLd);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        passLd = new QLineEdit(layoutWidget);
        passLd->setObjectName("passLd");
        passLd->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        passLd->setFont(font2);
        passLd->setAutoFillBackground(false);
        passLd->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:2px solid #ffffff;\n"
"	border-radius:10px;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	color: rgb(0, 170, 255);\n"
"}"));

        verticalLayout->addWidget(passLd);

        verticalLayout->setStretch(2, 2);

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        registerBt = new QPushButton(layoutWidget);
        registerBt->setObjectName("registerBt");
        registerBt->setMinimumSize(QSize(0, 25));
        registerBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(registerBt);

        loginBt = new QPushButton(layoutWidget);
        loginBt->setObjectName("loginBt");
        loginBt->setMinimumSize(QSize(0, 25));
        loginBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(loginBt);


        verticalLayout_2->addLayout(horizontalLayout);

        quitBt = new QPushButton(PaidClient);
        quitBt->setObjectName("quitBt");
        quitBt->setGeometry(QRect(640, 420, 157, 59));
        quitBt->setMinimumSize(QSize(0, 25));
        quitBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(PaidClient);

        QMetaObject::connectSlotsByName(PaidClient);
    } // setupUi

    void retranslateUi(QWidget *PaidClient)
    {
        PaidClient->setWindowTitle(QCoreApplication::translate("PaidClient", "Form", nullptr));
        label->setText(QCoreApplication::translate("PaidClient", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        userLd->setPlaceholderText(QCoreApplication::translate("PaidClient", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        passLd->setPlaceholderText(QCoreApplication::translate("PaidClient", "\345\257\206\347\240\201\357\274\232", nullptr));
        registerBt->setText(QCoreApplication::translate("PaidClient", "\346\263\250\345\206\214", nullptr));
        loginBt->setText(QCoreApplication::translate("PaidClient", "\347\231\273\345\275\225", nullptr));
        quitBt->setText(QCoreApplication::translate("PaidClient", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaidClient: public Ui_PaidClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAIDCLIENT_H
