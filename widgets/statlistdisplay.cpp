#include "statlistdisplay.h"
#include "ui_statlistdisplay.h"

statListDisplay::statListDisplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statListDisplay)
{
    ui->setupUi(this);
}

statListDisplay::~statListDisplay()
{
    delete ui;
}
