/********************************************************************************
** Form generated from reading UI file 'cadastrar.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRAR_H
#define UI_CADASTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cadastrar
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_nome;
    QLabel *label_idade;
    QLabel *label_cpf;
    QLabel *label_telefone;
    QLabel *label_cep;
    QLabel *label_quarto;
    QLineEdit *lineEdit_nome;
    QLineEdit *lineEdit_idade;
    QLineEdit *lineEdit_cpf;
    QLineEdit *lineEdit_cep;
    QLineEdit *lineEdit_telefone;
    QLineEdit *lineEdit_quarto;

    void setupUi(QDialog *cadastrar)
    {
        if (cadastrar->objectName().isEmpty())
            cadastrar->setObjectName(QStringLiteral("cadastrar"));
        cadastrar->resize(528, 449);
        pushButton = new QPushButton(cadastrar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 350, 171, 23));
        pushButton_2 = new QPushButton(cadastrar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 400, 61, 23));
        label = new QLabel(cadastrar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 311, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_nome = new QLabel(cadastrar);
        label_nome->setObjectName(QStringLiteral("label_nome"));
        label_nome->setGeometry(QRect(10, 70, 47, 13));
        QFont font1;
        font1.setPointSize(10);
        label_nome->setFont(font1);
        label_idade = new QLabel(cadastrar);
        label_idade->setObjectName(QStringLiteral("label_idade"));
        label_idade->setGeometry(QRect(330, 70, 47, 13));
        label_idade->setFont(font1);
        label_cpf = new QLabel(cadastrar);
        label_cpf->setObjectName(QStringLiteral("label_cpf"));
        label_cpf->setGeometry(QRect(10, 130, 47, 13));
        label_cpf->setFont(font1);
        label_telefone = new QLabel(cadastrar);
        label_telefone->setObjectName(QStringLiteral("label_telefone"));
        label_telefone->setGeometry(QRect(10, 210, 61, 16));
        label_telefone->setFont(font1);
        label_cep = new QLabel(cadastrar);
        label_cep->setObjectName(QStringLiteral("label_cep"));
        label_cep->setGeometry(QRect(330, 130, 47, 13));
        label_cep->setFont(font1);
        label_quarto = new QLabel(cadastrar);
        label_quarto->setObjectName(QStringLiteral("label_quarto"));
        label_quarto->setGeometry(QRect(10, 290, 101, 16));
        label_quarto->setFont(font1);
        lineEdit_nome = new QLineEdit(cadastrar);
        lineEdit_nome->setObjectName(QStringLiteral("lineEdit_nome"));
        lineEdit_nome->setGeometry(QRect(70, 70, 221, 20));
        lineEdit_idade = new QLineEdit(cadastrar);
        lineEdit_idade->setObjectName(QStringLiteral("lineEdit_idade"));
        lineEdit_idade->setGeometry(QRect(380, 70, 113, 20));
        lineEdit_cpf = new QLineEdit(cadastrar);
        lineEdit_cpf->setObjectName(QStringLiteral("lineEdit_cpf"));
        lineEdit_cpf->setGeometry(QRect(70, 130, 221, 20));
        lineEdit_cep = new QLineEdit(cadastrar);
        lineEdit_cep->setObjectName(QStringLiteral("lineEdit_cep"));
        lineEdit_cep->setGeometry(QRect(380, 130, 113, 20));
        lineEdit_telefone = new QLineEdit(cadastrar);
        lineEdit_telefone->setObjectName(QStringLiteral("lineEdit_telefone"));
        lineEdit_telefone->setGeometry(QRect(70, 210, 431, 20));
        lineEdit_quarto = new QLineEdit(cadastrar);
        lineEdit_quarto->setObjectName(QStringLiteral("lineEdit_quarto"));
        lineEdit_quarto->setGeometry(QRect(110, 290, 381, 20));

        retranslateUi(cadastrar);

        QMetaObject::connectSlotsByName(cadastrar);
    } // setupUi

    void retranslateUi(QDialog *cadastrar)
    {
        cadastrar->setWindowTitle(QApplication::translate("cadastrar", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("cadastrar", "CADASTRAR", nullptr));
        pushButton_2->setText(QApplication::translate("cadastrar", "VOLTAR", nullptr));
        label->setText(QApplication::translate("cadastrar", "BEM-VINDO A TELA DE CADASTRO", nullptr));
        label_nome->setText(QApplication::translate("cadastrar", "Nome:", nullptr));
        label_idade->setText(QApplication::translate("cadastrar", "Idade:", nullptr));
        label_cpf->setText(QApplication::translate("cadastrar", "CPF:", nullptr));
        label_telefone->setText(QApplication::translate("cadastrar", "Telefone:", nullptr));
        label_cep->setText(QApplication::translate("cadastrar", "CEP:", nullptr));
        label_quarto->setText(QApplication::translate("cadastrar", "Quarto do Hotel:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastrar: public Ui_cadastrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRAR_H
