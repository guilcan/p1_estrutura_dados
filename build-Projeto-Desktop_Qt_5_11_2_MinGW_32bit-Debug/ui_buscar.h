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
    QLineEdit *lineEdit;

    void setupUi(QDialog *buscar)
    {
        if (buscar->objectName().isEmpty())
            buscar->setObjectName(QStringLiteral("buscar"));
        buscar->resize(435, 338);
        label = new QLabel(buscar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 331, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(buscar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 47, 13));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(buscar);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 160, 201, 20));

        retranslateUi(buscar);

        QMetaObject::connectSlotsByName(buscar);
    } // setupUi

    void retranslateUi(QDialog *buscar)
    {
        buscar->setWindowTitle(QApplication::translate("buscar", "Dialog", nullptr));
        label->setText(QApplication::translate("buscar", "BUSCAR INFORMA\303\207\303\225ES DE OSPEDES", nullptr));
        label_2->setText(QApplication::translate("buscar", "CPF:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscar: public Ui_buscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_H
