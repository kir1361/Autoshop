/********************************************************************************
** Form generated from reading UI file 'dialogpurchasecar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPURCHASECAR_H
#define UI_DIALOGPURCHASECAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPurchaseCar
{
public:
    QPushButton *APPLY;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *ModelName;
    QLabel *label_3;
    QLineEdit *Price;
    QLabel *label_11;
    QLineEdit *Color;
    QLabel *label_12;
    QLineEdit *TransmissionType;
    QPushButton *ConfirmPurchase;

    void setupUi(QDialog *DialogPurchaseCar)
    {
        if (DialogPurchaseCar->objectName().isEmpty())
            DialogPurchaseCar->setObjectName("DialogPurchaseCar");
        DialogPurchaseCar->resize(417, 308);
        APPLY = new QPushButton(DialogPurchaseCar);
        APPLY->setObjectName("APPLY");
        APPLY->setGeometry(QRect(160, 340, 75, 24));
        layoutWidget_2 = new QWidget(DialogPurchaseCar);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setEnabled(false);
        layoutWidget_2->setGeometry(QRect(70, 70, 233, 108));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        ModelName = new QLineEdit(layoutWidget_2);
        ModelName->setObjectName("ModelName");
        ModelName->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, ModelName);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        Price = new QLineEdit(layoutWidget_2);
        Price->setObjectName("Price");
        Price->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, Price);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName("label_11");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        Color = new QLineEdit(layoutWidget_2);
        Color->setObjectName("Color");
        Color->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, Color);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName("label_12");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_12);

        TransmissionType = new QLineEdit(layoutWidget_2);
        TransmissionType->setObjectName("TransmissionType");
        TransmissionType->setEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, TransmissionType);

        ConfirmPurchase = new QPushButton(DialogPurchaseCar);
        ConfirmPurchase->setObjectName("ConfirmPurchase");
        ConfirmPurchase->setGeometry(QRect(140, 260, 111, 24));

        retranslateUi(DialogPurchaseCar);

        QMetaObject::connectSlotsByName(DialogPurchaseCar);
    } // setupUi

    void retranslateUi(QDialog *DialogPurchaseCar)
    {
        DialogPurchaseCar->setWindowTitle(QCoreApplication::translate("DialogPurchaseCar", "Dialog", nullptr));
        APPLY->setText(QCoreApplication::translate("DialogPurchaseCar", "APPLY", nullptr));
        label_2->setText(QCoreApplication::translate("DialogPurchaseCar", "ModelName", nullptr));
        label_3->setText(QCoreApplication::translate("DialogPurchaseCar", "Price", nullptr));
        label_11->setText(QCoreApplication::translate("DialogPurchaseCar", "Color", nullptr));
        label_12->setText(QCoreApplication::translate("DialogPurchaseCar", "TransmissionType", nullptr));
        ConfirmPurchase->setText(QCoreApplication::translate("DialogPurchaseCar", "Confirm Purchase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPurchaseCar: public Ui_DialogPurchaseCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPURCHASECAR_H
