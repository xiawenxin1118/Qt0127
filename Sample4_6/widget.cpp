#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->horizontalScrollBar,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->dial,&QSlider::valueChanged,this,&Widget::do_valueChanged);

    connect(ui->progressBar, &QProgressBar::valueChanged,this,&Widget::do_valueChanged2Others);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void Widget::do_valueChanged2Others(int value)
{
    ui->dial->setValue(value);
    ui->horizontalScrollBar->setValue(value);
    ui->horizontalSlider->setValue(value);
}




void Widget::on_checkTextVisible_clicked(bool checked)
{
    ui->progressBar->setTextVisible(checked);

}


void Widget::on_checkInvertedAppearence_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);
}


void Widget::on_radioPercent_clicked()
{
    ui->progressBar->setFormat("%p%");
}


void Widget::on_radioCurrent_clicked()
{
    ui->progressBar->setFormat("%v");
}

