#ifndef DIALOGPURCHASECAR_H
#define DIALOGPURCHASECAR_H

#include <QDialog>
#include "qsqldatabase.h"
#include <QtSql>

namespace Ui {
class DialogPurchaseCar;
}

class DialogPurchaseCar : public QDialog
{
    Q_OBJECT
    QSqlDatabase *tdb=nullptr;

public:
    explicit DialogPurchaseCar(QWidget *parent,QSqlDatabase *aDB);
    ~DialogPurchaseCar();

public:    Ui::DialogPurchaseCar *ui;

    void setCarInformation(const QString& ModelName, const QString& Color, const QString& Price, const QString& TransmissionType);

private slots:
    void on_ConfirmPurchase_clicked();
signals:
    void CarPurchased();
    void PurchaseConfirmed();
     void UpdateComboBoxes();

};

#endif // DIALOGPURCHASECAR_H
