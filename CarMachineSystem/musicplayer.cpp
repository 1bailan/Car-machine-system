#include "musicplayer.h"
#include "ui_musicplayer.h"

#include <QFileDialog>

MusicPlayer::MusicPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);

    ui->listWidget->installEventFilter(this);                         // 安装事件过滤器：用来过滤和处理与列表部件（listWidget）相关的事件
    ui->listWidget->setDragEnabled(true);                             // 允许拖放操作
    ui->listWidget->setDragDropMode(QAbstractItemView::InternalMove); // 列表项可在组件内部中被移动

    player = new QMediaPlayer(this);                    // 创建播放器对象
    QAudioOutput *audioOutput = new QAudioOutput(this); // 音频输出，指向默认的音频输出设备
    player->setAudioOutput(audioOutput);                // 设置音频输出

    connect(player, &QMediaPlayer::positionChanged,this, &MusicPlayer::do_positionChanged);      // 播放位置发生变化，更新进度显示
    connect(player, &QMediaPlayer::durationChanged,this, &MusicPlayer::do_durationChanged);      // 播放源长度发生变化
    connect(player, &QMediaPlayer::sourceChanged,this, &MusicPlayer::do_sourceChanged);          // 播放源发生变化
    connect(player, &QMediaPlayer::playbackStateChanged,this, &MusicPlayer::do_stateChanged);    // 播放器状态发生变化
    connect(player, &QMediaPlayer::metaDataChanged,this, &MusicPlayer::do_metaDataChanged);      // 元数据发生变化
    // （metaDataChanged）元数据：表示媒体的元数据（比如歌曲的标题、艺术家、专辑等信息）发生了变化
}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

QUrl MusicPlayer::getUrlFromItem(QListWidgetItem *item)
{
    QVariant itemData = item->data(Qt::UserRole); // 获取用户数据
    QUrl source = itemData.value<QUrl>();         // QVariant转换为QUrl类型
    return source;
}

bool MusicPlayer::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() != QEvent::KeyPress) // 不是KeyPress事件，退出       //不是键盘按下退出
        return QWidget::eventFilter(watched, event);

    QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
    if (keyEvent->key() != Qt::Key_Delete) // 按下的不是Delete键，退出
        return QWidget::eventFilter(watched, event);

    if (watched == ui->listWidget) // 如果按下了Delete键且来自于listWidget列表部件
    {
        QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->currentRow()); // takeItem ：从列表中移除该列表项
            // currentRow ：获取当前被选中的列表项（获取当前行号）
        delete item;                                                                    // 删除该列表项的内存空间
    }
    return true; // 表示事件已经被处理
}

void MusicPlayer::do_stateChanged(QMediaPlayer::PlaybackState state)
{ // 播放器状态变化时执行，更新按钮状态，或播放下一曲
    ui->btnPlay->setEnabled(state != QMediaPlayer::PlayingState);
    ui->btnPause->setEnabled(state == QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state == QMediaPlayer::PlayingState);

    // 播放完一曲后停止了，如果loopPlay为true，自动播放下一曲
    if (loopPlay && (state == QMediaPlayer::StoppedState))
    {
        int count = ui->listWidget->count();
        int curRow = ui->listWidget->currentRow();
        curRow++;
        curRow = curRow >= count ? 0 : curRow;
        ui->listWidget->setCurrentRow(curRow);
        player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
        player->play();
    }
}

void MusicPlayer::do_sourceChanged(const QUrl &media)// 播放的文件发生变化时的响应
{
    ui->labCurMedia->setText(media.fileName());
}


void MusicPlayer::do_durationChanged(qint64 duration)// 播放源时长变化时执行，更新进度显示
{
    ui->sliderPosition->setMaximum(duration);

    int secs = duration / 1000; // 秒
    int mins = secs / 60;       // 分钟
    secs = secs % 60;           // 余数秒
    durationTime = QString::asprintf("%d:%d", mins, secs);
    ui->labRatio->setText(positionTime + "/" + durationTime);
}

void MusicPlayer::do_positionChanged(qint64 position)// 播放位置变化时执行，更新进度显示
{
    if (ui->sliderPosition->isSliderDown()) // 滑条正被鼠标拖动
        return;

    ui->sliderPosition->setSliderPosition(position);
    int secs = position / 1000; // 秒
    int mins = secs / 60;       // 分钟
    secs = secs % 60;           // 余数秒
    positionTime = QString::asprintf("%d:%d", mins, secs);
    ui->labRatio->setText(positionTime + "/" + durationTime);
}

void MusicPlayer::do_metaDataChanged()
{                                                                    // 元数据变化时执行，显示歌曲图片
    QMediaMetaData metaData = player->metaData();                      // 元数据对象
    QVariant metaImg = metaData.value(QMediaMetaData::ThumbnailImage); // 获取ThumbnailImage元数据
    if (metaImg.isValid())
    {
        QImage img = metaImg.value<QImage>(); // QVariant转换为QImage
        QPixmap musicPixmp = QPixmap::fromImage(img);
        if (ui->scrollArea->width() < musicPixmp.width())
            ui->labPic->setPixmap(musicPixmp.scaledToWidth(ui->scrollArea->width() - 30));
        else
            ui->labPic->setPixmap(musicPixmp);
    }
    else
        ui->labPic->clear();
}

