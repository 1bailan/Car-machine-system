#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include "mainwindow.h"

#include <QWidget>
#include <QDebug>
#include <thread>
#include <chrono>
#include <QImage>
#include <QObject>

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavdevice/avdevice.h>
#include <libavformat/version.h>
#include <libavutil/time.h>
#include <libavutil/mathematics.h>
#include <libavutil/imgutils.h>
}

namespace Ui {
class VideoPlayer;
}

class VideoPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit VideoPlayer(QWidget *parent = nullptr);
    ~VideoPlayer();
    void playVideo(const char *videoPath);

private:
    Ui::VideoPlayer *ui;
    AVFormatContext *pFormatCtx;     // 用于存储输入音视频文件的格式信息。
    AVCodecContext *pAVctx;          // 用于存储解码器的上下文信息。
    AVPacket *pAVpkt;                // 用于存储压缩的音视频数据包
    AVFrame *pAVframe;             // pAVframe用于存储解码后的原始帧
    AVFrame *pAVframeRGB;            // pAVframeRGB用于存储转换后的RGB帧。
    struct SwsContext *pSwsCtx;      // 用于存储图像转换的上下文信息。

signals:
    void videoFinished();
};

#endif // VIDEOPLAYER_H
