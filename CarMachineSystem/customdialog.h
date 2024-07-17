#ifndef CUSTOMDIALOG_H
#define CUSTOMDIALOG_H

#include <QDialog>
#include <QLabel>

class QPushButton;

class CustomDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomDialog(QWidget *parent = nullptr);

protected slots:
    void onCloseButtonClicked();
private slots:


private:
    int m_value;
    QTimer *m_timer;
    QLabel *m_label;

    QPushButton *btnPlus;
    QPushButton *btnMinus;
    QPushButton *closeButton;
};

#endif // CUSTOMDIALOG_H
