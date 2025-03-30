#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QTimer;
class QElapsedTimer;

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

private:
    Ui::Widget *ui;

private:
    QTimer* m_timer;
    QElapsedTimer* m_counter;

private slots:
    void do_timer_timeout();
    void on_btnStart_clicked();
    void on_btnPause_clicked();
    void on_btnCreate_clicked();
};
#endif // WIDGET_H
