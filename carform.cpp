#include "carform.h"
#include "ui_carform.h"

CarForm::CarForm(QWidget *parent, bool isUser, int id) :
    QDialog(parent),
    ui(new Ui::CarForm)
{
    ui->setupUi(this);
    ui->groupBox->setEnabled(not isUser);
    MyId = id;
    ui->Ok->setVisible(isUser);
    ui->ApplyEdit->setVisible(!isUser);
}

CarForm::~CarForm()
{
    delete ui;
}

void CarForm::showEvent(QShowEvent *)
{
    QSqlQuery queryCar;
    queryCar.prepare("SELECT * FROM Car WHERE id = :id");
    queryCar.bindValue(":id", MyId);
    if (queryCar.exec() && queryCar.next())
    {
        QString value = queryCar.value(1).toString();
        ui->Color->setText(value);
        value = queryCar.value(2).toString();
        ui->Price->setText(value);

        int modelId =  queryCar.value(4).toInt();
        QSqlQuery queryModel;
        queryModel.prepare("SELECT * FROM Model WHERE Id = :Id");
        queryModel.bindValue(":Id", modelId);
        if (queryModel.exec() && queryModel.next())
        {
            value = queryModel.value(1).toString();
            ui->ModelName->setText(value);
            value = queryModel.value(3).toString();
            ui->Mass->setText(value);
            value = queryModel.value(4).toString();
            ui->Lenght->setText(value);
            value = queryModel.value(5).toString();
            ui->Width->setText(value);
            value = queryModel.value(6).toString();
            ui->Height->setText(value);
            value = queryModel.value(7).toString();
            ui->Clearance->setText(value);
            value = queryModel.value(8).toString();
            ui->BodyType->setText(value.trimmed());
        }
        int ManufacturerId = queryModel.value(2).toInt();
        QSqlQuery queryManufacturer;
        queryManufacturer.prepare("SELECT * FROM Manufacturer WHERE Id = :Id");
        queryManufacturer.bindValue(":Id", ManufacturerId);
        if (queryManufacturer.exec() && queryManufacturer.next())
        {
        value = queryManufacturer.value(1).toString();
        ui->ManufacturerName->setText(value);
        value = queryManufacturer.value(2).toString();
        ui->Country->setText(value);
        }
        int EquipmentId =  queryCar.value(5).toInt();
        QSqlQuery queryEquipment;
        queryEquipment.prepare("SELECT * FROM Equipment WHERE Id = :Id");
        queryEquipment.bindValue(":Id", EquipmentId);
        if (queryEquipment.exec() && queryEquipment.next())
        {
        value = queryEquipment.value(1).toString();
        ui->EngineName->setText(value);
        value = queryEquipment.value(2).toString();
        ui->EngineVolume->setText(value);
        value = queryEquipment.value(3).toString();
        ui->WheelDrive->setText(value);
        value = queryEquipment.value(4).toString();
        ui->TransmissionType->setText(value);
        value = queryEquipment.value(5).toString();
        ui->HorsePower->setText(value);
        value = queryEquipment.value(6).toString();
        ui->MaxSpeed->setText(value);
        }
}
    }

void CarForm::on_ApplyEdit_clicked()
{
QSqlQuery queryCar;
queryCar.prepare("SELECT ModelId,EquipmentId FROM Car WHERE id = :id");
queryCar.bindValue(":id", MyId);
queryCar.exec();
queryCar.next();
int EquipmentId =  queryCar.value(1).toInt();
int ModelId =  queryCar.value(0).toInt();
QString Color = ui->Color->text();
int Price = ui->Price->text().toInt();
queryCar.prepare("UPDATE Car SET Color = :color, Price = :price WHERE id = :id");
queryCar.bindValue(":id", MyId);
queryCar.bindValue(":color", Color);
queryCar.bindValue(":price", Price);
queryCar.exec();

QSqlQuery queryModel;
queryModel.prepare("SELECT ManufacturerId FROM Model WHERE id = :id");
queryModel.bindValue(":id", ModelId);
queryModel.exec();
queryModel.next();
int ManufacturerId =  queryModel.value(0).toInt();
QString ModelName = ui->ModelName->text();
float Mass =  ui->Mass->text().toFloat();
float Lenght = ui->Lenght->text().toFloat();
float Width = ui->Width->text().toFloat();
float Height = ui->Height->text().toFloat();
float Clearance = ui->Clearance->text().toFloat();
QString BodyType = ui->BodyType->text();
queryModel.prepare("UPDATE Model SET ModelName = :modelname, Mass = :mass, Lenght = :lenght, Width = :width, Height = :height, Clearance = :clearance, BodyType = :bodytype WHERE id = :id");
queryModel.bindValue(":id", ModelId);
queryModel.bindValue(":modelname", ModelName);
queryModel.bindValue(":mass", Mass);
queryModel.bindValue(":lenght", Lenght);
queryModel.bindValue(":width", Width);
queryModel.bindValue(":height", Height);
queryModel.bindValue(":clearance", Clearance);
queryModel.bindValue(":bodytype", BodyType);
queryModel.exec();

QSqlQuery queryManufacturer;
QString ManufacturerName = ui->ManufacturerName->text();
QString Country =  ui->Country->text();
queryManufacturer.prepare("UPDATE Manufacturer SET Country = :country, ManufacturerName = :manufacturername WHERE id = :id");
queryManufacturer.bindValue(":id", ManufacturerId);
queryManufacturer.bindValue(":country", Country);
queryManufacturer.bindValue(":manufacturername", ManufacturerName);
queryManufacturer.exec();


QSqlQuery  queryEquipment;
QString EngineName = ui->Color->text();
float EngineVolume =  ui->Price->text().toFloat();
QString WheelDrive = ui->Color->text();
QString TransmissionType =  ui->Price->text();
int HorsePower = ui->Color->text().toInt();
int MaxSpeed =  ui->Price->text().toInt();
queryEquipment.prepare("UPDATE Car SET EngineName = :enginename, EngineVolume = :enginevolume, WheelDrive = :wheeldrive, TransmissionType = :transmissiontype, HorsePower = :horsepower, MaxSpeed = :maxspeed WHERE id = :id");
queryEquipment.bindValue(":id", MyId);
queryEquipment.bindValue(":enginename", EngineName);
queryEquipment.bindValue(":enginevolume", EngineVolume);
queryEquipment.bindValue(":wheeldrive", WheelDrive);
queryEquipment.bindValue(":transmissiontype", TransmissionType);
queryEquipment.bindValue(":horsepower", HorsePower);
queryEquipment.bindValue(":maxspeed", MaxSpeed);
queryEquipment.exec();
accept();
}

