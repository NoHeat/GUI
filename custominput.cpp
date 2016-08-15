#include "custominput.h"
#include "ui_custominput.h"

CustomInput::CustomInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomInput)
{
    ui->setupUi(this);
}

CustomInput::~CustomInput()
{
    delete ui;
}
