/********************************************************************************
** Form generated from reading UI file 'dialogaddcar2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDCAR2_H
#define UI_DIALOGADDCAR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddCar2
{
public:
    QPushButton *APPLY;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Height;
    QLabel *label_20;
    QLineEdit *Country;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_22;
    QLabel *label_17;
    QLineEdit *Mass;
    QLineEdit *Lenght;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_21;
    QLineEdit *ManufacturerName;
    QLineEdit *ManufacturerId;
    QLineEdit *Clearance;
    QLabel *label_18;
    QLabel *label_16;
    QLineEdit *Width;
    QLabel *label_19;
    QLineEdit *ModelName;
    QLineEdit *Photo;
    QLineEdit *BodyType;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *WheelDrive;
    QLabel *label_7;
    QLineEdit *ModelId;
    QLineEdit *EngineName;
    QLineEdit *HorsePower;
    QLabel *label;
    QLabel *label_10;
    QLineEdit *Color;
    QLineEdit *Id;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *MaxSpeed;
    QLabel *label_6;
    QLineEdit *EquipmentId;
    QLineEdit *EngineVolume;
    QLabel *label_8;
    QLineEdit *Price;
    QLabel *label_11;
    QLineEdit *TranssmisionType;

    void setupUi(QDialog *DialogAddCar2)
    {
        if (DialogAddCar2->objectName().isEmpty())
            DialogAddCar2->setObjectName("DialogAddCar2");
        DialogAddCar2->resize(815, 400);
        APPLY = new QPushButton(DialogAddCar2);
        APPLY->setObjectName("APPLY");
        APPLY->setGeometry(QRect(330, 340, 75, 24));
        layoutWidget = new QWidget(DialogAddCar2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 348, 304));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Height = new QLineEdit(layoutWidget);
        Height->setObjectName("Height");

        gridLayout->addWidget(Height, 10, 4, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName("label_20");

        gridLayout->addWidget(label_20, 11, 3, 1, 1);

        Country = new QLineEdit(layoutWidget);
        Country->setObjectName("Country");

        gridLayout->addWidget(Country, 2, 4, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 3, 3, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 4, 3, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName("label_22");

        gridLayout->addWidget(label_22, 13, 3, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 7, 3, 1, 1);

        Mass = new QLineEdit(layoutWidget);
        Mass->setObjectName("Mass");

        gridLayout->addWidget(Mass, 6, 4, 1, 1);

        Lenght = new QLineEdit(layoutWidget);
        Lenght->setObjectName("Lenght");

        gridLayout->addWidget(Lenght, 7, 4, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 0, 3, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 2, 3, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 12, 3, 1, 1);

        ManufacturerName = new QLineEdit(layoutWidget);
        ManufacturerName->setObjectName("ManufacturerName");

        gridLayout->addWidget(ManufacturerName, 0, 4, 1, 1);

        ManufacturerId = new QLineEdit(layoutWidget);
        ManufacturerId->setObjectName("ManufacturerId");

        gridLayout->addWidget(ManufacturerId, 4, 4, 1, 1);

        Clearance = new QLineEdit(layoutWidget);
        Clearance->setObjectName("Clearance");

        gridLayout->addWidget(Clearance, 11, 4, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 8, 3, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 6, 3, 1, 1);

        Width = new QLineEdit(layoutWidget);
        Width->setObjectName("Width");

        gridLayout->addWidget(Width, 8, 4, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");

        gridLayout->addWidget(label_19, 10, 3, 1, 1);

        ModelName = new QLineEdit(layoutWidget);
        ModelName->setObjectName("ModelName");

        gridLayout->addWidget(ModelName, 3, 4, 1, 1);

        Photo = new QLineEdit(layoutWidget);
        Photo->setObjectName("Photo");

        gridLayout->addWidget(Photo, 13, 4, 1, 1);

        BodyType = new QLineEdit(layoutWidget);
        BodyType->setObjectName("BodyType");

        gridLayout->addWidget(BodyType, 12, 4, 1, 1);

        layoutWidget1 = new QWidget(DialogAddCar2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(350, 0, 281, 304));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        WheelDrive = new QLineEdit(layoutWidget1);
        WheelDrive->setObjectName("WheelDrive");

        gridLayout_2->addWidget(WheelDrive, 7, 1, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        ModelId = new QLineEdit(layoutWidget1);
        ModelId->setObjectName("ModelId");

        gridLayout_2->addWidget(ModelId, 3, 1, 1, 1);

        EngineName = new QLineEdit(layoutWidget1);
        EngineName->setObjectName("EngineName");

        gridLayout_2->addWidget(EngineName, 5, 1, 1, 1);

        HorsePower = new QLineEdit(layoutWidget1);
        HorsePower->setObjectName("HorsePower");

        gridLayout_2->addWidget(HorsePower, 9, 1, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 10, 0, 1, 1);

        Color = new QLineEdit(layoutWidget1);
        Color->setObjectName("Color");

        gridLayout_2->addWidget(Color, 1, 1, 1, 1);

        Id = new QLineEdit(layoutWidget1);
        Id->setObjectName("Id");

        gridLayout_2->addWidget(Id, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 9, 0, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        MaxSpeed = new QLineEdit(layoutWidget1);
        MaxSpeed->setObjectName("MaxSpeed");

        gridLayout_2->addWidget(MaxSpeed, 10, 1, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        EquipmentId = new QLineEdit(layoutWidget1);
        EquipmentId->setObjectName("EquipmentId");

        gridLayout_2->addWidget(EquipmentId, 4, 1, 1, 1);

        EngineVolume = new QLineEdit(layoutWidget1);
        EngineVolume->setObjectName("EngineVolume");

        gridLayout_2->addWidget(EngineVolume, 6, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        Price = new QLineEdit(layoutWidget1);
        Price->setObjectName("Price");

        gridLayout_2->addWidget(Price, 2, 1, 1, 1);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 8, 0, 1, 1);

        TranssmisionType = new QLineEdit(layoutWidget1);
        TranssmisionType->setObjectName("TranssmisionType");

        gridLayout_2->addWidget(TranssmisionType, 8, 1, 1, 1);


        retranslateUi(DialogAddCar2);
        QObject::connect(APPLY, &QPushButton::clicked, DialogAddCar2, qOverload<>(&QDialog::exec));

        QMetaObject::connectSlotsByName(DialogAddCar2);
    } // setupUi

    void retranslateUi(QDialog *DialogAddCar2)
    {
        DialogAddCar2->setWindowTitle(QCoreApplication::translate("DialogAddCar2", "Dialog", nullptr));
        APPLY->setText(QCoreApplication::translate("DialogAddCar2", "APPLY", nullptr));
        label_20->setText(QCoreApplication::translate("DialogAddCar2", "Clearance", nullptr));
        label_14->setText(QCoreApplication::translate("DialogAddCar2", "ModelName", nullptr));
        label_15->setText(QCoreApplication::translate("DialogAddCar2", "ManufacturerId", nullptr));
        label_22->setText(QCoreApplication::translate("DialogAddCar2", "Photo", nullptr));
        label_17->setText(QCoreApplication::translate("DialogAddCar2", "Lenght", nullptr));
        label_12->setText(QCoreApplication::translate("DialogAddCar2", "ManufacturerName", nullptr));
        label_13->setText(QCoreApplication::translate("DialogAddCar2", "Country", nullptr));
        label_21->setText(QCoreApplication::translate("DialogAddCar2", "BodyType", nullptr));
        label_18->setText(QCoreApplication::translate("DialogAddCar2", "Width", nullptr));
        label_16->setText(QCoreApplication::translate("DialogAddCar2", "Mass", nullptr));
        label_19->setText(QCoreApplication::translate("DialogAddCar2", "Height", nullptr));
        label_4->setText(QCoreApplication::translate("DialogAddCar2", "ModelId", nullptr));
        label_5->setText(QCoreApplication::translate("DialogAddCar2", "EquipmentId", nullptr));
        label_2->setText(QCoreApplication::translate("DialogAddCar2", "Color", nullptr));
        label_7->setText(QCoreApplication::translate("DialogAddCar2", "EngineVolume", nullptr));
        label->setText(QCoreApplication::translate("DialogAddCar2", "Id", nullptr));
        label_10->setText(QCoreApplication::translate("DialogAddCar2", "MaxSpeed", nullptr));
        label_9->setText(QCoreApplication::translate("DialogAddCar2", "HorsePower", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAddCar2", "Price", nullptr));
        label_6->setText(QCoreApplication::translate("DialogAddCar2", "EngineName", nullptr));
        label_8->setText(QCoreApplication::translate("DialogAddCar2", "WheelDrive", nullptr));
        label_11->setText(QCoreApplication::translate("DialogAddCar2", "TranssmisionType", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddCar2: public Ui_DialogAddCar2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDCAR2_H
