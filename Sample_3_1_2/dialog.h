#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "tperson.h"


class TPerson;

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE



class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    TPerson *boy;
    TPerson *girl;

private slots:
    void do_ageChanged(int value);
    void do_spinChanged(int arg1);

    void on_btnBoyInc_clicked();

    void on_btnGirlInc_clicked();

    void on_btnClear_clicked();

    void on_btnClassInfo_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
