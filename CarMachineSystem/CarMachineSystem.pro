QT       += core gui network    #QWebEngine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    appbt.cpp \
    httpweather.cpp \
    main.cpp \
    mainwindow.cpp \
    musicbt.cpp \
    setbt.cpp

HEADERS += \
    appbt.h \
    httpweather.h \
    mainwindow.h \
    musicbt.h \
    setbt.h

FORMS += \
    httpweather.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    UI.qrc
