#include "popup_2.h"
#include "ui_popup_2.h"

popup_2::popup_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popup_2)
{
    ui->setupUi(this);
}

popup_2::~popup_2()
{
    delete ui;
}
