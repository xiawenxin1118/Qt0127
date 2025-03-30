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

void Widget::on_btnClearUnder_clicked()
{
    ui->textEdit->clear();
}


void Widget::on_btnInitLeft_clicked()
{
    ui->comboLeft->clear();

    QIcon icon;
    icon.addFile(":/new/prefix1/icons/UNIT.ICO");

    for(int i = 0; i < 20; ++i)
    {
        ui->comboLeft->addItem(icon,QString("小邓%1").arg(i));
    }
}


void Widget::on_chkEditable_clicked(bool checked)
{
    ui->comboLeft->setEditable(checked);
}


void Widget::on_btnClearLeft_clicked()
{
    ui->comboLeft->clear();
}


void Widget::on_btnInitRight_clicked()
{
    ui->comboRight->clear();
    QMap<QString,int> City2Num;
    for(int i = 0; i < 10; i++)
    {
        City2Num.insert(QString("小邓%1").arg(i),i);
    }

    foreach(const QString& str,City2Num.keys())
        ui->comboRight->addItem(str,City2Num.value(str));
}


void Widget::on_comboLeft_currentTextChanged(const QString &arg1)
{
    ui->textEdit->insertPlainText(arg1+'\n');
}


void Widget::on_comboRight_currentIndexChanged(int index)
{
    Q_UNUSED(index);

    QString str = ui->comboRight->currentText() + ui->comboRight->currentData().toString();
    ui->textEdit->insertPlainText(str+'\n');
}

