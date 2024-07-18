/********************************************************************************
** Form generated from reading UI file 'webmap.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBMAP_H
#define UI_WEBMAP_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Webmap
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QWebEngineView *webView;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *cityNameEdit;
    QPushButton *setCityBt;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *curCityLb;
    QLineEdit *postionSreachEdit;
    QListWidget *positionListWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *startPostionEdit;
    QPushButton *setStartPostionBt;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *endPostionEdit;
    QPushButton *setEndPostionBt;
    QPushButton *startNavBt;
    QPushButton *closeBt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Webmap)
    {
        if (Webmap->objectName().isEmpty())
            Webmap->setObjectName("Webmap");
        Webmap->resize(800, 480);
        centralwidget = new QWidget(Webmap);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        webView = new QWebEngineView(centralwidget);
        webView->setObjectName("webView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(webView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cityNameEdit = new QLineEdit(centralwidget);
        cityNameEdit->setObjectName("cityNameEdit");
        sizePolicy.setHeightForWidth(cityNameEdit->sizePolicy().hasHeightForWidth());
        cityNameEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        cityNameEdit->setFont(font);

        horizontalLayout_2->addWidget(cityNameEdit);

        setCityBt = new QPushButton(centralwidget);
        setCityBt->setObjectName("setCityBt");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setCityBt->sizePolicy().hasHeightForWidth());
        setCityBt->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        setCityBt->setFont(font1);
        setCityBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00ffff; /* \346\214\211\351\222\256\347\232\204\351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 6px 12px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 12px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" "
                        "   background-color: #2e7d32; /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
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
"    color: #666666; /* \347\246\201\347"
                        "\224\250\347\212\266\346\200\201\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(setCityBt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        curCityLb = new QLabel(centralwidget);
        curCityLb->setObjectName("curCityLb");
        curCityLb->setFont(font);

        horizontalLayout->addWidget(curCityLb);


        verticalLayout->addLayout(horizontalLayout);

        postionSreachEdit = new QLineEdit(centralwidget);
        postionSreachEdit->setObjectName("postionSreachEdit");
        sizePolicy.setHeightForWidth(postionSreachEdit->sizePolicy().hasHeightForWidth());
        postionSreachEdit->setSizePolicy(sizePolicy);
        postionSreachEdit->setFont(font);

        verticalLayout->addWidget(postionSreachEdit);

        positionListWidget = new QListWidget(centralwidget);
        positionListWidget->setObjectName("positionListWidget");
        positionListWidget->setFont(font);

        verticalLayout->addWidget(positionListWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startPostionEdit = new QLineEdit(centralwidget);
        startPostionEdit->setObjectName("startPostionEdit");
        sizePolicy.setHeightForWidth(startPostionEdit->sizePolicy().hasHeightForWidth());
        startPostionEdit->setSizePolicy(sizePolicy);
        startPostionEdit->setFont(font);

        horizontalLayout_3->addWidget(startPostionEdit);

        setStartPostionBt = new QPushButton(centralwidget);
        setStartPostionBt->setObjectName("setStartPostionBt");
        sizePolicy1.setHeightForWidth(setStartPostionBt->sizePolicy().hasHeightForWidth());
        setStartPostionBt->setSizePolicy(sizePolicy1);
        setStartPostionBt->setFont(font1);
        setStartPostionBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00ffff; /* \346\214\211\351\222\256\347\232\204\351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 6px 12px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 12px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" "
                        "   background-color: #2e7d32; /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
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
"    color: #666666; /* \347\246\201\347"
                        "\224\250\347\212\266\346\200\201\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(setStartPostionBt);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        endPostionEdit = new QLineEdit(centralwidget);
        endPostionEdit->setObjectName("endPostionEdit");
        sizePolicy.setHeightForWidth(endPostionEdit->sizePolicy().hasHeightForWidth());
        endPostionEdit->setSizePolicy(sizePolicy);
        endPostionEdit->setFont(font);

        horizontalLayout_4->addWidget(endPostionEdit);

        setEndPostionBt = new QPushButton(centralwidget);
        setEndPostionBt->setObjectName("setEndPostionBt");
        sizePolicy.setHeightForWidth(setEndPostionBt->sizePolicy().hasHeightForWidth());
        setEndPostionBt->setSizePolicy(sizePolicy);
        setEndPostionBt->setFont(font1);
        setEndPostionBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00ffff; /* \346\214\211\351\222\256\347\232\204\351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 6px 12px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 12px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" "
                        "   background-color: #2e7d32; /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
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
"    color: #666666; /* \347\246\201\347"
                        "\224\250\347\212\266\346\200\201\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_4->addWidget(setEndPostionBt);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        startNavBt = new QPushButton(centralwidget);
        startNavBt->setObjectName("startNavBt");
        startNavBt->setFont(font1);
        startNavBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00ffff; /* \346\214\211\351\222\256\347\232\204\351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 8px 18px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 12px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" "
                        "   background-color: #2e7d32; /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
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
"    color: #666666; /* \347\246\201\347"
                        "\224\250\347\212\266\346\200\201\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
""));

        verticalLayout->addWidget(startNavBt);

        closeBt = new QPushButton(centralwidget);
        closeBt->setObjectName("closeBt");
        closeBt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00ffff; /* \346\214\211\351\222\256\347\232\204\351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    padding: 8px 18px; /* \346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center; /* \346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 12px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    margin: 4px 2px; /* \345\244\226\350\276\271\350\267\235 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" "
                        "   background-color: #2e7d32; /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
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
"    color: #666666; /* \347\246\201\347"
                        "\224\250\347\212\266\346\200\201\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
""));

        verticalLayout->addWidget(closeBt);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 5);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);

        horizontalLayout_5->addLayout(verticalLayout);

        horizontalLayout_5->setStretch(0, 5);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_5);

        Webmap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Webmap);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        Webmap->setMenuBar(menubar);
        statusbar = new QStatusBar(Webmap);
        statusbar->setObjectName("statusbar");
        Webmap->setStatusBar(statusbar);

        retranslateUi(Webmap);

        QMetaObject::connectSlotsByName(Webmap);
    } // setupUi

    void retranslateUi(QMainWindow *Webmap)
    {
        Webmap->setWindowTitle(QCoreApplication::translate("Webmap", "MainWindow", nullptr));
        setCityBt->setText(QCoreApplication::translate("Webmap", "\347\247\273\345\212\250", nullptr));
        label->setText(QCoreApplication::translate("Webmap", "\345\275\223\345\211\215\345\237\216\345\270\202\357\274\232", nullptr));
        curCityLb->setText(QString());
        postionSreachEdit->setText(QString());
        postionSreachEdit->setPlaceholderText(QCoreApplication::translate("Webmap", "\346\220\234\347\264\242", nullptr));
        setStartPostionBt->setText(QCoreApplication::translate("Webmap", "\350\256\276\347\275\256\350\265\267\347\202\271", nullptr));
        setEndPostionBt->setText(QCoreApplication::translate("Webmap", "\350\256\276\347\275\256\347\273\210\347\202\271", nullptr));
        startNavBt->setText(QCoreApplication::translate("Webmap", "\345\274\200\345\247\213\345\257\274\350\210\252", nullptr));
        closeBt->setText(QCoreApplication::translate("Webmap", "\351\200\200\345\207\272\345\257\274\350\210\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Webmap: public Ui_Webmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBMAP_H
