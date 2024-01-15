#ifndef DIALOGADDCAR_H
#define DIALOGADDCAR_H

#include <QMainWindow>
#include <QDialog>
#include <mainwindow.h>
#include <QtSql>
#include <QSqlTableModel>



namespace Ui {
class DialogAddCar;
}

class DialogAddCar : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCar(QWidget *parent = nullptr, QSqlDatabase *aDB=nullptr);
    ~DialogAddCar();

private:
    Ui::DialogAddCar *ui;

#endif // DIALOGADDCAR_H
