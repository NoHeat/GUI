#ifndef ACTIONMENU_H
#define ACTIONMENU_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "inventorychange.h"

namespace Ui {
class ActionMenu;
}

class ActionMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ActionMenu(QWidget *parent = 0);
    ~ActionMenu();
public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }


    bool connOpen()
    {
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("F:/QTprojects/FridgeAssistKitv2/GUI/database6.sqlite");

        if(!mydb.open())
        {
            qDebug() << ("Failed to open the database");
            return false;
        }
        else
        {
            qDebug() << ("Connected...");
            return true;
        }
    }

private slots:
    void on_pushButton_clicked(); //Change inventory

    void on_pushButton_2_clicked(); //Custtom input

    void on_pushButton_3_clicked(); //Shopping List

private:
    Ui::ActionMenu *ui;
};

#endif // ACTIONMENU_H
