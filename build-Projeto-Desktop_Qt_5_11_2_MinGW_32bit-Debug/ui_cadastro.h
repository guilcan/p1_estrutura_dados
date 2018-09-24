/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cadastro
{
public:
    QLabel *label;
    QLabel *label_nome;
    QLabel *label_idade;
    QLabel *label_cpf;
    QLabel *label_cep;
    QLabel *label_telefone;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_quarto;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_2;
    QLabel *label_result;

    void setupUi(QDialog *cadastro)
    {
        if (cadastro->objectName().isEmpty())
            cadastro->setObjectName(QStringLiteral("cadastro"));
        cadastro->resize(482, 574);
        label = new QLabel(cadastro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 431, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_nome = new QLabel(cadastro);
        label_nome->setObjectName(QStringLiteral("label_nome"));
        label_nome->setGeometry(QRect(20, 90, 47, 13));
        QFont font1;
        font1.setPointSize(10);
        label_nome->setFont(font1);
        label_idade = new QLabel(cadastro);
        label_idade->setObjectName(QStringLiteral("label_idade"));
        label_idade->setGeometry(QRect(250, 90, 47, 13));
        label_idade->setFont(font1);
        label_cpf = new QLabel(cadastro);
        label_cpf->setObjectName(QStringLiteral("label_cpf"));
        label_cpf->setGeometry(QRect(20, 160, 47, 13));
        label_cpf->setFont(font1);
        label_cep = new QLabel(cadastro);
        label_cep->setObjectName(QStringLiteral("label_cep"));
        label_cep->setGeometry(QRect(250, 160, 47, 13));
        label_cep->setFont(font1);
        label_telefone = new QLabel(cadastro);
        label_telefone->setObjectName(QStringLiteral("label_telefone"));
        label_telefone->setGeometry(QRect(10, 240, 61, 16));
        label_telefone->setFont(font1);
        lineEdit = new QLineEdit(cadastro);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 90, 113, 20));
        lineEdit_2 = new QLineEdit(cadastro);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 90, 113, 20));
        lineEdit_3 = new QLineEdit(cadastro);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 160, 113, 20));
        lineEdit_4 = new QLineEdit(cadastro);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(300, 160, 113, 20));
        lineEdit_5 = new QLineEdit(cadastro);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 240, 113, 20));
        label_quarto = new QLabel(cadastro);
        label_quarto->setObjectName(QStringLiteral("label_quarto"));
        label_quarto->setGeometry(QRect(250, 240, 111, 16));
        label_quarto->setFont(font1);
        lineEdit_6 = new QLineEdit(cadastro);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(360, 240, 61, 20));
        pushButton = new QPushButton(cadastro);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 340, 161, 23));
        label_2 = new QLabel(cadastro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 290, 47, 13));
        lineEdit_7 = new QLineEdit(cadastro);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(70, 290, 61, 20));
        label_3 = new QLabel(cadastro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 400, 111, 16));
        label_4 = new QLabel(cadastro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 460, 47, 13));
        label_4->setFont(font1);
        lineEdit_8 = new QLineEdit(cadastro);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(120, 460, 211, 20));
        pushButton_2 = new QPushButton(cadastro);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 510, 121, 23));
        label_result = new QLabel(cadastro);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(40, 520, 47, 13));

        retranslateUi(cadastro);

        QMetaObject::connectSlotsByName(cadastro);
    } // setupUi

    void retranslateUi(QDialog *cadastro)
    {
        cadastro->setWindowTitle(QApplication::translate("cadastro", "Dialog", nullptr));
        label->setText(QApplication::translate("cadastro", "BEM-VINDO A TELA DE CADASTRO DO CLIENTE", nullptr));
        label_nome->setText(QApplication::translate("cadastro", "Nome:", nullptr));
        label_idade->setText(QApplication::translate("cadastro", "Idade:", nullptr));
        label_cpf->setText(QApplication::translate("cadastro", "CPF:", nullptr));
        label_cep->setText(QApplication::translate("cadastro", "CEP:", nullptr));
        label_telefone->setText(QApplication::translate("cadastro", "Telefone:", nullptr));
        lineEdit->setText(QString());
        label_quarto->setText(QApplication::translate("cadastro", "Quarto do ospede:", nullptr));
        pushButton->setText(QApplication::translate("cadastro", "CADASTRAR", nullptr));
        label_2->setText(QApplication::translate("cadastro", "ID:", nullptr));
        label_3->setText(QApplication::translate("cadastro", "Quem deseja buscar?", nullptr));
        label_4->setText(QApplication::translate("cadastro", "CPF:", nullptr));
        pushButton_2->setText(QApplication::translate("cadastro", "BUSCAR", nullptr));
        label_result->setText(QApplication::translate("cadastro", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro: public Ui_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
