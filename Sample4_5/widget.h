#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnLeft_clicked();

    void on_btnMid_clicked();

    void on_btnRight_clicked();

    void on_btnBold_clicked(bool checked);

    void on_btnItalic_clicked(bool checked);

    void on_btnUnderLine_clicked(bool checked);

    void on_btnBlack_clicked();

    void on_btnReadonly_clicked(bool checked);

    void on_btnEnabled_clicked(bool checked);

    void on_btnClearButtonEnabled_clicked(bool checked);

    void on_btnRed_clicked();

    void on_btnBlue_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
