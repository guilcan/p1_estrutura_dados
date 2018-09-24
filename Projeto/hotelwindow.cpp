#include "hotelwindow.h"
#include "ui_hotelwindow.h"
#include "cadastro.h"
#include "remover.h"


HotelWindow::HotelWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HotelWindow)
{
    ui->setupUi(this);
}

HotelWindow::~HotelWindow()
{
    delete ui;
}

void HotelWindow::on_pushButton_cadastro_clicked()
{
    cadastro cadastrowindow;
    cadastrowindow.setModal(true);
    cadastrowindow.exec();
}

void HotelWindow::on_pushButton_remover_clicked()
{
    remover removerwindow;
    removerwindow.setModal(true);
    removerwindow.exec();
}


