#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnQdebug_clicked()
{

}


void Widget::on_btnsum_clicked()
{
    int num = ui->textNumber->text().toInt();
    float price = ui->textUnitPrice->text().toFloat();
    float total = price * num;
    QString sum;
    sum = sum.setNum(total,'f',2);

    ui->textsSum->setText(sum);
}



void Widget::on_btnDEC2Others_clicked()
{
    int val = ui->textDEC->text().toInt();
    QString str;
    str = QString::number(val,8);
    str = str.toUpper();
    ui->textOCT->setText(str);

    QString str2;
    str2 = QString::number(val,2);
    str2 = str2.toUpper();
    ui->textBIN->setText(str2);
}


void Widget::on_btnBIN2Others_clicked()
{
    bool ok;
    int val = ui->textBIN->text().toInt(&ok,2);
    QString str;
    str = QString::number(val,8);
    str = str.toUpper();
    ui->textOCT->setText(str);

    QString str2;
    str2 = QString::number(val,10);
    str2 = str2.toUpper();
    ui->textDEC->setText(str2);
}


void Widget::on_btnOCT2Others_clicked()
{
    bool ok;
    int val = ui->textOCT->text().toInt(&ok,8);
    QString str;
    str = QString::number(val,10);
    str = str.toUpper();
    ui->textDEC->setText(str);

    QString str2;
    str2 = QString::number(val,2);
    str2 = str2.toUpper();
    ui->textBIN->setText(str2);
}

