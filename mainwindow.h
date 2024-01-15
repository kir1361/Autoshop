
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QModelIndex>
#include <QSqlTableModel>
#include <QListWidget>
#include <QAbstractItemModel>
#include <dialogaddcar2.h>
#include <QDialog>
#include <dialogpurchasecar.h>





QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{ Q_OBJECT
    bool PrUser=false;
public:
    MainWindow(QWidget *parent, QSqlDatabase *aDB);
    ~MainWindow();
    void SetUser(bool aValue);

    QSqlRecord FindEquipment(int aId);
    QSqlRecord FindModel(int aId);
    QSqlRecord FindCar(int aId);
    void Update(bool ShowSoldCars);
public slots:
    void GetCar(QListWidgetItem*);
    void slotAddCar();

public:
    Ui::MainWindow *ui;
    QSqlQuery executeQuery(const QString& query);

    QSqlDatabase *db;

    bool isUser;
protected:
    void showEvent(QShowEvent *event);
signals:
    void signal();

private slots:
    void on_dataEntered(const QString& Id, const QString& Color, const QString& Price,const QString& Photo, const QString& ModelId, const QString& EquipmentId);
    void on_dataEntered1(const QString& Id,const QString& EngineName,const QString& EngineVolume,const QString& WheelDrive,const QString& TransmissionType,const QString& HorsePower,const QString& MaxSpeed,const QString& ModelId);
    void on_dataEntered2(const QString& Id,const QString& Manufacturer,const QString& Country);
    void on_dataEntered3(const QString& Id,const QString& ModelName,const QString& ManufacturerId,const QString& Mass,const QString& Lenght,const QString& Width,const QString& Height,const QString& Clearance,const QString& BodyType);

    void on_pbDelCar_clicked();
   void on_pbEditCar_clicked();
    void on_pushButtonSearch_clicked();
   void on_pushButtonShowAll_clicked();
    void on_Purchase_clicked();
    void RemovePurchasedCar();
    void on_ApplyButton_clicked();

    void on_ReceiveEarnings_clicked();

    void on_SaleColorCar_clicked();

public slots:
    void ShowCongratulationsDialog();
    void UpdateComboBoxes();
};

#endif // MAINWINDOW_H
