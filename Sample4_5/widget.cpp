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

void Widget::on_btnLeft_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignLeft);
}


void Widget::on_btnMid_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignHCenter);
}


void Widget::on_btnRight_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignRight);
}


void Widget::on_btnBold_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();

    font.setBold(checked);

    ui->lineEdit->setFont(font);
}


void Widget::on_btnItalic_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();

    font.setItalic(checked);

    ui->lineEdit->setFont(font);
}


void Widget::on_btnUnderLine_clicked(bool checked)
{
    QFont font = ui->lineEdit->font();

    font.setUnderline(checked);

    ui->lineEdit->setFont(font);
}


void Widget::on_btnBlack_clicked()
{
    QPalette plet = ui->lineEdit->palette();
    plet.setColor(QPalette::Text,Qt::black);
    ui->lineEdit->setPalette(plet);
}


void Widget::on_btnReadonly_clicked(bool checked)
{
    ui->lineEdit->setReadOnly(checked);
}


void Widget::on_btnEnabled_clicked(bool checked)
{
    ui->lineEdit->setEnabled(checked);
}


void Widget::on_btnClearButtonEnabled_clicked(bool checked)
{
    ui->lineEdit->setClearButtonEnabled(checked);
}


void Widget::on_btnRed_clicked()
{
    QPalette plet = ui->lineEdit->palette();
    plet.setColor(QPalette::Text,Qt::red);
    ui->lineEdit->setPalette(plet);
}


void Widget::on_btnBlue_clicked()
{
    QPalette plet = ui->lineEdit->palette();
    plet.setColor(QPalette::Text,Qt::blue);
    ui->lineEdit->setPalette(plet);
}

