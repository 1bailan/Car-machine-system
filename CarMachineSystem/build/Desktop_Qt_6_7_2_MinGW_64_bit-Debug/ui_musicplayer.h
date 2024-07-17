/********************************************************************************
** Form generated from reading UI file 'musicplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnClear;
    QPushButton *btnClose;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QListWidget *listWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *labPic;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnPrevious;
    QPushButton *btnNext;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *btnLoop;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labCurMedia;
    QSlider *sliderPosition;
    QLabel *labRatio;

    void setupUi(QWidget *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName("MusicPlayer");
        MusicPlayer->resize(800, 480);
        MusicPlayer->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(255, 255, 255);"));
        verticalLayout_4 = new QVBoxLayout(MusicPlayer);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnAdd = new QPushButton(MusicPlayer);
        btnAdd->setObjectName("btnAdd");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Swis721 BlkEx BT")});
        font.setPointSize(18);
        btnAdd->setFont(font);
        btnAdd->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/316.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnAdd->setIcon(icon);

        horizontalLayout_3->addWidget(btnAdd);

        btnRemove = new QPushButton(MusicPlayer);
        btnRemove->setObjectName("btnRemove");
        sizePolicy.setHeightForWidth(btnRemove->sizePolicy().hasHeightForWidth());
        btnRemove->setSizePolicy(sizePolicy);
        btnRemove->setMinimumSize(QSize(0, 50));
        btnRemove->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/318.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnRemove->setIcon(icon1);

        horizontalLayout_3->addWidget(btnRemove);

        btnClear = new QPushButton(MusicPlayer);
        btnClear->setObjectName("btnClear");
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setMinimumSize(QSize(0, 50));
        btnClear->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/214.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnClear->setIcon(icon2);

        horizontalLayout_3->addWidget(btnClear);

        btnClose = new QPushButton(MusicPlayer);
        btnClose->setObjectName("btnClose");
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(0, 50));
        btnClose->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnClose->setIcon(icon3);

        horizontalLayout_3->addWidget(btnClose);


        verticalLayout_3->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(MusicPlayer);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        splitter = new QSplitter(groupBox);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName("listWidget");
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setDragEnabled(true);
        listWidget->setDragDropMode(QAbstractItemView::InternalMove);
        splitter->addWidget(listWidget);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(200, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 198, 308));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        labPic = new QLabel(scrollAreaWidgetContents);
        labPic->setObjectName("labPic");
        labPic->setStyleSheet(QString::fromUtf8(""));
        labPic->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labPic);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);

        verticalLayout_2->addWidget(splitter);

        verticalLayout_2->setStretch(0, 1);

        verticalLayout_3->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        btnPlay = new QPushButton(MusicPlayer);
        btnPlay->setObjectName("btnPlay");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnPlay->sizePolicy().hasHeightForWidth());
        btnPlay->setSizePolicy(sizePolicy1);
        btnPlay->setMinimumSize(QSize(50, 50));
        btnPlay->setStyleSheet(QString::fromUtf8("image: url(:/UI/HD-025.png);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/620.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPlay->setIcon(icon4);

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(MusicPlayer);
        btnPause->setObjectName("btnPause");
        sizePolicy1.setHeightForWidth(btnPause->sizePolicy().hasHeightForWidth());
        btnPause->setSizePolicy(sizePolicy1);
        btnPause->setMinimumSize(QSize(50, 50));
        btnPause->setStyleSheet(QString::fromUtf8("image: url(:/UI/HD-024.png);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/622.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPause->setIcon(icon5);

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(MusicPlayer);
        btnStop->setObjectName("btnStop");
        sizePolicy1.setHeightForWidth(btnStop->sizePolicy().hasHeightForWidth());
        btnStop->setSizePolicy(sizePolicy1);
        btnStop->setMinimumSize(QSize(50, 50));
        btnStop->setStyleSheet(QString::fromUtf8("image: url(:/UI/V.png);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/624.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnStop->setIcon(icon6);

        horizontalLayout->addWidget(btnStop);

        btnPrevious = new QPushButton(MusicPlayer);
        btnPrevious->setObjectName("btnPrevious");
        sizePolicy1.setHeightForWidth(btnPrevious->sizePolicy().hasHeightForWidth());
        btnPrevious->setSizePolicy(sizePolicy1);
        btnPrevious->setMinimumSize(QSize(50, 50));
        btnPrevious->setStyleSheet(QString::fromUtf8("image: url(:/UI/A.png);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/616.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPrevious->setIcon(icon7);

        horizontalLayout->addWidget(btnPrevious);

        btnNext = new QPushButton(MusicPlayer);
        btnNext->setObjectName("btnNext");
        sizePolicy1.setHeightForWidth(btnNext->sizePolicy().hasHeightForWidth());
        btnNext->setSizePolicy(sizePolicy1);
        btnNext->setMinimumSize(QSize(50, 50));
        btnNext->setStyleSheet(QString::fromUtf8("image: url(:/UI/M.png);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/630.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnNext->setIcon(icon8);

        horizontalLayout->addWidget(btnNext);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        doubleSpinBox = new QDoubleSpinBox(MusicPlayer);
        doubleSpinBox->setObjectName("doubleSpinBox");
        sizePolicy1.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy1);
        doubleSpinBox->setMinimumSize(QSize(50, 50));
        doubleSpinBox->setFrame(true);
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(0.500000000000000);
        doubleSpinBox->setMaximum(1.500000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox);

        btnLoop = new QPushButton(MusicPlayer);
        btnLoop->setObjectName("btnLoop");
        sizePolicy1.setHeightForWidth(btnLoop->sizePolicy().hasHeightForWidth());
        btnLoop->setSizePolicy(sizePolicy1);
        btnLoop->setMinimumSize(QSize(50, 50));
        btnLoop->setFont(font);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/refresh16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnLoop->setIcon(icon9);
        btnLoop->setCheckable(true);
        btnLoop->setChecked(true);

        horizontalLayout->addWidget(btnLoop);

        btnSound = new QPushButton(MusicPlayer);
        btnSound->setObjectName("btnSound");
        sizePolicy1.setHeightForWidth(btnSound->sizePolicy().hasHeightForWidth());
        btnSound->setSizePolicy(sizePolicy1);
        btnSound->setMinimumSize(QSize(50, 50));
        btnSound->setStyleSheet(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/volumn.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnSound->setIcon(icon10);
        btnSound->setIconSize(QSize(24, 24));
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(MusicPlayer);
        sliderVolumn->setObjectName("sliderVolumn");
        sizePolicy.setHeightForWidth(sliderVolumn->sizePolicy().hasHeightForWidth());
        sliderVolumn->setSizePolicy(sizePolicy);
        sliderVolumn->setMinimumSize(QSize(50, 50));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labCurMedia = new QLabel(MusicPlayer);
        labCurMedia->setObjectName("labCurMedia");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labCurMedia->sizePolicy().hasHeightForWidth());
        labCurMedia->setSizePolicy(sizePolicy2);
        labCurMedia->setMinimumSize(QSize(150, 25));
        QFont font1;
        font1.setPointSize(14);
        labCurMedia->setFont(font1);

        horizontalLayout_2->addWidget(labCurMedia);

        sliderPosition = new QSlider(MusicPlayer);
        sliderPosition->setObjectName("sliderPosition");
        sizePolicy.setHeightForWidth(sliderPosition->sizePolicy().hasHeightForWidth());
        sliderPosition->setSizePolicy(sizePolicy);
        sliderPosition->setMinimumSize(QSize(0, 25));
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderPosition);

        labRatio = new QLabel(MusicPlayer);
        labRatio->setObjectName("labRatio");
        sizePolicy2.setHeightForWidth(labRatio->sizePolicy().hasHeightForWidth());
        labRatio->setSizePolicy(sizePolicy2);
        labRatio->setMinimumSize(QSize(125, 25));
        labRatio->setFont(font1);

        horizontalLayout_2->addWidget(labRatio);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(MusicPlayer);

        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QWidget *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QCoreApplication::translate("MusicPlayer", "Form", nullptr));
        btnAdd->setText(QCoreApplication::translate("MusicPlayer", "\346\267\273\345\212\240", nullptr));
        btnRemove->setText(QCoreApplication::translate("MusicPlayer", "\347\247\273\351\231\244", nullptr));
        btnClear->setText(QCoreApplication::translate("MusicPlayer", "\346\270\205\347\251\272", nullptr));
        btnClose->setText(QCoreApplication::translate("MusicPlayer", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QString());
        labPic->setText(QCoreApplication::translate("MusicPlayer", "Pic", nullptr));
#if QT_CONFIG(tooltip)
        btnPlay->setToolTip(QCoreApplication::translate("MusicPlayer", "\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPlay->setText(QString());
#if QT_CONFIG(tooltip)
        btnPause->setToolTip(QCoreApplication::translate("MusicPlayer", "\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPause->setText(QString());
#if QT_CONFIG(tooltip)
        btnStop->setToolTip(QCoreApplication::translate("MusicPlayer", "\345\201\234\346\255\242", nullptr));
#endif // QT_CONFIG(tooltip)
        btnStop->setText(QString());
#if QT_CONFIG(tooltip)
        btnPrevious->setToolTip(QCoreApplication::translate("MusicPlayer", "\345\211\215\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPrevious->setText(QString());
#if QT_CONFIG(tooltip)
        btnNext->setToolTip(QCoreApplication::translate("MusicPlayer", "\345\220\216\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNext->setText(QString());
        doubleSpinBox->setPrefix(QString());
        doubleSpinBox->setSuffix(QCoreApplication::translate("MusicPlayer", " \345\200\215\351\200\237 ", nullptr));
        btnLoop->setText(QCoreApplication::translate("MusicPlayer", "\345\276\252\347\216\257", nullptr));
        btnSound->setText(QString());
        labCurMedia->setText(QCoreApplication::translate("MusicPlayer", "\346\227\240\346\233\262\347\233\256", nullptr));
        labRatio->setText(QCoreApplication::translate("MusicPlayer", "\350\277\233\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
