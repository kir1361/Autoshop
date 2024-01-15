#ifndef DIALOGADDCAR2_H
#define DIALOGADDCAR2_H

#include "qsqldatabase.h"
#include <QDialog>
#include <QtSql>

namespace Ui {
class DialogAddCar2;
}

class DialogAddCar2 : public QDialog
{ Q_OBJECT
    QSqlDatabase *fdb=nullptr;
public:
    explicit DialogAddCar2(QWidget *parent = nullptr, QSqlDatabase *aDB=nullptr);
    ~DialogAddCar2();

private:
    Ui::DialogAddCar2 *ui;

signals:
    void dataEntered(const QString& Id, const QString& Color, const QString& Price,
                     const QString& Photo, const QString& ModelId, const QString& EquipmentId);
    void dataEntered1(const QString& Id,const QString& EngineName,const QString& EngineVolume,
                      const QString& WheelDrive,const QString& TransmissionType,const QString& HorsePower,
                      const QString& MaxSpeed,const QString& ModelId);
    void dataEntered2(const QString& Id,const QString& Manufacturer,const QString& Country);
    void dataEntered3(const QString& Id,const QString& ModelName,const QString& ManufacturerId,
                      const QString& Mass,const QString& Lenght,const QString& Width,const QString& Height,const QString& Clearance,const QString& BodyType);
private slots:
    void on_APPLY_clicked();
};

#endif // DIALOGADDCAR2_H
