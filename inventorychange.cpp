#include "inventorychange.h"
#include "ui_inventorychange.h"

InventoryChange::InventoryChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryChange)
{
    ui->setupUi(this);
}

InventoryChange::~InventoryChange()
{
    delete ui;
}