//  按键
void MusicPlayer::on_btnAdd_clicked()
{                                    //"添加"按钮，添加文件
    QString curPath = QDir::homePath(); // 获取系统当前目录
    QString dlgTitle = "选择音频文件";
    QString filter = "音频文件(*.mp3 *.wav *.wma);;所有文件(*.*)"; // 文件过滤器
    QStringList fileList = QFileDialog::getOpenFileNames(this, dlgTitle, curPath, filter);
    // 使用QFileDialog::getOpenFileNames()函数打开一个文件选择对话框，让用户选择音频文件。如果用户没有选择任何文件，则返回。
    if (fileList.count() < 1)
        return;
    for (int i = 0; i < fileList.size(); i++) // 遍历选定的文件列表（fileList）
    {
        QString aFile = fileList.at(i);
        QFileInfo fileInfo(aFile);
        QListWidgetItem *aItem = new QListWidgetItem(fileInfo.fileName()); // 为每个文件创建一个 QListWidgetItem 对象
        aItem->setIcon(QIcon(":/UI/musicFile.png"));            // 设置其图标QIcon()
        aItem->setData(Qt::UserRole, QUrl::fromLocalFile(aFile));          // 设置用户数据，QUrl对象 ：表示文件的本地路径。
        ui->listWidget->addItem(aItem);                                    // 将QListWidgetItem对象添加到ui->listWidget中。
    }

    if (player->playbackState() != QMediaPlayer::PlayingState)
    { // 当前没有在播放，就播放第1个文件
        ui->listWidget->setCurrentRow(0);
        QUrl source = getUrlFromItem(ui->listWidget->currentItem());
        player->setSource(source);
    }
    player->play(); // 调用player->play()以开始播放音频。
}

void MusicPlayer::on_btnPlay_clicked()
{                                      // 开始播放                                //当前行
    if (ui->listWidget->currentRow() < 0) // 没有选择文件，就播放第1个
        ui->listWidget->setCurrentRow(0); // 设置当前行
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay = ui->btnLoop->isChecked(); // 是否循环播放
}

void MusicPlayer::on_btnPause_clicked()
{// 暂停播放
    player->pause();
}

void MusicPlayer::on_btnStop_clicked()
{// 停止播放
    loopPlay = false;
    player->stop();
}

//列表框
void MusicPlayer::on_listWidget_doubleClicked(const QModelIndex &index)
{// 双击listWidget时切换播放文件
    Q_UNUSED(index);
    loopPlay = false; // 暂时设置为false，防止do_stateChanged()里切换曲目
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay = ui->btnLoop->isChecked();
}

void MusicPlayer::on_btnClear_clicked()
{                   //"清空"按钮，清空播放列表
    loopPlay = false; // 防止do_stateChanged()里切换曲目
    ui->listWidget->clear();
    player->stop();
}

void MusicPlayer::on_sliderVolumn_valueChanged(int value)
{                                                 // 调整音量
    player->audioOutput()->setVolume(value / 100.0); // 0~ 1之间
}

void MusicPlayer::on_btnSound_clicked()
{// 静音控制
    ui->btnSound->setIconSize(QSize(50, 50));
    bool mute = player->audioOutput()->isMuted();
    player->audioOutput()->setMuted(!mute);
    if (mute)
        ui->btnSound->setIcon(QIcon(":/UI/ui.png"));
    else
        ui->btnSound->setIcon(QIcon(":/UI/33.png"));
}

void MusicPlayer::on_sliderPosition_valueChanged(int value)
{// 播放进度调控
    player->setPosition(value);
}

void MusicPlayer::on_btnPrevious_clicked()
{// 前一曲
    int curRow = ui->listWidget->currentRow();
    curRow--;
    curRow = curRow < 0 ? 0 : curRow;
    ui->listWidget->setCurrentRow(curRow); // 设置当前行

    loopPlay = false; // 暂时设置为false，防止do_stateChanged()里切换曲目
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay = ui->btnLoop->isChecked();

    //    if(ui->btnLoop->isChecked())
    //    {
    //        loopPlay=false;     //暂时设置为false，防止do_stateChanged()里切换曲目
    //        player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    //        player->play();
    //        loopPlay=true;
    //    }
}

void MusicPlayer::on_btnNext_clicked()
{// 下一曲
    int count = ui->listWidget->count();
    int curRow = ui->listWidget->currentRow();
    curRow++;
    curRow = curRow >= count ? count - 1 : curRow;
    ui->listWidget->setCurrentRow(curRow);

    loopPlay = false; // 暂时设置为false，防止do_stateChanged()里切换曲目
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay = ui->btnLoop->isChecked();

    //    if(ui->btnLoop->isChecked())
    //    {
    //        loopPlay=false;     //暂时设置为false，防止do_stateChanged()里切换曲目
    //        player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    //        player->play();
    //        loopPlay=true;
    //    }
}

void MusicPlayer::on_btnLoop_clicked(bool checked)
{//"循环" 按钮
    loopPlay = checked;
}

void MusicPlayer::on_doubleSpinBox_valueChanged(double arg1)
{//"倍速" DoubleSpinbox
    player->setPlaybackRate(arg1);
}

void MusicPlayer::on_btnRemove_clicked()
{//"移除"按钮，移除列表中的当前项
    int index = ui->listWidget->currentRow();
    if (index >= 0)
    {
        QListWidgetItem *item = ui->listWidget->takeItem(index);
        delete item;
    }
}

void MusicPlayer::on_btnClose_clicked()
{
    emit release();     // 释放信号
    this->hide();
}

