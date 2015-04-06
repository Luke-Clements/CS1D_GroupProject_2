#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "adminlogin.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updatelabel();

    void on_AdminButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
