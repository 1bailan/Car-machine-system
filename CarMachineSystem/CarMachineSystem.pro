QT       += core gui network    #QWebEngine
QT       += multimedia          #添加音乐模块
QT       += sql                 #添加数据库

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#视频播放，若清除需将ffmpeg文件中的bin目录下的.dll文件复制到 debug（build）文件下
INCLUDEPATH += $$PWD/ffmpeg/include

# 链接库文件
LIBS += $$PWD/ffmpeg/lib/avcodec.lib\
        $$PWD/ffmpeg/lib/avdevice.lib\
        $$PWD/ffmpeg/lib/avfilter.lib\
        $$PWD/ffmpeg/lib/avformat.lib\
        $$PWD/ffmpeg/lib/avutil.lib\
        $$PWD/ffmpeg/lib/postproc.lib\
        $$PWD/ffmpeg/lib/swresample.lib\
        $$PWD/ffmpeg/lib/swscale.lib

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    appbt.cpp \
    backcarbt.cpp \
    concretestates.cpp \
    gpsbt.cpp \
    httpweather.cpp \
    main.cpp \
    mainwindow.cpp \
    musicbt.cpp \
    musicplayer.cpp \
    paid.cpp \
    paidbt.cpp \
    paidclient.cpp \
    rescuebt.cpp \
    seatbt.cpp \
    setbt.cpp \
    state.cpp \
    videoplayer.cpp \
    voicebt.cpp

HEADERS += \
    appbt.h \
    backcarbt.h \
    concretestates.h \
    gpsbt.h \
    httpweather.h \
    mainwindow.h \
    musicbt.h \
    musicplayer.h \
    paid.h \
    paidbt.h \
    paidclient.h \
    rescuebt.h \
    seatbt.h \
    setbt.h \
    state.h \
    videoplayer.h \
    voicebt.h

FORMS += \
    httpweather.ui \
    mainwindow.ui \
    musicplayer.ui \
    paid.ui \
    paidclient.ui \
    videoplayer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    UI.qrc
