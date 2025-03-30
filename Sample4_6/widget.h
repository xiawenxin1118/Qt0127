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
    void do_valueChanged(int value);

    void do_valueChanged2Others(int value);

    void on_checkTextVisible_clicked(bool checked);

    void on_checkInvertedAppearence_clicked(bool checked);

    void on_radioPercent_clicked();

    void on_radioCurrent_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
