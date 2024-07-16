#include "httpweather.h"
#include "mainwindow.h"
#include "appbt.h"
#include "setbt.h"
#include "state.h"
#include "concretestates.h"
#include "videoplayer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Context* context = new Context(new StartState());
    MainWindow w;
    delete context;

    return a.exec();
}
