/********************************************************************************
** Form generated from reading UI file 'paid.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAID_H
#define UI_PAID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paid
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *numLb;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textEdit;
    QPushButton *loginBt;
    QPushButton *quitBt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Paid)
    {
        if (Paid->objectName().isEmpty())
            Paid->setObjectName("Paid");
        Paid->resize(800, 600);
        QFont font;
        font.setPointSize(16);
        Paid->setFont(font);
        centralwidget = new QWidget(Paid);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 120, 601, 271));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius:10px;\n"
"border:2px solid ffffff;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 130, 581, 251));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        numLb = new QLabel(layoutWidget);
        numLb->setObjectName("numLb");
        QFont font1;
        font1.setPointSize(36);
        numLb->setFont(font1);
        numLb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(numLb);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        textEdit = new QLineEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(0, 50));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius:10px;\n"
"border:2px solid ffffff;\n"
"font: 20pt \"Microsoft YaHei UI\";"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        loginBt = new QPushButton(layoutWidget);
        loginBt->setObjectName("loginBt");
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

        verticalLayout->addWidget(loginBt);

        quitBt = new QPushButton(layoutWidget);
        quitBt->setObjectName("quitBt");
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

        verticalLayout->addWidget(quitBt);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        Paid->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Paid);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Paid->setMenuBar(menubar);
        statusbar = new QStatusBar(Paid);
        statusbar->setObjectName("statusbar");
        Paid->setStatusBar(statusbar);

        retranslateUi(Paid);

        QMetaObject::connectSlotsByName(Paid);
    } // setupUi

    void retranslateUi(QMainWindow *Paid)
    {
        Paid->setWindowTitle(QCoreApplication::translate("Paid", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Paid", "\346\265\201\351\207\217", nullptr));
        numLb->setText(QCoreApplication::translate("Paid", "100.00GB", nullptr));
        label_4->setText(QCoreApplication::translate("Paid", "\346\234\254\346\234\210\345\211\251\344\275\231", nullptr));
        label->setText(QCoreApplication::translate("Paid", "\351\207\221\351\242\235\357\274\232", nullptr));
        textEdit->setText(QString());
        loginBt->setText(QCoreApplication::translate("Paid", "\345\205\205\345\200\274", nullptr));
        quitBt->setText(QCoreApplication::translate("Paid", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paid: public Ui_Paid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAID_H
