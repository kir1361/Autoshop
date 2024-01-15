#ifndef LOGODIALOG_H
#define LOGODIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QListWidget>
#include <mainwindow.h>


namespace Ui {
class LogoDialog;
}

class LogoDialog : public QDialog
{ Q_OBJECT
public:
    explicit LogoDialog(QWidget *parent = nullptr, QSqlDatabase *aDB=nullptr);
    ~LogoDialog();
    bool isUser() const;
public:
    Ui::LogoDialog *ui;
    QSqlTableModel *users=nullptr;
private slots:
    void on_buttonBox_accepted();
};

#endif // LOGODIALOG_H
