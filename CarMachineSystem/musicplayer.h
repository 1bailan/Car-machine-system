#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QWidget>
#include <QtMultimedia>          //添加头文件
#include <QListWidgetItem>

namespace Ui {
class MusicPlayer;
}

class MusicPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MusicPlayer(QWidget *parent = nullptr);
    ~MusicPlayer();

private:
    Ui::MusicPlayer *ui;
    QMediaPlayer  *player;      //播放器
    bool    loopPlay=true;      //是否循环播放
    QString  durationTime;      //文件总长度，mm:ss字符串
    QString  positionTime;      //当前播放到位置，mm:ss字符串

    QUrl getUrlFromItem(QListWidgetItem *item);         //获取item的用户数据
    bool eventFilter(QObject *watched, QEvent *event);  //事件过滤处理

private slots:
//自定义槽函数
    void do_stateChanged(QMediaPlayer::PlaybackState state);    //播放器状态发生变化

    void do_sourceChanged(const QUrl &media);   //文件发生变化

    void do_durationChanged(qint64 duration);   //文件长度发生变化

    void do_positionChanged(qint64 position);   //播放位置发生变化

    void do_metaDataChanged();          //元数据发生变化

    //  按键
    void on_btnAdd_clicked();       //添加按钮

    void on_btnPlay_clicked();      //播放按钮

    void on_btnPause_clicked();     //暂停

    void on_btnStop_clicked();      //停止

    //列表框
    void on_listWidget_doubleClicked(const QModelIndex &index);     //双击listWidget时切换播放文件

    void on_btnClear_clicked();                         //"清空"按钮，清空播放列表

    void on_sliderVolumn_valueChanged(int value);       //调整音量

    void on_btnSound_clicked();                         //静音控制

    void on_sliderPosition_valueChanged(int value);     //播放进度调控

    void on_btnPrevious_clicked();                      //前一曲按钮

    void on_btnNext_clicked();                          //下一首按钮

    void on_btnLoop_clicked(bool checked);              //循环按钮点击

    void on_doubleSpinBox_valueChanged(double arg1);    //"倍速" DoubleSpinbox

    void on_btnRemove_clicked();                        //"移除"按钮，移除列表中的当前项

    void on_btnClose_clicked();                         //"退出"按钮，返回主界面

signals:
    //信号
    void release();
};

#endif // MUSICPLAYER_H
