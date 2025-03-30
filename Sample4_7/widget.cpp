#include "widget.h"
#include "ui_widget.h"
#include "iostream"
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

void Widget::on_btnCurrentDateTime_clicked()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();

    ui->timeEdit->setTime(currentDateTime.time());
    ui->textSetTime->setText(currentDateTime.toString("hh:mm:ss"));

    ui->dateEdit->setDate(currentDateTime.date());
    ui->textSetDate->setText(currentDateTime.toString("yyyy-MM-dd"));

    ui->dateTimeEdit->setDateTime(currentDateTime);
    ui->textSetDateTime->setText(currentDateTime.toString("yyyy-MM-dd hh:mm:ss"));

}


void Widget::on_btnQDebugTime_clicked()
{
    QTime TM1(13,24,5);
    QString str = TM1.toString("hh:mm:ss");
    qDebug() << "Original Time is " << str.toLocal8Bit().data();


    QTime TM2 = TM1.addSecs(150);
    str = TM2.toString("hh:mm:ss");
    qDebug() << "150s later time is " << str.toLocal8Bit().data();

    TM2 = QTime::currentTime();
    str = TM2.toString("hh:mm:ss zzz");
    qDebug() << "150s later time is " << str.toLocal8Bit().data();
}


void Widget::on_btnQDebugDate_clicked()
{

}


void Widget::on_btnSetTimeString_clicked()
{
    QString str = ui->textSetTime->text();
    str = str.trimmed();
    if(!str.isEmpty())
    {
        QTime tm = QTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QString currentDate = ui->calendarWidget->selectedDate().toString("yyyy年MM月dd日");
    qDebug() << currentDate;
    ui->textDate->setText(currentDate);

}

