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
    void on_btnClearUnder_clicked();

    void on_btnInitLeft_clicked();


    void on_chkEditable_clicked(bool checked);

    void on_btnClearLeft_clicked();

    void on_btnInitRight_clicked();

    void on_comboLeft_currentTextChanged(const QString &arg1);

    void on_comboRight_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
