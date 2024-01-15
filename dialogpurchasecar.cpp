#include "dialogpurchasecar.h"
#include "ui_dialogpurchasecar.h"

DialogPurchaseCar::DialogPurchaseCar(QWidget *parent,QSqlDatabase *aDB) :
    QDialog(parent),
    ui(new Ui::DialogPurchaseCar)
{
    ui->setupUi(this);
    tdb=aDB;
}

DialogPurchaseCar::~DialogPurchaseCar()
{
    delete ui;
}
void DialogPurchaseCar::setCarInformation(const QString& ModelName, const QString& Color, const QString& Price, const QString& TransmissionType)
{
    ui->ModelName->setText(ModelName);
    ui->Color->setText(Color);
    ui->Price->setText(Price);
    ui->TransmissionType->setText(TransmissionType);
}

void DialogPurchaseCar::on_ConfirmPurchase_clicked()
{
    QString modelName = ui->ModelName->text();
    QString color = ui->Color->text();
    QString price = ui->Price->text();
    QString transmissionType = ui->TransmissionType->text();

    emit CarPurchased();
    emit PurchaseConfirmed();
    close();
    emit UpdateComboBoxes();
}

