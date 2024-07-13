/*!
* @file QMainWindow.h
* @brief 概述 主界面
* @author Bailan
* @version 版本号(maj.min，主版本.分版本格式)
* @date 日期: 2024 / xx / xx
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "state.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setState(State* state);
    void handle();

protected:
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void onCustomButtonClicked();

private:
    Ui::MainWindow *ui;
    Context* context;

};
#endif // MAINWINDOW_H
