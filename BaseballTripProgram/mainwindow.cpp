#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->BaseButton, SIGNAL(clicked()),
                     this, SLOT(updatelabel()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updatelabel()
{
    QFont font("Arial", 100, QFont::Bold);
    ui->BaseButton->setFont(font);
    ui->BaseButton->setStyleSheet("color: rgb(255,0,0)");
    ui->BaseButton->setText("BAWLZ");
}

void MainWindow::on_AdminButton_clicked()
{
    AdminLogin *that = new AdminLogin;
    that->setModal(true);
    that->show();
}
