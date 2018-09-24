/********************************************************************************
** Form generated from reading UI file 'popup_2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_2_H
#define UI_POPUP_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_popup_2
{
public:
    QLabel *label;

    void setupUi(QDialog *popup_2)
    {
        if (popup_2->objectName().isEmpty())
            popup_2->setObjectName(QStringLiteral("popup_2"));
        popup_2->resize(503, 74);
        label = new QLabel(popup_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 351, 16));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        retranslateUi(popup_2);

        QMetaObject::connectSlotsByName(popup_2);
    } // setupUi

    void retranslateUi(QDialog *popup_2)
    {
        popup_2->setWindowTitle(QApplication::translate("popup_2", "Dialog", nullptr));
        label->setText(QApplication::translate("popup_2", "CADASTRO REALIZADO COM SUCESSO!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popup_2: public Ui_popup_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_2_H
