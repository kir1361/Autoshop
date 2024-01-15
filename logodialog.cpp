#include "logodialog.h"
#include "ui_logodialog.h"
#include <QSqlTableModel>
#include <QtSql>

class QListWidget;

LogoDialog::LogoDialog(QWidget *parent, QSqlDatabase *aDB) :
    QDialog(parent)
    ,  ui(new Ui::LogoDialog)
{
    ui->setupUi(this);
    users = new QSqlTableModel(this,*aDB);
    users->setTable("User");
    users->select();
}

LogoDialog::~LogoDialog()
{
    delete ui;
}
bool LogoDialog::isUser() const
{
    return ui->pb1->isChecked();
}

void LogoDialog::on_buttonBox_accepted()
{
    int index = -1;
    if(ui->pb1->isChecked())index=0; else
        if(ui->pb2->isChecked())index=1;
    if (index>=0)
    {
        if (users->record(index).value(4).toString()==ui->lineEdit->text())
            accept();
        return;
    }
    reject();
}

