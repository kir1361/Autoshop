#include "mainwindow.h"
#include <QApplication>
#include "logodialog.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-TBA1ODS;DATABASE=master;");
    if (db.open())
    {
        LogoDialog dialog(nullptr,&db);
        if (dialog.exec())
        {
            MainWindow w(nullptr,&db);
            w.SetUser(dialog.isUser());
            w.show();
            return a.exec();
        }
    }
    return 0;
}
