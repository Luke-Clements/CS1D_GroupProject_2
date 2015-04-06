#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <QDialog>

namespace Ui {
class Maintenance;
}

class Maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit Maintenance(QWidget *parent = 0);
    ~Maintenance();

private slots:
    void on_BackButton_clicked();

private:
    Ui::Maintenance *ui;
};

#endif // MAINTENANCE_H
