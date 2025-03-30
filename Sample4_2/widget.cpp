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

void Widget::on_btnFrontBack_clicked()
{
    ui->plainTextEdit->appendPlainText("front(), back()函数测试:");
    QString str1 = ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText(str1.front());
    ui->plainTextEdit->appendPlainText(str1.back());
}


void Widget::on_btnLeftRight_clicked()
{
    ui->plainTextEdit->appendPlainText("left(), right()函数测试:");
    QString str1 = ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("left is " + str1.left(2));
    ui->plainTextEdit->appendPlainText("right is " + str1.right(9));
}


void Widget::on_btnFirstLast_clicked()
{
    ui->plainTextEdit->appendPlainText("first(),last()函数测试:");
    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBoxStr2->currentText();

    ui->plainTextEdit->appendPlainText("str1 is " + str1);
    ui->plainTextEdit->appendPlainText("str2 is " + str2);
    int N = str1.lastIndexOf(str2);
    QString strFirst = str1.first(N+1);
    QString strLast = str1.last(str1.size()-N-1);

    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("路径名称\t" + strFirst);
    ui->plainTextEdit->appendPlainText("文件名称\t" + strLast);
}


void Widget::on_btnSection_clicked()
{
    ui->plainTextEdit->appendPlainText("section函数测试:");
    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBoxStr2->currentText();
    int N = ui->spinBox->value();

    QString strSection = str1.section(str2,N,N);
    ui->plainTextEdit->appendPlainText(strSection);
}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnNullEmpty_clicked()
{
    ui->plainTextEdit->appendPlainText("isNull and isEmpty函数测试:");
    QString str1;
    QString str2 = "";
    ui->plainTextEdit->appendPlainText("QString str1, str2 =""");

    if(str1.isNull()) ui->plainTextEdit->appendPlainText("str1 is null");
    else ui->plainTextEdit->appendPlainText("str1 is not Null");

    if(str1.isEmpty()) ui->plainTextEdit->appendPlainText("str1 is empty");
    else ui->plainTextEdit->appendPlainText("str1 is not empty");

    if(str2.isNull()) ui->plainTextEdit->appendPlainText("str2 is null");
    else ui->plainTextEdit->appendPlainText("str2 is not Null");

    if(str2.isEmpty()) ui->plainTextEdit->appendPlainText("str2 is empty");
    else ui->plainTextEdit->appendPlainText("str2 is not empty");

}


void Widget::on_btnResize_clicked()
{
    ui->plainTextEdit->appendPlainText("resize函数测试：");
    // QString str1 = ui->comboBoxStr1->currentText();
    // QString str2 = ui->comboBoxStr2->currentText();

    QString str;
    str.resize(5,'1');

    ui->plainTextEdit->appendPlainText(str);

    str.resize(10,QChar(0x54C8));
    ui->plainTextEdit->appendPlainText(str);

    str.resize(1,'0');
    ui->plainTextEdit->appendPlainText(str);


}


void Widget::on_btnSizeLength_clicked()
{
    ui->plainTextEdit->appendPlainText("rize和length函数测试：");

    QString str1 = ui->comboBoxStr1->currentText();
    QString str2 = ui->comboBoxStr2->currentText();

    int ret1 = str1.size();
    int ret2 = str1.length();

    ui->plainTextEdit->appendPlainText(QString::asprintf("str1 size:%d,length:%d",ret1,ret2));

}


void Widget::on_btnFill_clicked()
{
    ui->plainTextEdit->appendPlainText("fill函数测试：");

    QString str1 = ui->comboBoxStr1->currentText();

    str1.fill('a',5);
    ui->plainTextEdit->appendPlainText(str1);
    str1.fill(QChar(0x5454));

    ui->plainTextEdit->appendPlainText(str1);

}


void Widget::on_btnTrimmedSimplified_clicked()
{
    QString str1 = "   hello my Deng   ";
    QString str2 = str1.simplified();
    ui->plainTextEdit->appendPlainText(str2);
}


void Widget::on_btnInsert_clicked()
{
    QString originalStr = "Hello World";

    // 插入 QString
    QString insertStr = " Beautiful";
    QString newStr1 = originalStr;
    newStr1.insert(5, insertStr);
    qDebug() << "After inserting QString:" << newStr1;

    // 插入 QChar
    QString newStr2 = originalStr;
    newStr2.insert(5, '!');
    qDebug() << "After inserting QChar:" << newStr2;

    // 插入 const char*
    QString newStr3 = originalStr;
    const char* insertCStr = " Wonderful";
    newStr3.insert(5, insertCStr);
    qDebug() << "After inserting const char*:" << newStr3;
}


void Widget::on_btnRemove_clicked()
{
    // 初始字符串
    QString originalStr = "Hello, World! Hello, Qt!";

    // 移除指定位置开始的一定数量的字符
    QString newStr1 = originalStr;
    newStr1.remove(7, 6); // 从索引 7 开始移除 6 个字符
    qDebug() << "After removing range:" << newStr1;

    // 移除指定的 QChar 字符
    QString newStr2 = originalStr;
    newStr2.remove('l'); // 移除所有的 'l' 字符
    qDebug() << "After removing QChar:" << newStr2;

    // 移除指定的 QString 子字符串
    QString newStr3 = originalStr;
    newStr3.remove("Hello, "); // 移除所有的 "Hello, " 子字符串
    qDebug() << "After removing QString:" << newStr3;
}


void Widget::on_btnReplace_clicked()
{
    // 初始字符串
    QString originalStr = "Hello, World! Hello, Qt!";

    // 替换指定位置开始的一定数量的字符
    QString newStr1 = originalStr;
    newStr1.replace(7, 5, "Qt"); // 从索引 7 开始替换 5 个字符为 "Qt"
    qDebug() << "After replacing range:" << newStr1;

    // 替换指定的 QChar 字符
    QString newStr2 = originalStr;
    newStr2.replace('l', 'L'); // 把所有的 'l' 替换为 'L'
    qDebug() << "After replacing QChar:" << newStr2;

    // 替换指定的 QString 子字符串
    QString newStr3 = originalStr;
    newStr3.replace("Hello", "Hi"); // 把所有的 "Hello" 替换为 "Hi"
    qDebug() << "After replacing QString:" << newStr3;
}

