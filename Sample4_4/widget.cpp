#include "widget.h"
#include "ui_widget.h"
#include <iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->connect(ui->textNum,&QSpinBox::valueChanged,
                  this,&Widget::on_btnSum_clicked);
    this->connect(ui->textPrice,&QDoubleSpinBox::valueChanged,
                  this,&Widget::on_btnSum_clicked);
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_btnSum_clicked()
{
    int num = ui->textNum->value();
    float price = ui->textPrice->value();

    float sum = num * price;
    ui->textSum->setValue(sum);
    qDebug() << num << "  " << price << "  " << sum ;
}


// void Widget::on_textNum_textChanged(const QString &arg1)
// {
//     int num = ui->textNum->value();
//     float price = ui->textPrice->value();

//     float sum = num * price;
//     ui->textSum->setValue(sum);
//     std::cout << num << "  " << price << "  " << sum << std::endl;
// }


// void Widget::on_textPrice_textChanged(const QString &arg1)
// {
//     int num = ui->textNum->value();
//     float price = ui->textPrice->value();

//     float sum = num * price;
//     ui->textSum->setValue(sum);
//     std::cout << num << "  " << price << "  " << sum << std::endl;
// }





void Widget::on_textDEC_valueChanged(int arg1)
{
    int value = arg1;
    ui->textBIN->setValue(value);
    ui->textOCT->setValue(value);

    qDebug() << ui->textDEC->value();
    qDebug() << ui->textBIN->value();
    qDebug() << ui->textOCT->value();

}

