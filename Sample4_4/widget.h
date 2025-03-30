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
    void on_btnSum_clicked();

    // void on_textNum_textChanged(const QString &arg1);

    // void on_textPrice_textChanged(const QString &arg1);

    // void on_textDEC_textChanged(const QString &arg1);

    void on_textDEC_valueChanged(int arg1);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
