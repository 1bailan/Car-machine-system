/********************************************************************************
** Form generated from reading UI file 'musicbt.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICBT_H
#define UI_MUSICBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicBt
{
public:

    void setupUi(QWidget *MusicBt)
    {
        if (MusicBt->objectName().isEmpty())
            MusicBt->setObjectName("MusicBt");
        MusicBt->resize(400, 300);

        retranslateUi(MusicBt);

        QMetaObject::connectSlotsByName(MusicBt);
    } // setupUi

    void retranslateUi(QWidget *MusicBt)
    {
        MusicBt->setWindowTitle(QCoreApplication::translate("MusicBt", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicBt: public Ui_MusicBt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICBT_H
