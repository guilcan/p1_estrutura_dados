#include "cadastro.h"
#include "ui_cadastro.h"
#include "lde.h"
#include "no.h"
#include "les.h"
#include "hotelwindow.h"
#include "popup.h"
#include "popup_2.h"


cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}
QString ID;
QString Nome;
QString Idade;
QString CEP;
QString CPF;
QString Telefone;
QString Quarto;
QString VarSr;
int ident = 0;

LDE<QString> lista;
extern LDE<QString> lista;


void func_validar(){
     if(ident != 3){
         popup popupwindow;
         popupwindow.setModal(true);
         popupwindow.exec();
     }
    else{
     lista.insere(ID, Nome, Idade, CEP, CPF, Telefone, Quarto);
     popup_2 popup2window;
     popup2window.setModal(true);
     popup2window.exec();
     }
   }


void cadastro::on_pushButton_clicked()
{

    QString Nome = ui->lineEdit->text();
    QString Idade = ui->lineEdit_2->text();
    QString CEP = ui->lineEdit_4->text();
    QString CPF = ui->lineEdit_3->text();
    QString Telefone = ui->lineEdit_5->text();
    QString Quarto = ui->lineEdit_6->text();
    QString ID = ui->lineEdit_7->text();



    lista.insere(ID, Nome, Idade, CEP, CPF, Telefone, Quarto);
    popup_2 popup2window;
    popup2window.setModal(true);
    popup2window.exec();


}




void cadastro::on_pushButton_2_clicked()
{

}


























