#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actListInit_triggered();

    void on_actListClear_triggered();

    void on_actListInsert_triggered();

    void on_actListAdd_triggered();

    void on_actListDeleteCurrent_triggered();

    void on_actSelectListALL_triggered();

    void on_actSelectListNone_triggered();

    void on_actSelectListInverse_triggered();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_chkAllowSort_clicked(bool checked);

    void on_tBtnUP_clicked();

    void on_tBtnDown_clicked();

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
