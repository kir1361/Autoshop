#ifndef CARFORM_H
#define CARFORM_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class CarForm;
}

class CarForm : public QDialog
{
    Q_OBJECT
    int MyId;
    QSqlRecord myRecord;
    QModelIndex index;
public:
    explicit CarForm(QWidget *, bool, int id);
    ~CarForm();//private:
    Ui::CarForm *ui;

    // QWidget interface
//protected:
    void showEvent(QShowEvent *event);
private slots:
    void on_ApplyEdit_clicked();
};

#endif // CARFORM_H
