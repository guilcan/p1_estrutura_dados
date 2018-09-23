/********************************************************************************
** Form generated from reading UI file 'buscar.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAR_H
#define UI_BUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_buscar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_cpf_3;

    void setupUi(QDialog *buscar)
    {
        if (buscar->objectName().isEmpty())
            buscar->setObjectName(QStringLiteral("buscar"));
        buscar->resize(433, 327);
        label = new QLabel(buscar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 271, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(buscar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 50, 111, 16));
        label_3 = new QLabel(buscar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 47, 13));
        lineEdit_cpf_3 = new QLineEdit(buscar);
        lineEdit_cpf_3->setObjectName(QStringLiteral("lineEdit_cpf_3"));
        lineEdit_cpf_3->setGeometry(QRect(100, 150, 211, 20));

        retranslateUi(buscar);

        QMetaObject::connectSlotsByName(buscar);
    } // setupUi

    void retranslateUi(QDialog *buscar)
    {
        buscar->setWindowTitle(QApplication::translate("buscar", "Dialog", nullptr));
        label->setText(QApplication::translate("buscar", "BEM-VINDO A TELA DE BUSCA", nullptr));
        label_2->setText(QApplication::translate("buscar", "Quem deseja buscar?", nullptr));
        label_3->setText(QApplication::translate("buscar", "CPF:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscar: public Ui_buscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_H
