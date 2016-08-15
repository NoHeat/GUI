#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <QDialog>

namespace Ui {
class ShoppingList;
}

class ShoppingList : public QDialog
{
    Q_OBJECT

public:
    explicit ShoppingList(QWidget *parent = 0);
    ~ShoppingList();

private:
    Ui::ShoppingList *ui;
};

#endif // SHOPPINGLIST_H
