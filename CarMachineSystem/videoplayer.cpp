#include "videoplayer.h"
#include "ui_videoplayer.h"
#include "concretestates.h"
#include <QTimer>
#include <QThread>
#include <chrono>
#include <QImage>
#include <QPixmap>

VideoPlayer::VideoPlayer(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::VideoPlayer),
    pFormatCtx(nullptr),
    pAVctx(nullptr),
    pAVpkt(nullptr),
    pAVframe(nullptr),
    pAVframeRGB(nullptr),
    pSwsCtx(nullptr)
{
    ui->setupUi(this);
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);
    avformat_network_init();
    qDebug("FFmpeg version: %d", avcodec_version());
}

VideoPlayer::~VideoPlayer()
{
    //确保它们已经被释放，如果没有被释放在释放一次
    if (pSwsCtx)
        sws_freeContext(pSwsCtx);
    if (pAVframeRGB)
        av_frame_free(&pAVframeRGB);
    if (pAVframe)
        av_frame_free(&pAVframe);
    if (pAVpkt)
        av_packet_free(&pAVpkt);
    if (pAVctx)
        avcodec_free_context(&pAVctx);
    if (pFormatCtx)
        avformat_close_input(&pFormatCtx);
    avformat_network_deinit();
    delete ui;
}

// void VideoPlayer::playVideo(const char *videoPath)
// {
//     qDebug() << __LINE__;
//     unsigned char *buf;           // 用于存储视频数据
//     int isVideo = -1;             // 用于判断是否是视频流
//     unsigned int streamIndex = 0; // streamIndex用于存储视频流的索引。

//     // 创建AVFormatContext
//     pFormatCtx = avformat_alloc_context(); // 该对象用于描述容器格式的上下文结构，它包含了关于输入或输出格式的所有信息。

//     // 初始化pFormatCtx
//     if (avformat_open_input(&pFormatCtx, videoPath, 0, 0) != 0) // avformat_open_input：打开一个输入文件或输入流，并初始化pFormatCtx
//     {                                                           // videoPath：输入文件的路径或输入流的URL。
//         // 第一个0：FFmpeg将自动检测输入文件的格式
//         // 第二个0：设置额外选项，0表示无
//         qDebug("avformat_open_input err.");
//         avformat_free_context(pFormatCtx); // 释放资源
//         return;
//     }

//     // 获取音视频流数据信息
//     if (avformat_find_stream_info(pFormatCtx, NULL) < 0) // 用于获取音视频流的信息
//     {                                                    // 参数1：音视频文件或流对象，参数2：额外信息
//         avformat_close_input(&pFormatCtx);               // 关闭输入流
//         qDebug("avformat_find_stream_info err.");
//         return;
//     }

//     // 找到视频流的索引
//     for (unsigned int i = 0; i < pFormatCtx->nb_streams; i++) // nb_streams表示流的数量。
//     {
//         // 这个条件语句检查当前流是否是视频流。
//         if (pFormatCtx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) // codecpar是流的编解码器参数
//         {                                                                       // codec_type是编解码器的类型。
//             // AVMEDIA_TYPE_VIDEO表示视频类型。
//             streamIndex = i; // 如果找到了视频流，将当前流的索引赋值给streamIndex。
//             isVideo = 0;     // 将isVideo标志设置为0，表示找到了视频流。
//             break;
//         }
//     }
//     qDebug() << __LINE__;
//     // 没有视频流就退出
//     if (isVideo == -1)
//     {
//         avformat_close_input(&pFormatCtx);
//         qDebug("No video stream found.");
//         return;
//     }

//     // 获取视频流编码
//     pAVctx = avcodec_alloc_context3(NULL);

//     // 查找解码器
//     // 将视频流的编码参数（codecpar）复制到AVCodecContext结构体中。
//     avcodec_parameters_to_context(pAVctx, pFormatCtx->streams[streamIndex]->codecpar);
//     // ffmpeg新版中不支持原来的codec，故上文替换为codecper
//     const AVCodec *pCodec = avcodec_find_decoder(pAVctx->codec_id); // 用来查找与pAVctx（一个指向AVCodecContext结构体的指针）中的codec_id字段对应的解码器。
//     if (!pCodec)                                                    // 是否找到了解码器。NULL为没找到
//     {
//         avcodec_free_context(&pAVctx); // 释放资源
//         avformat_close_input(&pFormatCtx);
//         qDebug("avcodec_find_decoder error.");
//         return;
//     }

