/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *god;
    QLineEdit *name;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *exit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *music_switch;
    QLabel *music_c;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        god = new QLabel(Dialog);
        god->setObjectName(QString::fromUtf8("god"));
        god->setGeometry(QRect(60, 30, 201, 131));
        name = new QLineEdit(Dialog);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(30, 200, 161, 21));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(230, 210, 171, 86));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(verticalLayoutWidget);
        start->setObjectName(QString::fromUtf8("start"));

        verticalLayout->addWidget(start);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));

        verticalLayout->addWidget(exit);

        verticalLayoutWidget_2 = new QWidget(Dialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(240, 40, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        music_switch = new QPushButton(verticalLayoutWidget_2);
        music_switch->setObjectName(QString::fromUtf8("music_switch"));

        verticalLayout_2->addWidget(music_switch);

        music_c = new QLabel(verticalLayoutWidget_2);
        music_c->setObjectName(QString::fromUtf8("music_c"));

        verticalLayout_2->addWidget(music_c);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        god->setText(QCoreApplication::translate("Dialog", "//", nullptr));
        start->setText(QCoreApplication::translate("Dialog", "start", nullptr));
        exit->setText(QCoreApplication::translate("Dialog", "exit", nullptr));
        music_switch->setText(QCoreApplication::translate("Dialog", "music", nullptr));
        music_c->setText(QCoreApplication::translate("Dialog", "music:off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
