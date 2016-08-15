#include "custominput.h"
#include "ui_custominput.h"
#include "inventorychange.h"

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

void CustomInput::on_btn_vegetables_input_clicked()
{
    //vegetables
    InventoryChange inventoryChange;
    inventoryChange.setModal(true);
    inventoryChange.exec();
}

void CustomInput::on_btn_fruits_input_clicked()
{
    //fruits
    InventoryChange inventoryChange;
    inventoryChange.setModal(true);
    inventoryChange.exec();

}
