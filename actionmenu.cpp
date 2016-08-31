#include "actionmenu.h"
#include "ui_actionmenu.h"
#include "inventorychange.h"
#include "custominput.h"
#include "shoppinglist.h"

ActionMenu::ActionMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActionMenu)
{
    ui->setupUi(this);
    //Putting this in to test
    if(!connOpen())
    {
        ui->connectionStatusAction->setText("Failed to open the database");
    }
    else
    {
        ui->connectionStatusAction->setText("Connected...");
    }
}

ActionMenu::~ActionMenu()
{
    delete ui;
}

void ActionMenu::on_pushButton_clicked() //Change Inventory
{
    //Change entry button from Action Menu which takes to Change Entry window
    InventoryChange changeInventoryVar; //this is the reference variable
    if(!connOpen())
    {
        qDebug() << "Failed to open the database";
        return;
    }
    connOpen();
    connClose();
    changeInventoryVar.setModal(true);
    changeInventoryVar.exec();
}

void ActionMenu::on_pushButton_2_clicked() //Custom Input (fruits and vegetables)
{
    //Custom input button from Action Menu which takes to Change input window
    CustomInput customInputVar;    //this is the reference variable
    customInputVar.setModal(true);
    customInputVar.exec();
}

void ActionMenu::on_pushButton_3_clicked() //Shopping List
{
    //Shopping list button from Action Menu which takes to shopping list window
    ShoppingList shoppingListVar;    //this is the reference variable
    shoppingListVar.setModal(true);
    shoppingListVar.exec();

}
