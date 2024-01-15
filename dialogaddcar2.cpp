#include "dialogaddcar2.h"
#include "ui_dialogaddcar2.h"
#include <QtSql>
#include <QDialog>


DialogAddCar2::DialogAddCar2(QWidget *parent,QSqlDatabase *aDB) :
    QDialog(parent),
    ui(new Ui::DialogAddCar2)
{
    ui->setupUi(this);
    fdb = aDB;
}

DialogAddCar2::~DialogAddCar2()
{
    delete ui;
}


void DialogAddCar2::on_APPLY_clicked()
{
    QString Id = ui->Id->text();
    QString Color = ui->Color->text();
    QString Price = ui->Price->text();
    QString Photo = ui->Photo->text();
    QString ModelId = ui->ModelId->text();
    QString EquipmentId = ui->EquipmentId->text();
    QString EngineName = ui->EngineName->text();
    QString EngineVolume = ui->EngineVolume->text();
    QString WheelDrive = ui->WheelDrive->text();
    QString TransmissionType = ui->TranssmisionType->text();
    QString HorsePower = ui->HorsePower->text();
    QString MaxSpeed = ui->MaxSpeed->text();
    QString ManufacturerName = ui->ManufacturerName->text();
    QString Country = ui->Country->text();
    QString ModelName = ui->ModelName->text();
    QString ManufacturerId = ui->ManufacturerId->text();
    QString Mass = ui->Mass->text();
    QString Lenght = ui->Lenght->text();
    QString Width = ui->Width->text();
    QString Height = ui->Height->text();
    QString Clearance = ui->Clearance->text();
    QString BodyType = ui->BodyType->text();

    QSqlQuery Manufacturerquery(*fdb);
    Manufacturerquery.prepare("INSERT INTO Manufacturer (Id,ManufacturerName,Country) VALUES(?,?,?)");
    Manufacturerquery.bindValue(0,ManufacturerId);
    Manufacturerquery.bindValue(1,ManufacturerName);
    Manufacturerquery.bindValue(2,Country);
     Manufacturerquery.exec();



    QSqlQuery Modelquery(*fdb);
    Modelquery.prepare("INSERT INTO Model (Id,ModelName,ManufacturerId,Mass,Lenght,Width,Height,Clearance,BodyType) VALUES(?,?,?,?,?,?,?,?,?)");
    Modelquery.bindValue(0, ModelId);
    Modelquery.bindValue(1, ModelName);
    Modelquery.bindValue(2, ManufacturerId);
    Modelquery.bindValue(3, Mass);
    Modelquery.bindValue(4, Lenght);
    Modelquery.bindValue(5, Width);
    Modelquery.bindValue(6, Height);
    Modelquery.bindValue(7, Clearance);
    Modelquery.bindValue(8, BodyType);
    Modelquery.exec();



       QSqlQuery Equipmentquery(*fdb);
       Equipmentquery.prepare("INSERT INTO Equipment (Id,EngineName,EngineVolume,WheelDrive,TransmissionType,HorsePower,MaxSpeed,ModelId) VALUES (?,?,?,?,?,?,?,?)");

       Equipmentquery.bindValue(0, EquipmentId);
       Equipmentquery.bindValue(1, EngineName);
      Equipmentquery.bindValue(2, EngineVolume);
       Equipmentquery.bindValue(3, WheelDrive);
       Equipmentquery.bindValue(4, TransmissionType);
      Equipmentquery.bindValue(5, HorsePower);
      Equipmentquery.bindValue(6, MaxSpeed);
       Equipmentquery.bindValue(7, ModelId);
       Equipmentquery.exec();




            QSqlQuery Carquery(*fdb);
            Carquery.prepare("INSERT INTO Car (Id,Color,Price,Photo,ModelId,EquipmentId) VALUES (?,?,?,?,?,?)");

            Carquery.bindValue(0, Id);
            Carquery.bindValue(1, Color);
            Carquery.bindValue(2, Price);
            Carquery.bindValue(3, Photo);
            Carquery.bindValue(4, ModelId);
            Carquery.bindValue(5, EquipmentId);
            Carquery.exec();


            accept();

}
