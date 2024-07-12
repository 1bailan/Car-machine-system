#include "httpweather.h"
#include "mainwindow.h"
#include "appbt.h"
#include "setbt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // AppBt e;
    // e.show();
    // HttpWeather h;
    // h.show();
    // SetBt bt;
    // bt.show();
    return a.exec();
}