//     // 初始化pAVctx
//     if (avcodec_open2(pAVctx, pCodec, NULL) < 0) // 用于打开一个编解码器。
//     {                                            // 参数1：编解码器的上下文
//         // 参数2：要打开的编解码器，
//         // 参数3：额外的参数 NULL（不使用）
//         avcodec_free_context(&pAVctx); // 释放资源
//         avformat_close_input(&pFormatCtx);
//         qDebug("avcodec_open2 err.");
//         return;
//     }

//     // 初始化pAVpkt
//     // AVPacket是FFmpeg库中用于存储压缩数据的结构体，通常用于处理音视频数据包。
//     pAVpkt = av_packet_alloc(); // 分配一个AVPacket结构体的内存
//     if (!pAVpkt)
//     {
//         avcodec_free_context(&pAVctx); // 释放资源
//         avformat_close_input(&pFormatCtx);
//         qDebug("av_packet_alloc err.");
//         return;
//     }

//     // 初始化数据帧空间
//     pAVframe = av_frame_alloc(); // 分配AVFrame结构体的内存空间
//     pAVframeRGB = av_frame_alloc();
//     // AVFrame是FFmpeg中用于存储解码后的视频帧或编码前的视频帧的数据结构。
//     if (!pAVframe || !pAVframeRGB)
//     {
//         av_packet_free(&pAVpkt); // 释放资源
//         avcodec_free_context(&pAVctx);
//         avformat_close_input(&pFormatCtx);
//         qDebug("av_frame_alloc err.");
//         return;
//     }

//     // 创建图像数据存储buf
//     buf = (unsigned char *)av_malloc(av_image_get_buffer_size(AV_PIX_FMT_RGB32, pAVctx->width, pAVctx->height, 1));
//     /*
//     av_malloc函数：用于分配内存
//     av_image_get_buffer_size函数计算存储图像所需的缓冲区大小
//     图像格式（AV_PIX_FMT_RGB32）
//     宽度（pAVctx->width）
//     高度（pAVctx->height）
//     对齐参数（通常为1）
//     */
//     av_image_fill_arrays(pAVframeRGB->data, pAVframeRGB->linesize, buf, AV_PIX_FMT_RGB32, pAVctx->width, pAVctx->height, 1);
//     // 将分配的内存填充到pAVframeRGB的data和linesize数组中。这些数组用于存储图像数据及其行大小。

//     // 根据视频宽高重新调整窗口大小 视频宽高 pAVctx->width, pAVctx->height
//     ui->videoLb->setGeometry(0, 0, pAVctx->width, pAVctx->height); // 设置窗口位置、大小
//     ui->videoLb->setScaledContents(true);                          // 设置 QLabel 内容缩放

//     pSwsCtx = sws_getContext(pAVctx->width, pAVctx->height, pAVctx->pix_fmt, pAVctx->width, pAVctx->height, AV_PIX_FMT_RGB32, SWS_BICUBIC, NULL, NULL, NULL);
//     /*
//     pSwsCtx：用于存储图像缩放和格式转换的上下文信息。
//     sws_getContext函数：建并初始化一个SwsContext结构体
//     pAVctx->width 和 pAVctx->height：这些参数指定了输入图像的宽度和高度。
//     pAVctx->pix_fmt：这个参数指定了输入图像的像素格式。
//     AV_PIX_FMT_RGB32：这个参数指定了输出图像的像素格式，这里是32位RGB格式。
//     SWS_BICUBIC：这个参数指定了图像缩放和格式转换的算法，这里是双三次插值算法。
//     之后的NULL表示没有额外参数
//     */
//     qDebug() << __LINE__;

//     // 使用 QTimer 代替延时
//     QTimer *timer = new QTimer(this);
//     connect(timer, &QTimer::timeout, this, [this, timer, streamIndex]() {
//         int ret = av_read_frame(pFormatCtx, pAVpkt);
//         if (ret >= 0)
//         {
//             if (pAVpkt->stream_index == (int)streamIndex)
//             {
//                 ret = avcodec_send_packet(pAVctx, pAVpkt);
//                 if (ret >= 0)
//                 {
//                     ret = avcodec_receive_frame(pAVctx, pAVframe);
//                     if (ret == 0)
//                     {
//                         sws_scale(pSwsCtx, (const unsigned char *const *)pAVframe->data, pAVframe->linesize, 0, pAVctx->height, pAVframeRGB->data, pAVframeRGB->linesize);
//                         QImage img((uchar *)pAVframeRGB->data[0], pAVctx->width, pAVctx->height, QImage::Format_RGB32);
//                         ui->videoLb->setPixmap(QPixmap::fromImage(img));
//                         qDebug() << __LINE__;
//                     }
//                     else if (ret != AVERROR(EAGAIN) && ret != AVERROR_EOF)
//                     {
//                         qDebug("Decode Error: avcodec_receive_frame");
//                     }
//                 }
//                 else
//                 {
//                     qDebug() << "avcodec_send_packet error";
//                 }
//             }
//             av_packet_unref(pAVpkt);
//         }
//         else
//         {
//             qDebug() << "Video playback finished!";
//             emit videoFinished();
//             timer->stop();
//         }
//     });

