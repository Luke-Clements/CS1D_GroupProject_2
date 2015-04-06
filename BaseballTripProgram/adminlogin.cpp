#include "adminlogin.h"
#include "ui_adminlogin.h"

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_CancelButton_clicked()
{
    this->close();
}

void AdminLogin::on_LoginButton_clicked()
{
    QString password = ui->PasswordLineEdit->text();
    ui->PasswordLineEdit->setFocus();

    connect(ui->PasswordLineEdit, SIGNAL(returnPressed()),
            ui->LoginButton, SLOT(click()));

    if (password == "asdf" || password == "bawlz")
    {
        Maintenance *maintain = new Maintenance;
        maintain->show();
        this->close();
        maintain->setModal(true);

    }
    else
    {
        ui->PasswordLineEdit->clear();
    }
}
