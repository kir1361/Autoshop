/********************************************************************************
** Form generated from reading UI file 'congratulationsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONGRATULATIONSDIALOG_H
#define UI_CONGRATULATIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CongratulationsDialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *OKCongratulationsButton;

    void setupUi(QDialog *CongratulationsDialog)
    {
        if (CongratulationsDialog->objectName().isEmpty())
            CongratulationsDialog->setObjectName("CongratulationsDialog");
        CongratulationsDialog->resize(400, 300);
        textBrowser = new QTextBrowser(CongratulationsDialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(70, 20, 256, 192));
        OKCongratulationsButton = new QPushButton(CongratulationsDialog);
        OKCongratulationsButton->setObjectName("OKCongratulationsButton");
        OKCongratulationsButton->setGeometry(QRect(170, 240, 75, 24));

        retranslateUi(CongratulationsDialog);
        QObject::connect(OKCongratulationsButton, &QPushButton::clicked, CongratulationsDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(CongratulationsDialog);
    } // setupUi

    void retranslateUi(QDialog *CongratulationsDialog)
    {
        CongratulationsDialog->setWindowTitle(QCoreApplication::translate("CongratulationsDialog", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("CongratulationsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"tw-target-text\"></a><span style=\" font-family:'inherit'; font-size:18pt; font-weight:700; color:#ff0000; background-color:transparent;\">C</span><span style=\" font-family:'inherit'; font-size:18pt; font-weight:700; color:#ff0000; background-color:transparent;\">ongratulations on your purchase!</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; "
                        "margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"tw-target-text\"></a><span style=\" font-family:'inherit'; font-size:18pt; font-weight:700; color:#ff0000; background-color:transparent;\">Y</span><span style=\" font-family:'inherit'; font-size:18pt; font-weight:700; color:#ff0000; background-color:transparent;\">ou will be contacted shortly to confirm delivery details</span></p></body></html>", nullptr));
        OKCongratulationsButton->setText(QCoreApplication::translate("CongratulationsDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CongratulationsDialog: public Ui_CongratulationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONGRATULATIONSDIALOG_H
