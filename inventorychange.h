#ifndef INVENTORYCHANGE_H
#define INVENTORYCHANGE_H

#include <QDialog>

namespace Ui {
class InventoryChange;
}

class InventoryChange : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryChange(QWidget *parent = 0);
    ~InventoryChange();

private:
    Ui::InventoryChange *ui;
};

#endif // INVENTORYCHANGE_H
