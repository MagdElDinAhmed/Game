#include "main_menu.h"
#include "ui_main_menu.h"

main_menu::main_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main_menu)
{
    ui->setupUi(this);
}

main_menu::~main_menu()
{
    delete ui;
}

void main_menu::on_start_clicked()
{
    main.show();
    this->close();
}


void main_menu::on_exit_clicked()
{
    this->close();
}

