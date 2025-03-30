#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLabel;
class QProgressBar;
class QLabel;

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
    void on_actFile_New_triggered();

    void on_actFile_Save_triggered();

    void on_actFile_Open_triggered();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_actText_Bold_triggered(bool checked);

    void on_actText_Italic_triggered(bool checked);

    void on_actText_Under_triggered(bool checked);

    void on_fontSize_changed(int fontSize);

    void on_font_changed(const QFont& font);

private:
    Ui::MainWindow *ui;

private:
    QLabel* labFile;
    QProgressBar* progressBar;
    QLabel* labInfo;
};
#endif // MAINWINDOW_H
