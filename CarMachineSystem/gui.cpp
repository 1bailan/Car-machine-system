#include "gui.h"
#include "ui_gui.h"

Gui::Gui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Gui)
{
    ui->setupUi(this);
}

Gui::~Gui()
{
    delete ui;
}
