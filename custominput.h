#ifndef CUSTOMINPUT_H
#define CUSTOMINPUT_H

#include <QDialog>

namespace Ui {
class CustomInput;
}

class CustomInput : public QDialog
{
    Q_OBJECT

public:
    explicit CustomInput(QWidget *parent = 0);
    ~CustomInput();

private:
    Ui::CustomInput *ui;
};

#endif // CUSTOMINPUT_H
