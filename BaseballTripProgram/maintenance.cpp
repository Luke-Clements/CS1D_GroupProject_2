#include "maintenance.h"
#include "ui_maintenance.h"

Maintenance::Maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Maintenance)
{
    ui->setupUi(this);
    ui->BackButton->setText("Work in progress. Go back");
}

Maintenance::~Maintenance()
{
    delete ui;
}

void Maintenance::on_BackButton_clicked()
{
    this->close();
}
