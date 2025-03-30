#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QElapsedTimer>
#include <QTime>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_timer = new QTimer(this);
    m_counter = new QElapsedTimer();
    m_timer->stop();
    m_timer->setTimerType(Qt::CoarseTimer);
    ui->radioCoarse->setChecked(true);

    ui->lcdHour->display(QTime::currentTime().hour());
    ui->lcdMinute->display(QTime::currentTime().minute());
    ui->lcdSecond->display(QTime::currentTime().second());

    QTime currentTime = QTime::currentTime();
    // 获取当前日期已经过的毫秒数
    int msecsSinceStartOfDay = currentTime.msecsSinceStartOfDay();
    ui->lcdMSec->display(msecsSinceStartOfDay % 1000);

    connect(m_timer, &QTimer::timeout, this, &Widget::do_timer_timeout);
}

Widget::~Widget()
{
    delete m_counter;
    delete ui;
}

void Widget::do_timer_timeout()
{
    QApplication::beep();
    QTime curTime = QTime::currentTime();
    ui->lcdHour->display(curTime.hour());
    ui->lcdMinute->display(curTime.minute());
    ui->lcdSecond->display(curTime.second());

    QTime currentTime = QTime::currentTime();
    // 获取当前日期已经过的毫秒数
    int msecsSinceStartOfDay = currentTime.msecsSinceStartOfDay();
    ui->lcdMSec->display(msecsSinceStartOfDay % 1000);

    if(m_timer->isSingleShot())
    {
        int tmMsec = m_counter->elapsed();
        QString str = QString("流逝的时间：%1毫秒").arg(tmMsec);
        ui->lineEdit->setText(str);
        ui->btnStart->setEnabled(true);
        ui->radioOneShot->setEnabled(true);
        ui->btnPause->setEnabled(true);
    }

}




void Widget::on_btnStart_clicked()
{
    // 拿到spinbox里面的值
    m_timer->setInterval(ui->spinBoxIntv->value());
    // 如果是连续计时被点击
    if(ui->radioContinue->isChecked())
        // 单次计时设置false
        m_timer->setSingleShot(false);
    // 否则单次计时设置true
    else m_timer->setSingleShot(true);

    // 如果精确计时被点击
    if(ui->radioPrecise->isChecked())
    {
        // 设置
        m_timer->setTimerType(Qt::PreciseTimer);
    }
    // 粗糙计时被点击
    else if(ui->radioCoarse->isChecked())
    {
        // 设置
        m_timer->setTimerType(Qt::CoarseTimer);
    }
    // 特别粗糙
    else
    {
        // 设置
        m_timer->setTimerType(Qt::VeryCoarseTimer);
    }
    m_timer->start();
    m_counter->start();
    ui->btnStart->setEnabled(false);
    ui->radioOneShot->setEnabled(false);
    ui->btnPause->setEnabled(true);


}


void Widget::on_btnPause_clicked()
{
    m_timer->stop();
    int tmMsec = m_counter->elapsed();
    int ms = tmMsec%1000;
    int s = tmMsec/1000;
    QString str =  QString("流逝的时间：%1秒%2毫秒").arg(s).arg(ms);
    ui->lineEdit->setText(str);

    ui->btnStart->setEnabled(true);
    ui->radioOneShot->setEnabled(true);
    ui->btnPause->setEnabled(false);

}


void Widget::on_btnCreate_clicked()
{
    int intv = ui->spinBoxIntv->value();
    m_timer->setSingleShot(true);
    QTimer::singleShot(intv, Qt::PreciseTimer, this, &Widget::do_timer_timeout);
    m_counter->start();


    ui->radioOneShot->setEnabled(false);

}

