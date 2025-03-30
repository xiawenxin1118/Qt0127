/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnCurrentDateTime;
    QLabel *label_2;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QLineEdit *textSetTime;
    QPushButton *btnQDebugTime;
    QPushButton *btnSetTimeString;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLineEdit *textSetDate;
    QPushButton *btnQDebugDate;
    QPushButton *btnSetDateString;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *textSetDateTime;
    QPushButton *btnQDebugDateTime;
    QPushButton *btnSetDateTimeString;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *textDate;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(660, 400);
        Widget->setMinimumSize(QSize(660, 400));
        Widget->setMaximumSize(QSize(660, 400));
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        btnCurrentDateTime = new QPushButton(groupBox);
        btnCurrentDateTime->setObjectName("btnCurrentDateTime");

        gridLayout->addWidget(btnCurrentDateTime, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        textSetTime = new QLineEdit(groupBox);
        textSetTime->setObjectName("textSetTime");

        gridLayout->addWidget(textSetTime, 1, 2, 1, 1);

        btnQDebugTime = new QPushButton(groupBox);
        btnQDebugTime->setObjectName("btnQDebugTime");

        gridLayout->addWidget(btnQDebugTime, 2, 1, 1, 1);

        btnSetTimeString = new QPushButton(groupBox);
        btnSetTimeString->setObjectName("btnSetTimeString");

        gridLayout->addWidget(btnSetTimeString, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 3, 1, 1, 1);

        textSetDate = new QLineEdit(groupBox);
        textSetDate->setObjectName("textSetDate");

        gridLayout->addWidget(textSetDate, 3, 2, 1, 1);

        btnQDebugDate = new QPushButton(groupBox);
        btnQDebugDate->setObjectName("btnQDebugDate");

        gridLayout->addWidget(btnQDebugDate, 4, 1, 1, 1);

        btnSetDateString = new QPushButton(groupBox);
        btnSetDateString->setObjectName("btnSetDateString");

        gridLayout->addWidget(btnSetDateString, 4, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");

        gridLayout->addWidget(dateTimeEdit, 5, 1, 1, 1);

        textSetDateTime = new QLineEdit(groupBox);
        textSetDateTime->setObjectName("textSetDateTime");

        gridLayout->addWidget(textSetDateTime, 5, 2, 1, 1);

        btnQDebugDateTime = new QPushButton(groupBox);
        btnQDebugDateTime->setObjectName("btnQDebugDateTime");

        gridLayout->addWidget(btnQDebugDateTime, 6, 1, 1, 1);

        btnSetDateTimeString = new QPushButton(groupBox);
        btnSetDateTimeString->setObjectName("btnSetDateTimeString");

        gridLayout->addWidget(btnSetDateTimeString, 6, 2, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        textDate = new QLineEdit(groupBox_2);
        textDate->setObjectName("textDate");

        gridLayout_2->addWidget(textDate, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName("calendarWidget");

        gridLayout_2->addWidget(calendarWidget, 1, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        btnCurrentDateTime->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\347\232\204\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "HH:mm:ss", nullptr));
        textSetTime->setInputMask(QCoreApplication::translate("Widget", "99:99:99;0", nullptr));
        btnQDebugTime->setText(QCoreApplication::translate("Widget", "qDebug-Time", nullptr));
        btnSetTimeString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264-fromString", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        textSetDate->setInputMask(QCoreApplication::translate("Widget", "9999/99/99;0", nullptr));
        btnQDebugDate->setText(QCoreApplication::translate("Widget", "qDebug-Date", nullptr));
        btnSetDateString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237-fromString", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy/M/d HH:mm:ss", nullptr));
        btnQDebugDateTime->setText(QCoreApplication::translate("Widget", "qDebug-DateTime", nullptr));
        btnSetDateTimeString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264-fromString", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
