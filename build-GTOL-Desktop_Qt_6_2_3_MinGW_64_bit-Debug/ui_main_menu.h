/********************************************************************************
** Form generated from reading UI file 'main_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_MENU_H
#define UI_MAIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Menu
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *end;
    QLabel *god;
    QLineEdit *name;

    void setupUi(QDialog *Main_Menu)
    {
        if (Main_Menu->objectName().isEmpty())
            Main_Menu->setObjectName(QString::fromUtf8("Main_Menu"));
        Main_Menu->resize(400, 300);
        verticalLayoutWidget = new QWidget(Main_Menu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 180, 141, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(verticalLayoutWidget);
        start->setObjectName(QString::fromUtf8("start"));

        verticalLayout->addWidget(start);

        end = new QPushButton(verticalLayoutWidget);
        end->setObjectName(QString::fromUtf8("end"));

        verticalLayout->addWidget(end);

        god = new QLabel(Main_Menu);
        god->setObjectName(QString::fromUtf8("god"));
        god->setGeometry(QRect(80, 40, 261, 81));
        name = new QLineEdit(Main_Menu);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(50, 190, 201, 41));

        retranslateUi(Main_Menu);

        QMetaObject::connectSlotsByName(Main_Menu);
    } // setupUi

    void retranslateUi(QDialog *Main_Menu)
    {
        Main_Menu->setWindowTitle(QCoreApplication::translate("Main_Menu", "Dialog", nullptr));
        start->setText(QCoreApplication::translate("Main_Menu", "start", nullptr));
        end->setText(QCoreApplication::translate("Main_Menu", "exit", nullptr));
        god->setText(QCoreApplication::translate("Main_Menu", "//", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_Menu: public Ui_Main_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_H
