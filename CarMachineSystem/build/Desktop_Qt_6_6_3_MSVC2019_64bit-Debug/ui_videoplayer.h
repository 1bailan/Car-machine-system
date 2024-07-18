/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *videoLb;

    void setupUi(QWidget *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName("VideoPlayer");
        VideoPlayer->resize(800, 480);
        verticalLayout = new QVBoxLayout(VideoPlayer);
        verticalLayout->setObjectName("verticalLayout");
        videoLb = new QLabel(VideoPlayer);
        videoLb->setObjectName("videoLb");

        verticalLayout->addWidget(videoLb);


        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QWidget *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QCoreApplication::translate("VideoPlayer", "Form", nullptr));
        videoLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
