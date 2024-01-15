/********************************************************************************
** Form generated from reading UI file 'logodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGODIALOG_H
#define UI_LOGODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogoDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pb1;
    QPushButton *pb2;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *LogoDialog)
    {
        if (LogoDialog->objectName().isEmpty())
            LogoDialog->setObjectName("LogoDialog");
        LogoDialog->resize(400, 391);
        buttonBox = new QDialogButtonBox(LogoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 240, 156, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pb1 = new QPushButton(LogoDialog);
        pb1->setObjectName("pb1");
        pb1->setGeometry(QRect(110, 80, 75, 24));
        pb1->setCheckable(true);
        pb1->setChecked(true);
        pb1->setAutoExclusive(true);
        pb2 = new QPushButton(LogoDialog);
        pb2->setObjectName("pb2");
        pb2->setGeometry(QRect(220, 80, 75, 24));
        pb2->setCheckable(true);
        pb2->setAutoExclusive(true);
        lineEdit = new QLineEdit(LogoDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(132, 150, 131, 22));
        label = new QLabel(LogoDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 130, 49, 16));

        retranslateUi(LogoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogoDialog);
    } // setupUi

    void retranslateUi(QDialog *LogoDialog)
    {
        LogoDialog->setWindowTitle(QCoreApplication::translate("LogoDialog", "Dialog", nullptr));
        pb1->setText(QCoreApplication::translate("LogoDialog", "User", nullptr));
        pb2->setText(QCoreApplication::translate("LogoDialog", "Admin", nullptr));
        label->setText(QCoreApplication::translate("LogoDialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogoDialog: public Ui_LogoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGODIALOG_H
