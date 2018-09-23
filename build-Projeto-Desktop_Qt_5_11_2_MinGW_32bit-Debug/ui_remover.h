/********************************************************************************
** Form generated from reading UI file 'remover.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVER_H
#define UI_REMOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_remover
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_cpf_2;

    void setupUi(QDialog *remover)
    {
        if (remover->objectName().isEmpty())
            remover->setObjectName(QStringLiteral("remover"));
        remover->resize(464, 358);
        label = new QLabel(remover);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 431, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(remover);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 50, 111, 16));
        label_3 = new QLabel(remover);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 160, 47, 13));
        lineEdit_cpf_2 = new QLineEdit(remover);
        lineEdit_cpf_2->setObjectName(QStringLiteral("lineEdit_cpf_2"));
        lineEdit_cpf_2->setGeometry(QRect(110, 160, 261, 20));

        retranslateUi(remover);

        QMetaObject::connectSlotsByName(remover);
    } // setupUi

    void retranslateUi(QDialog *remover)
    {
        remover->setWindowTitle(QApplication::translate("remover", "Dialog", nullptr));
        label->setText(QApplication::translate("remover", "BEM-VINDO A TELA DE REMO\303\207\303\203O DE CLIENTES", nullptr));
        label_2->setText(QApplication::translate("remover", "Quem deseja remover?", nullptr));
        label_3->setText(QApplication::translate("remover", "CPF:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remover: public Ui_remover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVER_H
