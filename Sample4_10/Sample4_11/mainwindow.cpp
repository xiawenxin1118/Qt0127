#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QActionGroup>
#include <QSpinBox>
#include <QFontComboBox>
#include <QLabel>
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 解决中英文互斥
    QActionGroup* actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actText_Chinese);
    actionGroup->addAction(ui->actText_English);
    actionGroup->setExclusive(true);

    // 解决无法可视化的UI
    QSpinBox* spinFontSize = new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(spinFontSize);

    QFontComboBox* comboFontBox = new QFontComboBox(this);
    comboFontBox->setMinimumWidth(150);
    comboFontBox->setFont(ui->textEdit->font());
    ui->toolBar->addWidget(comboFontBox);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actClose);


    // status Bar
    labFile = new QLabel(this);
    labFile->setMinimumWidth(150);
    labFile->setText("文件名:");
    ui->statusbar->addWidget(labFile);

    progressBar = new QProgressBar(this);
    progressBar->setMinimum(5);
    progressBar->setMaximum(150);
    progressBar->setValue(ui->textEdit->font().pointSize());

    ui->statusbar->addWidget(progressBar);

    labInfo = new QLabel("PermanentWidget");
    ui->statusbar->addPermanentWidget(labInfo);

    connect(spinFontSize,&QSpinBox::valueChanged,this, &MainWindow::on_fontSize_changed);
    connect(comboFontBox, &QFontComboBox::currentFontChanged,this,&MainWindow::on_font_changed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actFile_New_triggered()
{
    ui->textEdit->clear();
    ui->textEdit->document()->setModified(false);

    labFile->setText("文件名：新建一个新的文件");
}


void MainWindow::on_actFile_Save_triggered()
{
    labFile->setText("文件已经保存");
}


void MainWindow::on_actFile_Open_triggered()
{
    labFile->setText("正在打开新的文件");
}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actFile_C->setEnabled(b);
    ui->actFile_X->setEnabled(b);
    ui->actFile_V->setEnabled(ui->textEdit->canPaste());
}


void MainWindow::on_textEdit_selectionChanged()
{

    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    ui->actText_Bold->setChecked(fmt.font().bold());
    ui->actText_Italic->setChecked(fmt.font().italic());
    ui->actText_Under->setChecked(fmt.font().underline());

}


void MainWindow::on_actText_Bold_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else fmt.setFontWeight(QFont::Normal);
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actText_Italic_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();

    fmt.setFontItalic(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_actText_Under_triggered(bool checked)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();

    fmt.setFontUnderline(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}

void MainWindow::on_fontSize_changed(int fontSize)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFontPointSize(fontSize);
    ui->textEdit->setCurrentCharFormat(fmt);
    progressBar->setValue(fontSize);
}

void MainWindow::on_font_changed(const QFont &font)
{
    QTextCharFormat fmt = ui->textEdit->currentCharFormat();
    fmt.setFont(font);
    ui->textEdit->setCurrentCharFormat(fmt);
    labInfo->setText("字体名称：" + font.family());
}

