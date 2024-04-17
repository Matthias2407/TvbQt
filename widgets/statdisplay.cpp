#include "statdisplay.h"
#include "ui_statdisplay.h"

statDisplay::statDisplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statDisplay)
{
    ui->setupUi(this);
}

statDisplay::~statDisplay()
{
    delete ui;
}
