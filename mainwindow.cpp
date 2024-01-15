
#include "mainwindow.h"
#include "dialogaddcar2.h"
#include "dialogpurchasecar.h"
#include "ui_mainwindow.h"
#include "carform.h"
#include <qlistwidget.h>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QtSql>
#include <QString>
#include <congratulationsdialog.h>

MainWindow::MainWindow(QWidget *parent, QSqlDatabase *aDB)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->listWidgetCar,&QListWidget::itemDoubleClicked,this,&MainWindow::GetCar);
    db = aDB;
    connect(ui->pbAddCar,&QPushButton::clicked,this, &MainWindow::slotAddCar);
    connect(ui->ApplyButton, &QPushButton::clicked, this, &::MainWindow::on_ApplyButton_clicked);
    connect(ui->ReceiveEarnings, &QPushButton::clicked, this, &MainWindow::on_ReceiveEarnings_clicked);




    QSqlQueryModel* model = new QSqlQueryModel(this);
    QString modelquery = "SELECT ModelName FROM Model";
    model->setQuery(modelquery);
    ui->comboBoxModel->setModel(model);
    ui->comboBoxModel->setModelColumn(0);


    QSqlQueryModel* color = new QSqlQueryModel(this);
    QString colorquery = "SELECT Color FROM Car";
    color->setQuery(colorquery);
    ui->comboBoxColor->setModel(color);
    ui->comboBoxColor->setModelColumn(0);

    QSqlQueryModel* bodytype = new QSqlQueryModel(this);
    QString bodytypequery = "SELECT BodyType FROM Model";
    bodytype->setQuery(bodytypequery);
    ui->comboBoxBodyType->setModel(bodytype);
    ui->comboBoxBodyType->setModelColumn(0);


    QSqlQueryModel* manufacturername = new QSqlQueryModel(this);
    QString manufacturernamequery = "SELECT ManufacturerName FROM Manufacturer";
    manufacturername->setQuery(manufacturernamequery);
    ui->comboBoxManufacturerName->setModel(manufacturername);
    ui->comboBoxManufacturerName->setModelColumn(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetUser(bool aValue)
{
    PrUser = aValue;
    ui->pbAddCar->setVisible(!aValue);
    ui->pbDelCar->setVisible(!aValue);
    ui->pbEditCar->setVisible(!aValue);
    ui->Purchase->setVisible(aValue);
    ui->labelstart->setVisible(!aValue);
    ui->labelend->setVisible(!aValue);
    ui->StartDateLineEdit->setVisible(!aValue);
    ui->EndDateLineEdit->setVisible(!aValue);
    ui->ApplyButton->setVisible(!aValue);
    ui->ReceiveEarnings->setVisible(!aValue);
    ui->SaleColorCar->setVisible(!aValue);

}

void MainWindow::Update(bool ShowSoldCars)
{
    if (!ShowSoldCars)
    {
      ui->StartDateLineEdit->clear();
      ui->EndDateLineEdit->clear();
    }
    ui->listWidgetCar->clear();
    QSqlQuery myCars;
    QString StartDateString = ui->StartDateLineEdit->text();
    QString EndDateString = ui->EndDateLineEdit->text();
    QDate StartDate = QDate::fromString(StartDateString, "yyyy-MM-dd");
    QDate EndDate = QDate::fromString(EndDateString, "yyyy-MM-dd");

    if (StartDate.isValid() && EndDate.isValid())
    {
        myCars.prepare("SELECT * FROM Car WHERE DateofSale IS NOT NULL AND (DateOfSale BETWEEN :startDate AND :endDate)");
        myCars.bindValue(":startDate", StartDateString);
        myCars.bindValue(":endDate", EndDateString);
    }
    else
    {
        myCars.prepare("SELECT * FROM Car WHERE DateOfSale IS NULL");
    }

    myCars.exec();


    ui->listWidgetCar->clear();
    while (myCars.next())
    {
        QListWidgetItem *my_Item = new QListWidgetItem(ui->listWidgetCar);
        int myModelId = myCars.value(4).toInt();
        int myEqvId = myCars.value(5).toInt();
        QSqlQuery myEqv;
        QSqlQuery myModel;
        myEqv.exec(QString("SELECT * FROM Equipment WHERE Id=%1").arg(myEqvId));
        myEqv.next();
        myModel.exec(QString("SELECT * FROM Model WHERE Id=%1").arg(myModelId));
        myModel.next();
        my_Item->setData(Qt::UserRole,myCars.value(0).toInt());
        my_Item->setData(Qt::UserRole + 1, myModel.value(1).toString()); // ModelName
        my_Item->setData(Qt::UserRole + 2, myCars.value(1).toString()); // Color
        my_Item->setData(Qt::UserRole + 3, myCars.value(2).toString()); // Price
        my_Item->setData(Qt::UserRole + 4, myEqv.value(4).toString()); // TransmissionType

        QString itemText = QString("Color") + ": " + myCars.value(1).toString()+" | ";
        itemText += " " + QString("Price $") + ": " + myCars.value(2).toString()+" | ";
        itemText += " " + QString("ModelName") + ": " + myModel.value(1).toString()+" | ";
        itemText += " " +  QString("Transmission") + ": " + myEqv.value(4).toString();
        my_Item->setText(itemText);
        ui->listWidgetCar->addItem(my_Item);

    }

    ui->comboBoxColor->clear();
    ui->comboBoxModel->clear();
    ui->comboBoxBodyType->clear();
    ui->comboBoxManufacturerName->clear();

    QSqlQueryModel* color = new QSqlQueryModel(this);
    QString colorquery = "SELECT Color FROM Car";
    color->setQuery(colorquery);
    ui->comboBoxColor->setModel(color);
    ui->comboBoxColor->setModelColumn(0);

    QSqlQueryModel* model = new QSqlQueryModel(this);
    QString modelquery = "SELECT ModelName FROM Model";
    model->setQuery(modelquery);
    ui->comboBoxModel->setModel(model);
    ui->comboBoxModel->setModelColumn(0);

    QSqlQueryModel* bodytype = new QSqlQueryModel(this);
    QString bodytypequery = "SELECT BodyType FROM Model";
    bodytype->setQuery(bodytypequery);
    ui->comboBoxBodyType->setModel(bodytype);
    ui->comboBoxBodyType->setModelColumn(0);

    QSqlQueryModel* manufacturername = new QSqlQueryModel(this);
    QString manufacturernamequery = "SELECT ManufacturerName FROM Manufacturer";
    manufacturername->setQuery(manufacturernamequery);
    ui->comboBoxManufacturerName->setModel(manufacturername);
    ui->comboBoxManufacturerName->setModelColumn(0);

}
//  QSqlRecord myCarRec = FindCar(i);
/* QImage myImage(140,140,QImage::Format_RGB32);
        myImage.loadFromData(myRecord.value(3).toByteArray());
//        myPic.fromImage(myImage);
        QPixmap myPic(140,140);
        myPic.fill(Qt::red);
        QIcon myIcon(myPic);
        my_Item->setIcon(myIcon);*/

void MainWindow::GetCar(QListWidgetItem *index)
{
    int myId = index->data(Qt::UserRole).toInt();
    if (myId>0)
    {
        auto myCarForm = new CarForm(nullptr,PrUser,myId);
        if (myCarForm->exec())
            Update(false);
    }
}

void MainWindow::on_pbDelCar_clicked()
{
    QListWidgetItem *index = ui->listWidgetCar->currentItem();
    int myId =index->data(Qt::UserRole).toInt();
    if (myId>0)
    {
        QString myStr = QString("DELETE FROM Car WHERE Id=%1").arg(myId);

        QSqlQuery myQuery;
        if ( myQuery.exec(myStr) )
            Update(false);
    }
}

void MainWindow::slotAddCar()
{
   auto myDialogAddCar2 = new DialogAddCar2(nullptr,db);
   connect(myDialogAddCar2, &DialogAddCar2::dataEntered, this, &MainWindow::on_dataEntered);
   if (myDialogAddCar2->exec()){
   Update(false);
   }
}



void MainWindow::showEvent(QShowEvent *event)
{
    Update(false);
}

void MainWindow::on_dataEntered(const QString& Id, const QString& Color, const QString& Price,
                                const QString& Photo, const QString& ModelId, const QString& EquipmentId)
{

}

void MainWindow::on_dataEntered1(const QString &Id, const QString &EngineName, const QString &EngineVolume, const QString &WheelDrive, const QString &TransmissionType, const QString &HorsePower, const QString &MaxSpeed, const QString &ModelId)
{

}

void MainWindow::on_dataEntered2(const QString &Id, const QString &Manufacturer, const QString &Country)
{

}

void MainWindow::on_dataEntered3(const QString &Id, const QString &ModelName, const QString &ManufacturerId, const QString &Mass, const QString &Lenght, const QString &Width, const QString &Height, const QString &Clearance, const QString &BodyType)
{

};


void MainWindow::on_pbEditCar_clicked()
{
    QListWidgetItem *index = ui->listWidgetCar->currentItem();
    int myId =index->data(Qt::UserRole).toInt();
    if (myId>0)
    {
        auto myCarFormEdit = new CarForm(nullptr,false,myId);
        if (myCarFormEdit->exec())
            Update(false);
    }

}


void MainWindow::on_pushButtonSearch_clicked()
{
    QString selectedModelName = ui->comboBoxModel->currentText();
    QString selectedColor = ui->comboBoxColor->currentText();
    QString selectedBodyType = ui->comboBoxBodyType->currentText();
    QString selectedManufacturerName = ui->comboBoxManufacturerName->currentText();

    QSqlQuery myCars;
    myCars.prepare("SELECT Car.*, Model.ModelName, Model.BodyType, Manufacturer.ManufacturerName, Equipment.TransmissionType "
                   "FROM Car "
                   "JOIN Model ON Car.ModelId = Model.Id "
                   "JOIN Manufacturer ON Model.ManufacturerId = Manufacturer.Id "
                   "JOIN Equipment ON Car.EquipmentId = Equipment.Id "
                   "WHERE Model.ModelName = :modelName "
                   "AND Car.Color = :color "
                   "AND Model.BodyType = :bodyType "
                   "AND Manufacturer.ManufacturerName = :manufacturerName");



    myCars.bindValue(":modelName", selectedModelName);
    myCars.bindValue(":color", selectedColor);
    myCars.bindValue(":bodyType", selectedBodyType);
    myCars.bindValue(":manufacturerName", selectedManufacturerName);
    if (myCars.exec()) {
    ui->listWidgetCar->clear();
    while (myCars.next())
    {
        QListWidgetItem *my_Item = new QListWidgetItem(ui->listWidgetCar);
        my_Item->setData(Qt::UserRole, myCars.value(0).toInt());     // Создание элемента списка
        QString modelName = myCars.value("ModelName").toString();
        QString color = myCars.value("Color").toString();
        QString bodyType = myCars.value("BodyType").toString();
        QString manufacturerName = myCars.value("ManufacturerName").toString();


        my_Item->setText(QString("ModelName: %1 | Color: %2 | BodyType: %3 | ManufacturerName: %4")
                            .arg(modelName).arg(color).arg(bodyType).arg(manufacturerName));


        my_Item->setData(Qt::UserRole + 1, modelName);
        my_Item->setData(Qt::UserRole + 2, color);
        my_Item->setData(Qt::UserRole + 3, myCars.value("Price").toString());
        my_Item->setData(Qt::UserRole + 4, myCars.value("TransmissionType").toString());


    }
    QListWidgetItem *selectedItem = ui->listWidgetCar->currentItem();
    if (selectedItem)
    {
        GetCar(selectedItem);
    }

    }
}

void MainWindow::on_pushButtonShowAll_clicked()
{
  Update(false);
}
void MainWindow::ShowCongratulationsDialog()
{
  CongratulationsDialog dialog;
  dialog.exec();
}
void MainWindow::on_Purchase_clicked()
{
  QListWidgetItem* selectedItem = ui->listWidgetCar->currentItem();
  if (selectedItem)
  {
    QString ModelName = selectedItem->data(Qt::UserRole + 1).toString();
    QString Color = selectedItem->data(Qt::UserRole + 2).toString();
    QString Price = selectedItem->data(Qt::UserRole + 3).toString();
    QString TransmissionType = selectedItem->data(Qt::UserRole + 4).toString();

    auto myDialogPurchase = new DialogPurchaseCar(this,db);
    myDialogPurchase->setCarInformation(ModelName,Color,Price,TransmissionType);
    connect(myDialogPurchase, &DialogPurchaseCar::CarPurchased, this,  &MainWindow::RemovePurchasedCar);
    connect(myDialogPurchase, &DialogPurchaseCar::PurchaseConfirmed, this, &MainWindow::ShowCongratulationsDialog);
    connect(myDialogPurchase, &DialogPurchaseCar::PurchaseConfirmed, this, &MainWindow::UpdateComboBoxes);

    myDialogPurchase->exec();

  }

}
void MainWindow::RemovePurchasedCar()
{
  QListWidgetItem* selectedItem = ui->listWidgetCar->currentItem();
  if (selectedItem)
  {
    int carId = selectedItem->data(Qt::UserRole).toInt();
    delete ui->listWidgetCar->takeItem(ui->listWidgetCar->row(selectedItem));
    QSqlQuery Dataquery;
    Dataquery.prepare("UPDATE Car SET DateOfSale = CURRENT_TIMESTAMP WHERE Id = :carId");
    Dataquery.bindValue(":carId", carId);
    if (!Dataquery.exec())
    {
    }
  }
  Update(true);
}

void MainWindow::on_ApplyButton_clicked()
{
  Update(true);
}


void MainWindow::on_ReceiveEarnings_clicked()
{
  ui->listWidgetCar->clear();
  QString StartDateString = ui->StartDateLineEdit->text();
  QString EndDateString = ui->EndDateLineEdit->text();
  QDate StartDate = QDate::fromString(StartDateString, "yyyy-MM-dd");
  QDate EndDate = QDate::fromString(EndDateString, "yyyy-MM-dd");
  QSqlQuery TotalEarningsQuery;
  TotalEarningsQuery.prepare("SELECT SUM(Price) AS TotalIncome FROM Car WHERE DateOfSale BETWEEN :startDate AND :endDate");
  TotalEarningsQuery.bindValue(":startDate", StartDateString);
  TotalEarningsQuery.bindValue(":endDate", EndDateString);
  TotalEarningsQuery.exec();
  if (TotalEarningsQuery.next()) {
    double TotalEarnings = TotalEarningsQuery.value("TotalIncome").toDouble();
    QList<QListWidgetItem*> ExistingItems = ui->listWidgetCar->findItems("Total Earnings:", Qt::MatchStartsWith);
    if (ExistingItems.isEmpty()) {
    QListWidgetItem *TotalEarningsItem = new QListWidgetItem(ui->listWidgetCar);
    QString totalEarningsText = "Total Earnings: " + QString::number(TotalEarnings) + " $";
    TotalEarningsItem->setText(totalEarningsText);
    ui->listWidgetCar->addItem(TotalEarningsItem);
  }
}
}


void MainWindow::on_SaleColorCar_clicked()
{
QString SelectedColor = ui->comboBoxColor->currentText();
QSqlQuery ColorSalesQuery;
ColorSalesQuery.prepare("SELECT COUNT(*) AS SalesCount FROM Car WHERE Color = :color AND DateOfSale IS NOT NULL");
ColorSalesQuery.bindValue(":color", SelectedColor);
ColorSalesQuery.exec();

if (ColorSalesQuery.next())
{
  int salesCount = ColorSalesQuery.value("SalesCount").toInt();

  ui->listWidgetCar->clear();

  QListWidgetItem *item = new QListWidgetItem();
  item->setText("Number of cars sold with selected color " + SelectedColor + ": " + QString::number(salesCount));

  ui->listWidgetCar->addItem(item);
}
}
void MainWindow::UpdateComboBoxes()
{
ui->comboBoxColor->clear();
ui->comboBoxModel->clear();
ui->comboBoxBodyType->clear();
ui->comboBoxManufacturerName->clear();

QSqlQueryModel* color = new QSqlQueryModel(this);
QString colorquery = "SELECT Color FROM Car "
                     "WHERE DateOfSale IS NULL";
color->setQuery(colorquery);
ui->comboBoxColor->setModel(color);
ui->comboBoxColor->setModelColumn(0);

QSqlQueryModel* model = new QSqlQueryModel(this);
QString modelquery = "SELECT ModelName FROM Model "
                     "JOIN Car ON Model.Id = Car.ModelId "
                     "WHERE Car.DateOfSale IS NULL";
model->setQuery(modelquery);
ui->comboBoxModel->setModel(model);
ui->comboBoxModel->setModelColumn(0);

QSqlQueryModel* bodytype = new QSqlQueryModel(this);
QString bodytypequery = "SELECT BodyType FROM Model "
                        "JOIN Car ON Model.Id = Car.ModelId "
                        "WHERE Car.DateOfSale IS NULL";
bodytype->setQuery(bodytypequery);
ui->comboBoxBodyType->setModel(bodytype);
ui->comboBoxBodyType->setModelColumn(0);
QSqlQueryModel* manufacturername = new QSqlQueryModel(this);
QString manufacturernamequery = "SELECT ManufacturerName FROM Manufacturer "
                                "JOIN Model ON Manufacturer.Id = Model.ManufacturerId "
                                "JOIN Car ON Model.Id = Car.ModelId "
                                "WHERE Car.DateOfSale IS NULL";
manufacturername->setQuery(manufacturernamequery);
ui->comboBoxManufacturerName->setModel(manufacturername);
ui->comboBoxManufacturerName->setModelColumn(0);}