//     timer->start(1000 / 30); // 假设视频帧率为30帧每秒

//     // 确保在退出函数前清理资源
//     connect(timer, &QTimer::timeout, this, [this, timer]() {
//         if (!timer->isActive()) {
//             sws_freeContext(pSwsCtx);
//             av_frame_free(&pAVframeRGB);
//             av_frame_free(&pAVframe);
//             av_packet_free(&pAVpkt);
//             avcodec_free_context(&pAVctx);
//             avformat_close_input(&pFormatCtx);
//         }
//     });
// }

void VideoPlayer::playVideo(const char *videoPath)
{
    qDebug() << __LINE__;
    unsigned char *buf;           // 用于存储视频数据
    int isVideo = -1;             // 用于判断是否是视频流
    unsigned int streamIndex = 0; // streamIndex用于存储视频流的索引。

    // 创建AVFormatContext
    pFormatCtx = avformat_alloc_context(); // 该对象用于描述容器格式的上下文结构，它包含了关于输入或输出格式的所有信息。

    // 初始化pFormatCtx
    if (avformat_open_input(&pFormatCtx, videoPath, 0, 0) != 0) // avformat_open_input：打开一个输入文件或输入流，并初始化pFormatCtx
    {                                                           // videoPath：输入文件的路径或输入流的URL。
        // 第一个0：FFmpeg将自动检测输入文件的格式
        // 第二个0：设置额外选项，0表示无
        qDebug("avformat_open_input err.");
        avformat_free_context(pFormatCtx); // 释放资源
        return;
    }

    // 获取音视频流数据信息
    if (avformat_find_stream_info(pFormatCtx, NULL) < 0) // 用于获取音视频流的信息
    {                                                    // 参数1：音视频文件或流对象，参数2：额外信息
        avformat_close_input(&pFormatCtx);               // 关闭输入流
        qDebug("avformat_find_stream_info err.");
        return;
    }

    // 找到视频流的索引
    for (unsigned int i = 0; i < pFormatCtx->nb_streams; i++) // nb_streams表示流的数量。
    {
        // 这个条件语句检查当前流是否是视频流。
        if (pFormatCtx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) // codecpar是流的编解码器参数
        {                                                                       // codec_type是编解码器的类型。
            // AVMEDIA_TYPE_VIDEO表示视频类型。
            streamIndex = i; // 如果找到了视频流，将当前流的索引赋值给streamIndex。
            isVideo = 0;     // 将isVideo标志设置为0，表示找到了视频流。
            break;
        }
    }
    qDebug() << __LINE__;
    // 没有视频流就退出
    if (isVideo == -1)
    {
        avformat_close_input(&pFormatCtx);
        qDebug("No video stream found.");
        return;
    }

    // 获取视频流编码
    pAVctx = avcodec_alloc_context3(NULL);

    // 查找解码器
    // 将视频流的编码参数（codecpar）复制到AVCodecContext结构体中。
    avcodec_parameters_to_context(pAVctx, pFormatCtx->streams[streamIndex]->codecpar);
    // ffmpeg新版中不支持原来的codec，故上文替换为codecper
    const AVCodec *pCodec = avcodec_find_decoder(pAVctx->codec_id); // 用来查找与pAVctx（一个指向AVCodecContext结构体的指针）中的codec_id字段对应的解码器。
    if (!pCodec)                                                    // 是否找到了解码器。NULL为没找到
    {
        avcodec_free_context(&pAVctx); // 释放资源
        avformat_close_input(&pFormatCtx);
        qDebug("avcodec_find_decoder error.");
        return;
    }

    // 初始化pAVctx
    if (avcodec_open2(pAVctx, pCodec, NULL) < 0) // 用于打开一个编解码器。
    {                                            // 参数1：编解码器的上下文
        // 参数2：要打开的编解码器，
        // 参数3：额外的参数 NULL（不使用）
        avcodec_free_context(&pAVctx); // 释放资源
        avformat_close_input(&pFormatCtx);
        qDebug("avcodec_open2 err.");
        return;
    }

    // 初始化pAVpkt
    // AVPacket是FFmpeg库中用于存储压缩数据的结构体，通常用于处理音视频数据包。
    pAVpkt = av_packet_alloc(); // 分配一个AVPacket结构体的内存
    if (!pAVpkt)
    {
        avcodec_free_context(&pAVctx); // 释放资源
        avformat_close_input(&pFormatCtx);
        qDebug("av_packet_alloc err.");
        return;
    }

    // 初始化数据帧空间
    pAVframe = av_frame_alloc(); // 分配AVFrame结构体的内存空间
    pAVframeRGB = av_frame_alloc();
    // AVFrame是FFmpeg中用于存储解码后的视频帧或编码前的视频帧的数据结构。
    if (!pAVframe || !pAVframeRGB)
    {
        av_packet_free(&pAVpkt); // 释放资源
        avcodec_free_context(&pAVctx);
        avformat_close_input(&pFormatCtx);
        qDebug("av_frame_alloc err.");
        return;
    }

    // 创建图像数据存储buf
    buf = (unsigned char *)av_malloc(av_image_get_buffer_size(AV_PIX_FMT_RGB32, pAVctx->width, pAVctx->height, 1));
    /*
    av_malloc函数：用于分配内存
    av_image_get_buffer_size函数计算存储图像所需的缓冲区大小
    图像格式（AV_PIX_FMT_RGB32）
    宽度（pAVctx->width）
    高度（pAVctx->height）
    对齐参数（通常为1）
    */
    av_image_fill_arrays(pAVframeRGB->data, pAVframeRGB->linesize, buf, AV_PIX_FMT_RGB32, pAVctx->width, pAVctx->height, 1);
    // 将分配的内存填充到pAVframeRGB的data和linesize数组中。这些数组用于存储图像数据及其行大小。

    // 根据视频宽高重新调整窗口大小 视频宽高 pAVctx->width, pAVctx->height
    ui->videoLb->setGeometry(0, 0, pAVctx->width, pAVctx->height); // 设置窗口位置、大小
    ui->videoLb->setScaledContents(true);                          // 设置 QLabel 内容缩放

    pSwsCtx = sws_getContext(pAVctx->width, pAVctx->height, pAVctx->pix_fmt, pAVctx->width, pAVctx->height, AV_PIX_FMT_RGB32, SWS_BICUBIC, NULL, NULL, NULL);
    /*
    pSwsCtx：用于存储图像缩放和格式转换的上下文信息。
    sws_getContext函数：建并初始化一个SwsContext结构体
    pAVctx->width 和 pAVctx->height：这些参数指定了输入图像的宽度和高度。
    pAVctx->pix_fmt：这个参数指定了输入图像的像素格式。
    AV_PIX_FMT_RGB32：这个参数指定了输出图像的像素格式，这里是32位RGB格式。
    SWS_BICUBIC：这个参数指定了图像缩放和格式转换的算法，这里是双三次插值算法。
    之后的NULL表示没有额外参数
    */
    qDebug() << __LINE__;

    // 使用 QTimer 代替延时
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this, timer, streamIndex]() {
        int ret = av_read_frame(pFormatCtx, pAVpkt);
        if (ret >= 0)
        {
            if (pAVpkt->stream_index == (int)streamIndex)
            {
                ret = avcodec_send_packet(pAVctx, pAVpkt);
                if (ret >= 0)
                {
                    ret = avcodec_receive_frame(pAVctx, pAVframe);
                    if (ret == 0)
                    {
                        sws_scale(pSwsCtx, (const unsigned char *const *)pAVframe->data, pAVframe->linesize, 0, pAVctx->height, pAVframeRGB->data, pAVframeRGB->linesize);
                        QImage img((uchar *)pAVframeRGB->data[0], pAVctx->width, pAVctx->height, QImage::Format_RGB32);
                        ui->videoLb->setPixmap(QPixmap::fromImage(img));
                        qDebug() << __LINE__;
                    }
                    else if (ret != AVERROR(EAGAIN) && ret != AVERROR_EOF)
                    {
                        qDebug("Decode Error: avcodec_receive_frame");
                    }
                }
                else
                {
                    qDebug() << "avcodec_send_packet error";
                }
            }
            av_packet_unref(pAVpkt);
        }
        else
        {
            qDebug() << "Video playback finished!";
            emit videoFinished();
            timer->stop();
        }
    });

    timer->start(1000 / 30); // 假设视频帧率为30帧每秒

    // 确保在退出函数前清理资源
    connect(timer, &QTimer::timeout, this, [this, timer]() {
        if (!timer->isActive()) {
            sws_freeContext(pSwsCtx);
            av_frame_free(&pAVframeRGB);
            av_frame_free(&pAVframe);
            av_packet_free(&pAVpkt);
            avcodec_free_context(&pAVctx);
            avformat_close_input(&pFormatCtx);
        }
    });
}

