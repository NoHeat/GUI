#ifndef ACTIONMENU_H
#define ACTIONMENU_H

#include <QDialog>

namespace Ui {
class ActionMenu;
}

class ActionMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ActionMenu(QWidget *parent = 0);
    ~ActionMenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ActionMenu *ui;
};

#endif // ACTIONMENU_H
