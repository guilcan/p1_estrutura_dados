/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_popup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *popup)
    {
        if (popup->objectName().isEmpty())
            popup->setObjectName(QStringLiteral("popup"));
        popup->resize(352, 91);
        label = new QLabel(popup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 51, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(popup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 201, 16));
        label_3 = new QLabel(popup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 261, 16));

        retranslateUi(popup);

        QMetaObject::connectSlotsByName(popup);
    } // setupUi

    void retranslateUi(QDialog *popup)
    {
        popup->setWindowTitle(QApplication::translate("popup", "Dialog", nullptr));
        label->setText(QApplication::translate("popup", "Senhor,", nullptr));
        label_2->setText(QApplication::translate("popup", "Seu CPF, NOME ou ID j\303\241 foi cadastrado.", nullptr));
        label_3->setText(QApplication::translate("popup", "Por favor, altere para que o cadastro seja realizado.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popup: public Ui_popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
