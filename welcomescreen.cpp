#include "welcomescreen.h"
#include "ui_welcomescreen.h"
#include "actionmenu.h"

WelcomeScreen::WelcomeScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WelcomeScreen)
{
    ui->setupUi(this);
}

WelcomeScreen::~WelcomeScreen()
{
    delete ui;
}

void WelcomeScreen::on_WelcomeScreenStartButton_clicked()
{
    ActionMenu myActionMenu;
    myActionMenu.setModal(true);
    myActionMenu.exec();
}
