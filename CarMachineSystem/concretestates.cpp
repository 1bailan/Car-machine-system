#include "concretestates.h"

#include "videoplayer.h"

void StartState::handle(MainWindow* mainWindow) {
    qDebug() << "System is starting...\n";

    // 创建视频播放器
    VideoPlayer* player = new VideoPlayer();
    player->show();

    // 连接视频播放结束信号到槽函数
    QObject::connect(player, &VideoPlayer::videoFinished, mainWindow, [=]() {  // 使用 QObject::connect
        qDebug() << "视频播放结束";
        // 视频播放完毕后进入主界面
        mainWindow->setState(new RunningState());
        // qDebug() << __LINE__;
        mainWindow->handle();  // 调用handle函数,调整状态
        delete player;
    });

    // 播放视频
    player->playVideo("./output2.mp4");
    // qDebug() << __LINE__;
}

void RunningState::handle(MainWindow* mainWindow) {
    qDebug() << "System is running...\n";
    // 运行主界面内容
    mainWindow->show();
    mainWindow->mtimer->start(5000);
    // qDebug() << __LINE__;
    mainWindow->setState(new StandbyState());
}

void StandbyState::handle(MainWindow* mainWindow) {
    qDebug() << "System is in standby mode...\n";
    // 黑屏等待点击唤醒
    // 您可以在这里添加黑屏逻辑，例如：
    // mainWindow->setStyleSheet("background-color: black;");
    mainWindow->setState(new StartState());
}
