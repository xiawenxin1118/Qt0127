#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

class QCheckBox;
class QRadioButton;
class QPlainTextEdit;
class QPushButton;

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;

    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;

    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnClean;

    QPlainTextEdit *txtEdit;

private slots:
    void do_chkBoxUnder(bool checked);
    void do_chkBoxItalic(bool checked);
    void do_chkBoxBold(bool checked);

    void do_setFontColor();


public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
