/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonShowAll;
    QComboBox *comboBoxManufacturerName;
    QPushButton *Purchase;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDelCar;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *labelModel;
    QComboBox *comboBoxColor;
    QLineEdit *EndDateLineEdit;
    QComboBox *comboBoxModel;
    QLineEdit *StartDateLineEdit;
    QLabel *labelend;
    QPushButton *ApplyButton;
    QLabel *labelColor;
    QLabel *labelstart;
    QComboBox *comboBoxBodyType;
    QLabel *labelColorBody;
    QPushButton *ReceiveEarnings;
    QPushButton *SaleColorCar;
    QPushButton *pbAddCar;
    QPushButton *pushButtonSearch;
    QSpacerItem *verticalSpacer;
    QPushButton *pbEditCar;
    QListWidget *listWidgetCar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(838, 505);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButtonShowAll = new QPushButton(centralwidget);
        pushButtonShowAll->setObjectName("pushButtonShowAll");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonShowAll->sizePolicy().hasHeightForWidth());
        pushButtonShowAll->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonShowAll, 4, 1, 1, 7);

        comboBoxManufacturerName = new QComboBox(centralwidget);
        comboBoxManufacturerName->setObjectName("comboBoxManufacturerName");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxManufacturerName->sizePolicy().hasHeightForWidth());
        comboBoxManufacturerName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxManufacturerName, 0, 1, 1, 1);

        Purchase = new QPushButton(centralwidget);
        Purchase->setObjectName("Purchase");

        gridLayout->addWidget(Purchase, 5, 1, 1, 7);

        horizontalSpacer = new QSpacerItem(75, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        pbDelCar = new QPushButton(centralwidget);
        pbDelCar->setObjectName("pbDelCar");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbDelCar->sizePolicy().hasHeightForWidth());
        pbDelCar->setSizePolicy(sizePolicy2);
        pbDelCar->setMaximumSize(QSize(25, 25));
        QFont font;
        font.setPointSize(22);
        pbDelCar->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/free-icon-rubbish-bin-1483063.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDelCar->setIcon(icon);

        gridLayout->addWidget(pbDelCar, 0, 4, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        labelModel = new QLabel(groupBox);
        labelModel->setObjectName("labelModel");

        gridLayout_2->addWidget(labelModel, 0, 0, 1, 2);

        comboBoxColor = new QComboBox(groupBox);
        comboBoxColor->setObjectName("comboBoxColor");

        gridLayout_2->addWidget(comboBoxColor, 3, 0, 1, 2);

        EndDateLineEdit = new QLineEdit(groupBox);
        EndDateLineEdit->setObjectName("EndDateLineEdit");

        gridLayout_2->addWidget(EndDateLineEdit, 9, 0, 1, 1);

        comboBoxModel = new QComboBox(groupBox);
        comboBoxModel->setObjectName("comboBoxModel");

        gridLayout_2->addWidget(comboBoxModel, 1, 0, 1, 2);

        StartDateLineEdit = new QLineEdit(groupBox);
        StartDateLineEdit->setObjectName("StartDateLineEdit");

        gridLayout_2->addWidget(StartDateLineEdit, 7, 0, 1, 1);

        labelend = new QLabel(groupBox);
        labelend->setObjectName("labelend");

        gridLayout_2->addWidget(labelend, 8, 0, 1, 1);

        ApplyButton = new QPushButton(groupBox);
        ApplyButton->setObjectName("ApplyButton");

        gridLayout_2->addWidget(ApplyButton, 10, 0, 1, 2);

        labelColor = new QLabel(groupBox);
        labelColor->setObjectName("labelColor");

        gridLayout_2->addWidget(labelColor, 2, 0, 1, 2);

        labelstart = new QLabel(groupBox);
        labelstart->setObjectName("labelstart");

        gridLayout_2->addWidget(labelstart, 6, 0, 1, 1);

        comboBoxBodyType = new QComboBox(groupBox);
        comboBoxBodyType->setObjectName("comboBoxBodyType");

        gridLayout_2->addWidget(comboBoxBodyType, 5, 0, 1, 2);

        labelColorBody = new QLabel(groupBox);
        labelColorBody->setObjectName("labelColorBody");

        gridLayout_2->addWidget(labelColorBody, 4, 0, 1, 2);

        ReceiveEarnings = new QPushButton(groupBox);
        ReceiveEarnings->setObjectName("ReceiveEarnings");

        gridLayout_2->addWidget(ReceiveEarnings, 11, 0, 1, 2);

        SaleColorCar = new QPushButton(groupBox);
        SaleColorCar->setObjectName("SaleColorCar");

        gridLayout_2->addWidget(SaleColorCar, 12, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 3, 1);

        pbAddCar = new QPushButton(centralwidget);
        pbAddCar->setObjectName("pbAddCar");
        sizePolicy2.setHeightForWidth(pbAddCar->sizePolicy().hasHeightForWidth());
        pbAddCar->setSizePolicy(sizePolicy2);
        pbAddCar->setMaximumSize(QSize(25, 25));
        pbAddCar->setFont(font);

        gridLayout->addWidget(pbAddCar, 0, 3, 1, 1);

        pushButtonSearch = new QPushButton(centralwidget);
        pushButtonSearch->setObjectName("pushButtonSearch");
        sizePolicy2.setHeightForWidth(pushButtonSearch->sizePolicy().hasHeightForWidth());
        pushButtonSearch->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/free-icon-loupe-751463.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon1);

        gridLayout->addWidget(pushButtonSearch, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        pbEditCar = new QPushButton(centralwidget);
        pbEditCar->setObjectName("pbEditCar");
        sizePolicy2.setHeightForWidth(pbEditCar->sizePolicy().hasHeightForWidth());
        pbEditCar->setSizePolicy(sizePolicy2);
        pbEditCar->setMaximumSize(QSize(25, 25));
        pbEditCar->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/free-icon-pencil-1046295.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbEditCar->setIcon(icon2);

        gridLayout->addWidget(pbEditCar, 0, 5, 1, 1);

        listWidgetCar = new QListWidget(centralwidget);
        listWidgetCar->setObjectName("listWidgetCar");
        listWidgetCar->setFont(font);
        listWidgetCar->setWordWrap(true);

        gridLayout->addWidget(listWidgetCar, 1, 1, 3, 7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 838, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonShowAll->setText(QCoreApplication::translate("MainWindow", "Show All", nullptr));
        Purchase->setText(QCoreApplication::translate("MainWindow", "Purchase", nullptr));
        pbDelCar->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        labelModel->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        labelend->setText(QCoreApplication::translate("MainWindow", "End(yyyy-mm-dd)", nullptr));
        ApplyButton->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        labelColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        labelstart->setText(QCoreApplication::translate("MainWindow", "Start(yyyy-mm-dd)", nullptr));
        labelColorBody->setText(QCoreApplication::translate("MainWindow", "BodyType", nullptr));
        ReceiveEarnings->setText(QCoreApplication::translate("MainWindow", "Receive earnings for period", nullptr));
        SaleColorCar->setText(QCoreApplication::translate("MainWindow", "Number of cars sold with selected color", nullptr));
        pbAddCar->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonSearch->setText(QString());
        pbEditCar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
