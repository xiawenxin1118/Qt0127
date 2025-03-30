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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnStart;
    QPushButton *btnPause;
    QPushButton *btnCreate;
    QLabel *label;
    QSpinBox *spinBoxIntv;
    QRadioButton *radioContinue;
    QRadioButton *radioOneShot;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioPrecise;
    QRadioButton *radioVeryCoarse;
    QRadioButton *radioCoarse;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdSecond;
    QLCDNumber *lcdHour;
    QLCDNumber *lcdMinute;
    QLCDNumber *lcdMSec;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(461, 400);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName("btnStart");

        gridLayout->addWidget(btnStart, 0, 0, 1, 1);

        btnPause = new QPushButton(groupBox);
        btnPause->setObjectName("btnPause");

        gridLayout->addWidget(btnPause, 0, 1, 1, 1);

        btnCreate = new QPushButton(groupBox);
        btnCreate->setObjectName("btnCreate");

        gridLayout->addWidget(btnCreate, 0, 2, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBoxIntv = new QSpinBox(groupBox);
        spinBoxIntv->setObjectName("spinBoxIntv");
        spinBoxIntv->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxIntv->setMaximum(10000);
        spinBoxIntv->setValue(2000);

        gridLayout->addWidget(spinBoxIntv, 1, 1, 1, 1);

        radioContinue = new QRadioButton(groupBox);
        radioContinue->setObjectName("radioContinue");

        gridLayout->addWidget(radioContinue, 1, 2, 1, 1);

        radioOneShot = new QRadioButton(groupBox);
        radioOneShot->setObjectName("radioOneShot");

        gridLayout->addWidget(radioOneShot, 1, 3, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        radioPrecise = new QRadioButton(groupBox_2);
        radioPrecise->setObjectName("radioPrecise");

        gridLayout_2->addWidget(radioPrecise, 0, 0, 1, 1);

        radioVeryCoarse = new QRadioButton(groupBox_2);
        radioVeryCoarse->setObjectName("radioVeryCoarse");

        gridLayout_2->addWidget(radioVeryCoarse, 0, 2, 1, 1);

        radioCoarse = new QRadioButton(groupBox_2);
        radioCoarse->setObjectName("radioCoarse");

        gridLayout_2->addWidget(radioCoarse, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        lcdSecond = new QLCDNumber(groupBox_3);
        lcdSecond->setObjectName("lcdSecond");
        lcdSecond->setDigitCount(2);
        lcdSecond->setProperty("value", QVariant(23.000000000000000));

        gridLayout_3->addWidget(lcdSecond, 0, 2, 1, 1);

        lcdHour = new QLCDNumber(groupBox_3);
        lcdHour->setObjectName("lcdHour");
        lcdHour->setDigitCount(2);
        lcdHour->setProperty("value", QVariant(24.000000000000000));
        lcdHour->setProperty("intValue", QVariant(24));

        gridLayout_3->addWidget(lcdHour, 0, 0, 1, 1);

        lcdMinute = new QLCDNumber(groupBox_3);
        lcdMinute->setObjectName("lcdMinute");
        lcdMinute->setDigitCount(2);
        lcdMinute->setProperty("value", QVariant(23.000000000000000));

        gridLayout_3->addWidget(lcdMinute, 0, 1, 1, 1);

        lcdMSec = new QLCDNumber(groupBox_3);
        lcdMSec->setObjectName("lcdMSec");
        lcdMSec->setDigitCount(3);
        lcdMSec->setProperty("value", QVariant(230.000000000000000));
        lcdMSec->setProperty("intValue", QVariant(230));

        gridLayout_3->addWidget(lcdMSec, 0, 3, 1, 1);

        gridLayout_3->setColumnStretch(0, 2);
        gridLayout_3->setColumnStretch(1, 2);
        gridLayout_3->setColumnStretch(2, 2);
        gridLayout_3->setColumnStretch(3, 3);

        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout_4->addWidget(lineEdit, 3, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStart->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        btnPause->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        btnCreate->setText(QCoreApplication::translate("Widget", "\345\212\250\346\200\201\345\210\233\345\273\272\345\215\225\346\254\241\350\256\241\346\227\266\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBoxIntv->setSuffix(QCoreApplication::translate("Widget", "ms", nullptr));
        radioContinue->setText(QCoreApplication::translate("Widget", "\350\277\236\347\273\255\345\256\232\346\227\266", nullptr));
        radioOneShot->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\350\256\241\346\227\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250\347\262\276\345\272\246", nullptr));
        radioPrecise->setText(QCoreApplication::translate("Widget", "PreciseTimer", nullptr));
        radioVeryCoarse->setText(QCoreApplication::translate("Widget", "VeryCoarseTimer", nullptr));
        radioCoarse->setText(QCoreApplication::translate("Widget", "CoarseTimer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\210\345\260\217\346\227\266\357\274\232\345\210\206\351\222\237\357\274\232\347\247\222\357\274\211", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\346\265\201\351\200\235\347\232\204\345\256\236\351\231\205\346\227\266\351\227\264\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
