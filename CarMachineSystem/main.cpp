#include "httpweather.h"
#include "mainwindow.h"
#include "appbt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    HttpWeather h;
    h.show();
    return a.exec();
}
