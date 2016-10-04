#include "shoppinglist.h"
#include "ui_shoppinglist.h"

ShoppingList::ShoppingList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingList)
{
    ui->setupUi(this);
   // ShoppingList *shopList = new ShoppingList;
       // shopList->setStyleSheet("background-color:blue");
       // shopList->show();

    ui->btn_Add->setStyleSheet("Background:#626065");

}

ShoppingList::~ShoppingList()
{
    delete ui;
}
