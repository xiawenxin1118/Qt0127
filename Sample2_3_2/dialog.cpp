#include "dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

void Dialog::do_chkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void Dialog::do_chkBoxUnder(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void Dialog::do_chkBoxBold(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);

}

void Dialog::do_setFontColor()
{
    QPalette plet = txtEdit->palette();
    if(radioBlack->isChecked())
    {
        plet.setColor(QPalette::Text, Qt::black);
    }
    if(radioRed->isChecked())
    {
        plet.setColor(QPalette::Text, Qt::red);
    }
    if(radioBlue->isChecked())
    {
        plet.setColor(QPalette::Text, Qt::blue);
    }

    txtEdit->setPalette(plet);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    chkBoxUnder = new QCheckBox("下划线的");
    chkBoxBold  = new QCheckBox("加粗");
    chkBoxItalic = new QCheckBox("斜体");
    QHBoxLayout *HLayl = new QHBoxLayout();
    HLayl->addWidget(chkBoxUnder);
    HLayl->addWidget(chkBoxBold);
    HLayl->addWidget(chkBoxItalic);

    radioBlack = new QRadioButton("黑色");
    radioRed = new QRadioButton("红色");
    radioBlue = new QRadioButton("蓝色");
    QHBoxLayout *HLayl2 = new QHBoxLayout();
    HLayl2->addWidget(radioBlack);
    HLayl2->addWidget(radioRed);
    HLayl2->addWidget(radioBlue);

    txtEdit = new QPlainTextEdit();
    txtEdit->setPlainText("hello world by xia\n");
    QFont font = txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);

    btnOk = new QPushButton("OK");
    btnCancel = new QPushButton("Cancel");
    btnClean = new QPushButton("Clean");
    QHBoxLayout *HLayl3 = new QHBoxLayout();
    HLayl3->addWidget(btnOk);
    HLayl3->addWidget(btnClean);
    HLayl3->addWidget(btnCancel);


    QVBoxLayout *Vlayl = new QVBoxLayout();
    Vlayl->addLayout(HLayl);
    Vlayl->addLayout(HLayl2);
    Vlayl->addWidget(txtEdit);
    Vlayl->addLayout(HLayl3);

    setLayout(Vlayl);

    connect(chkBoxUnder,SIGNAL(clicked(bool)),this,SLOT(do_chkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(do_chkBoxItalic(bool)));
    connect(chkBoxBold,SIGNAL(clicked(bool)),this,SLOT(do_chkBoxBold(bool)));

    connect(radioBlack,SIGNAL(clicked(bool)),this,SLOT(do_setFontColor()));
    connect(radioBlue,SIGNAL(clicked(bool)),this,SLOT(do_setFontColor()));
    connect(radioRed,SIGNAL(clicked(bool)),this,SLOT(do_setFontColor()));

    connect(btnOk,SIGNAL(clicked(bool)),this,SLOT(accept()));
    connect(btnCancel,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(btnClean,SIGNAL(clicked(bool)),this,SLOT(clear()));

    setWindowTitle("手工打造");
}

Dialog::~Dialog() {}
