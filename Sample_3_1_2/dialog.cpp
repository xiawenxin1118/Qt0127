#include "dialog.h"
#include "ui_dialog.h"
#include <QMetaProperty>
#include <QMetaClassInfo>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    boy = new TPerson("xia", this);
    girl = new TPerson("Deng", this);
    boy->setProperty("sex","boy");
    girl->setProperty("sex","girl");

    boy->setAge(10);
    girl->setAge(20);

    ui->spinBoy->setProperty("isboy", true);
    ui->spinGirl->setProperty("isboy", false);

    connect(boy,SIGNAL(ageChanged(int)),this,SLOT(do_ageChanged(int)));
    connect(girl,SIGNAL(ageChanged(int)),this,SLOT(do_ageChanged(int)));
    connect(ui->spinBoy,SIGNAL(valueChanged(int)),this,SLOT(do_spinChanged(int)));
    connect(ui->spinGirl,SIGNAL(valueChanged(int)),this,SLOT(do_spinChanged(int)));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::do_ageChanged(int value)
{
    Q_UNUSED(value);
    TPerson *person = qobject_cast<TPerson*>(sender());
    QString str = QString("%1年龄 = %2").arg(person->property("sex").toString()).arg(value);
    ui->plainTextEdit ->appendPlainText(str);
}

void Dialog::do_spinChanged(int arg1)
{
    QSpinBox *spinBox = qobject_cast<QSpinBox*>(sender());
    if(spinBox->property("isboy").toBool())
    {
        boy->setAge(arg1);
    } else
    {
        girl->setAge(arg1);
    }
}

void Dialog::on_btnBoyInc_clicked()
{
    boy->incAge();
}


void Dialog::on_btnGirlInc_clicked()
{
    girl->incAge();
}


void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_btnClassInfo_clicked()
{
    const QMetaObject * meta = boy->metaObject();
    ui->plainTextEdit->appendPlainText(QString("类名称:%1\n").arg(meta->className()));

    ui->plainTextEdit->appendPlainText("属性:");
    for(int i = meta->propertyOffset();i < meta->propertyCount(); i++)
    {
        const char* propName = meta->property(i).name();
        QString proValue = boy->property(propName).toString();
        ui->plainTextEdit->appendPlainText(QString("属性名称：=%1,属性值：=%2").arg(propName).arg(proValue));
    }

    for(int i = meta->classInfoOffset(); i < meta->classInfoCount(); i++)
    {
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(
            QString("name = %1, Value = %2").arg(classInfo.name()).arg(classInfo.value())
            );
    }
}

