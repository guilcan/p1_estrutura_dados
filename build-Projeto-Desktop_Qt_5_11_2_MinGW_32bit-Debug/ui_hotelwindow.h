/********************************************************************************
** Form generated from reading UI file 'hotelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELWINDOW_H
#define UI_HOTELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HotelWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_cadastro;
    QPushButton *pushButton_remover;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HotelWindow)
    {
        if (HotelWindow->objectName().isEmpty())
            HotelWindow->setObjectName(QStringLiteral("HotelWindow"));
        HotelWindow->resize(510, 413);
        centralWidget = new QWidget(HotelWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 331, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 50, 101, 16));
        pushButton_cadastro = new QPushButton(centralWidget);
        pushButton_cadastro->setObjectName(QStringLiteral("pushButton_cadastro"));
        pushButton_cadastro->setGeometry(QRect(150, 150, 201, 23));
        pushButton_remover = new QPushButton(centralWidget);
        pushButton_remover->setObjectName(QStringLiteral("pushButton_remover"));
        pushButton_remover->setGeometry(QRect(150, 210, 201, 23));
        HotelWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HotelWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 21));
        HotelWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HotelWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HotelWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HotelWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HotelWindow->setStatusBar(statusBar);

        retranslateUi(HotelWindow);

        QMetaObject::connectSlotsByName(HotelWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HotelWindow)
    {
        HotelWindow->setWindowTitle(QApplication::translate("HotelWindow", "HotelWindow", nullptr));
        label->setText(QApplication::translate("HotelWindow", "BEM-VINDO AO SISTEMA DO HOTEL", nullptr));
        label_2->setText(QApplication::translate("HotelWindow", "Oque deseja fazer?", nullptr));
        pushButton_cadastro->setText(QApplication::translate("HotelWindow", "CADASTRAR E BUSCAR OSPEDE", nullptr));
        pushButton_remover->setText(QApplication::translate("HotelWindow", "REMO\303\207\303\203O DE OSPEDE DO SISTEMA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotelWindow: public Ui_HotelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELWINDOW_H
