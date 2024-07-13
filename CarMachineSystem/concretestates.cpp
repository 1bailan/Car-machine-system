#include "concretestates.h"

void StartState::handle(MainWindow* mainWindow) {
    qDebug() << "System is starting...\n";
    // 播放动画
    mainWindow->setState(new RunningState());
}

void RunningState::handle(MainWindow* mainWindow) {
    qDebug() << "System is running...\n";
    // 运行主界面内容
    mainWindow->setState(new StandbyState());
}

void StandbyState::handle(MainWindow* mainWindow) {
    qDebug() << "System is in standby mode...\n";
    // 黑屏等待点击唤醒
    // 您可以在这里添加黑屏逻辑，例如：
    mainWindow->setStyleSheet("background-color: black;");
    mainWindow->setState(new StartState());
}
