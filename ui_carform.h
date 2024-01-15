/********************************************************************************
** Form generated from reading UI file 'carform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARFORM_H
#define UI_CARFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *Color;
    QLineEdit *Country;
    QLabel *label_4;
    QLabel *label_13;
    QLineEdit *Price;
    QLineEdit *EngineName;
    QLabel *label_8;
    QLabel *label_14;
    QLineEdit *ModelName;
    QLineEdit *EngineVolume;
    QLabel *label_5;
    QLabel *label_18;
    QLineEdit *Mass;
    QLineEdit *WheelDrive;
    QLabel *label_3;
    QLabel *label_17;
    QLineEdit *Lenght;
    QLineEdit *TransmissionType;
    QLabel *label_7;
    QLabel *label_16;
    QLineEdit *Width;
    QLineEdit *HorsePower;
    QLabel *label_6;
    QLabel *label_15;
    QLineEdit *Height;
    QLineEdit *MaxSpeed;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *Clearance;
    QLineEdit *BodyType;
    QLabel *label_12;
    QLineEdit *ManufacturerName;
    QPushButton *ApplyEdit;
    QPushButton *Ok;

    void setupUi(QWidget *CarForm)
    {
        if (CarForm->objectName().isEmpty())
            CarForm->setObjectName("CarForm");
        CarForm->resize(524, 563);
        CarForm->setAutoFillBackground(true);
        gridLayout_2 = new QGridLayout(CarForm);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(CarForm);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        Color = new QLineEdit(groupBox);
        Color->setObjectName("Color");

        gridLayout->addWidget(Color, 1, 0, 1, 1);

        Country = new QLineEdit(groupBox);
        Country->setObjectName("Country");

        gridLayout->addWidget(Country, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        Price = new QLineEdit(groupBox);
        Price->setObjectName("Price");

        gridLayout->addWidget(Price, 3, 0, 1, 1);

        EngineName = new QLineEdit(groupBox);
        EngineName->setObjectName("EngineName");

        gridLayout->addWidget(EngineName, 3, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 4, 1, 1, 1);

        ModelName = new QLineEdit(groupBox);
        ModelName->setObjectName("ModelName");

        gridLayout->addWidget(ModelName, 5, 0, 1, 1);

        EngineVolume = new QLineEdit(groupBox);
        EngineVolume->setObjectName("EngineVolume");

        gridLayout->addWidget(EngineVolume, 5, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 6, 1, 1, 1);

        Mass = new QLineEdit(groupBox);
        Mass->setObjectName("Mass");

        gridLayout->addWidget(Mass, 7, 0, 1, 1);

        WheelDrive = new QLineEdit(groupBox);
        WheelDrive->setObjectName("WheelDrive");

        gridLayout->addWidget(WheelDrive, 7, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 8, 1, 1, 1);

        Lenght = new QLineEdit(groupBox);
        Lenght->setObjectName("Lenght");

        gridLayout->addWidget(Lenght, 9, 0, 1, 1);

        TransmissionType = new QLineEdit(groupBox);
        TransmissionType->setObjectName("TransmissionType");

        gridLayout->addWidget(TransmissionType, 9, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 10, 1, 1, 1);

        Width = new QLineEdit(groupBox);
        Width->setObjectName("Width");

        gridLayout->addWidget(Width, 11, 0, 1, 1);

        HorsePower = new QLineEdit(groupBox);
        HorsePower->setObjectName("HorsePower");

        gridLayout->addWidget(HorsePower, 11, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 12, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 12, 1, 1, 1);

        Height = new QLineEdit(groupBox);
        Height->setObjectName("Height");

        gridLayout->addWidget(Height, 13, 0, 1, 1);

        MaxSpeed = new QLineEdit(groupBox);
        MaxSpeed->setObjectName("MaxSpeed");

        gridLayout->addWidget(MaxSpeed, 13, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 14, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 14, 1, 1, 1);

        Clearance = new QLineEdit(groupBox);
        Clearance->setObjectName("Clearance");

        gridLayout->addWidget(Clearance, 15, 0, 1, 1);

        BodyType = new QLineEdit(groupBox);
        BodyType->setObjectName("BodyType");

        gridLayout->addWidget(BodyType, 15, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 16, 0, 1, 1);

        ManufacturerName = new QLineEdit(groupBox);
        ManufacturerName->setObjectName("ManufacturerName");

        gridLayout->addWidget(ManufacturerName, 17, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        ApplyEdit = new QPushButton(CarForm);
        ApplyEdit->setObjectName("ApplyEdit");

        gridLayout_2->addWidget(ApplyEdit, 1, 1, 1, 1);

        Ok = new QPushButton(CarForm);
        Ok->setObjectName("Ok");

        gridLayout_2->addWidget(Ok, 1, 0, 1, 1);


        retranslateUi(CarForm);
        QObject::connect(Ok, &QPushButton::clicked, CarForm, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(CarForm);
    } // setupUi

    void retranslateUi(QWidget *CarForm)
    {
        CarForm->setWindowTitle(QCoreApplication::translate("CarForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CarForm", "\320\241haracteristics", nullptr));
        label_2->setText(QCoreApplication::translate("CarForm", "Color", nullptr));
        label_9->setText(QCoreApplication::translate("CarForm", "Country", nullptr));
        label_4->setText(QCoreApplication::translate("CarForm", "Price", nullptr));
        label_13->setText(QCoreApplication::translate("CarForm", "EngineName", nullptr));
        label_8->setText(QCoreApplication::translate("CarForm", "ModelName", nullptr));
        label_14->setText(QCoreApplication::translate("CarForm", "EngineVolume", nullptr));
        label_5->setText(QCoreApplication::translate("CarForm", "Mass", nullptr));
        label_18->setText(QCoreApplication::translate("CarForm", "WheelDrive", nullptr));
        label_3->setText(QCoreApplication::translate("CarForm", "Lenght", nullptr));
        label_17->setText(QCoreApplication::translate("CarForm", "TransmissionType", nullptr));
        label_7->setText(QCoreApplication::translate("CarForm", "Width", nullptr));
        label_16->setText(QCoreApplication::translate("CarForm", "HorsePower", nullptr));
        label_6->setText(QCoreApplication::translate("CarForm", "Height", nullptr));
        label_15->setText(QCoreApplication::translate("CarForm", "MaxSpeed", nullptr));
        label_11->setText(QCoreApplication::translate("CarForm", "Clearance", nullptr));
        label_10->setText(QCoreApplication::translate("CarForm", "BodyType", nullptr));
        label_12->setText(QCoreApplication::translate("CarForm", "ManufacturerName", nullptr));
        ApplyEdit->setText(QCoreApplication::translate("CarForm", "Apply", nullptr));
        Ok->setText(QCoreApplication::translate("CarForm", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarForm: public Ui_CarForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARFORM_H
