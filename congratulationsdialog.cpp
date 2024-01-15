#include "congratulationsdialog.h"
#include "ui_congratulationsdialog.h"

CongratulationsDialog::CongratulationsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CongratulationsDialog)
{
    ui->setupUi(this);
}

CongratulationsDialog::~CongratulationsDialog()
{
    delete ui;
}
