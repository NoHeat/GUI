#include "actionmenu.h"
#include "ui_actionmenu.h"

ActionMenu::ActionMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActionMenu)
{
    ui->setupUi(this);
}

ActionMenu::~ActionMenu()
{
    delete ui;
}
