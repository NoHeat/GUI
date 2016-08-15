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
    /*On top is the method that gives functionality to the start button in the first window,
     * upon clicking it an instance of the second window is created. Setting Modal to true means
     * the user can only interact with that window when they click the button. */
    ActionMenu myActionMenu;
    myActionMenu.setModal(true);
    myActionMenu.exec();
}
