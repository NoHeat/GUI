#include "welcomescreen.h"
#include "ui_welcomescreen.h"
#include "actionmenu.h"
#include <QStyle>


WelcomeScreen::WelcomeScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WelcomeScreen)
{
    ui->setupUi(this);
    //This is an example of how to set a tool tip. Whenever the user hovers over this button it will say "Go to Action Menu"
    //Using tooltips is also possible to add icons, pictures and html formatting.
    ui->WelcomeScreenStartButton->setToolTip("Go to Action Menu.");
    //This is an example of how to add an icon to a button. In general icon extension should be .ico but png works.
    //It is recomended to use .ico because if the window is resized the icon will look good, whereas the picture can look blurry.
    QIcon icon ("F:/QTprojects/FridgeAssistKitv2/ImagesAndIcons/Home.png");
    ui->WelcomeScreenStartButton->setIcon(icon);
    //This is an example of how to change the font. It can work on buttons and labels, and other widgets.
    QFont font ("Courier");
    ui->WelcomeScreenStartButton->setFont(font);
    //This is an example of how to add a picture to a label
    QPixmap pix ("F:/QTprojects/FridgeAssistKitv2/ImagesAndIcons/groceriespngresized.png");
    ui->WelcomeScreenPicture1->setPixmap(pix);
    ui->WelcomeScreenPicture1->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
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

