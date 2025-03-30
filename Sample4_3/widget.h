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
    void on_btnQdebug_clicked();

    void on_btnsum_clicked();

    void on_btnDEC2Others_clicked();

    void on_btnBIN2Others_clicked();

    void on_btnOCT2Others_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
