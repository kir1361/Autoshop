#ifndef CONGRATULATIONSDIALOG_H
#define CONGRATULATIONSDIALOG_H

#include <QDialog>

namespace Ui {
class CongratulationsDialog;
}

class CongratulationsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CongratulationsDialog(QWidget *parent = nullptr);
    ~CongratulationsDialog();

private:
    Ui::CongratulationsDialog *ui;
};

#endif // CONGRATULATIONSDIALOG_H
