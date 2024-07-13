#include "httpweather.h"
#include "mainwindow.h"
#include "appbt.h"
#include "setbt.h"
#include "state.h"
#include "concretestates.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Context* context = new Context(new StartState());

    // context->request();
    // context->request();
    // context->request();

    MainWindow w;
    w.show();
    // AppBt e;
    // e.show();
    // HttpWeather h;
    // h.show();
    // SetBt bt;
    // bt.show();


    delete context;
    return a.exec();
}
