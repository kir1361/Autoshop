
#include <QSqlTableModel>
#include <QtSql>
#include <QString>
#include <mainwindow.h>

DialogAddCar::DialogAddCar(QWidget *parent,QSqlDatabase *aDB) :
    QDialog(parent),
    ui(new Ui::DialogAddCar)
{
    //connect(ui->pbAddCar, &QPushButton::clicked, this, &DialogAddCar::show);
    //ui->setupUi(this);
}

DialogAddCar::~DialogAddCar()
{
    delete ui;
}

