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




void Widget::on_btnGetChars_clicked()
{
    QString str = ui->editStr->text();
    if(str.isEmpty()) return;

    for(qint16 i = 0; i < str.size(); i++)
    {
        QChar ch = str.at(i);
        char16_t uniCode = ch.unicode();

        QString chStr(ch);
        QString info = chStr + QString::asprintf("\t, Unicode 编码:0x%x", uniCode);
        ui->plainTextEdit->appendPlainText(info);
    }
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnCharJudge_clicked()
{
    QString str = ui->editChar->text();
    if(str.isEmpty()) return;

    QChar ch = str.at(0);
    char16_t uniCode = ch.unicode();

    QString info = str + QString::asprintf("\t, Unicode 编码:0x%x", uniCode);
    ui->plainTextEdit->appendPlainText(info);

    ui->chkDigit->setChecked(ch.isDigit()); // 是否是数字0~9；
    ui->chkLetter->setChecked(ch.isLetter()); // 是否是字母；
    ui->chkLetterOrNumber->setChecked(ch.isLetterOrNumber()); // 是否是数字或者字母；
    ui->chkUpper->setChecked(ch.isUpper()); // 是否是大写；
    ui->chkLower->setChecked(ch.isLower()); // 是否是小写；
    ui->chkMark->setChecked(ch.isMark()); // 是否是符号；
    ui->chkSpace->setChecked(ch.isSpace()); // 是否是空格；
    ui->chkSymbol->setChecked(ch.isSymbol()); // 是否是符号；
    ui->chkPunct->setChecked(ch.isPunct()); // 是否是标点符号；
}


void Widget::on_btnComvLatin1_clicked()
{
    QString str = "Dimple";
    ui->plainTextEdit->appendPlainText(str);
    // QChar chP = QChar::fromLatin1('p');
    QChar chP = QChar('P');

    str[0] = 'P';
    ui->plainTextEdit->appendPlainText("\n"+str);
}

