#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

#include "mainwindow.h"
#include "maintenance.h"

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = 0);
    ~AdminLogin();

private slots:
    void on_CancelButton_clicked();

    void on_LoginButton_clicked();

private:
    Ui::AdminLogin *ui;

};

#endif // ADMINLOGIN_H
