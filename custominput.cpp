#include "custominput.h"
#include "ui_custominput.h"
#include "inventorychange.h"
#include <QStyle>

CustomInput::CustomInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomInput)
{
    ui->setupUi(this);
    QPixmap pixFruits (":/ImagesAndIcons/fru_fin.png");
    ui->labelFruit->setPixmap(pixFruits);
    ui->labelFruit->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    QPixmap pixVegetables (":/ImagesAndIcons/vegg_fin.png");
    ui->labelVegetable->setPixmap(pixVegetables);
    ui->labelVegetable->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

}

CustomInput::~CustomInput()
{
    delete ui;
}

void CustomInput::on_btn_vegetables_input_clicked()
{
    //vegetables
    InventoryChange *inventoryChange = new InventoryChange;
    inventoryChange->setModal(true);
    inventoryChange->exec();
}

void CustomInput::on_btn_fruits_input_clicked()
{
    //fruits
    InventoryChange *inventoryChange = new InventoryChange;
    inventoryChange->setModal(true);
    inventoryChange->exec();



}
