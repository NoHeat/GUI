#include "shoppinglist.h"
#include "ui_shoppinglist.h"

ShoppingList::ShoppingList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingList)
{
    ui->setupUi(this);
}

ShoppingList::~ShoppingList()
{
    delete ui;
}
