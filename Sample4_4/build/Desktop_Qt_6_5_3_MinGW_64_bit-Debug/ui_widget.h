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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *textNum;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnQDebug;
    QPushButton *btnSum;
    QDoubleSpinBox *textPrice;
    QDoubleSpinBox *textSum;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpinBox *textDEC;
    QLabel *label_5;
    QSpinBox *textBIN;
    QLabel *label_6;
    QSpinBox *textOCT;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(299, 287);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textNum = new QSpinBox(groupBox);
        textNum->setObjectName("textNum");

        gridLayout->addWidget(textNum, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        btnQDebug = new QPushButton(groupBox);
        btnQDebug->setObjectName("btnQDebug");

        gridLayout->addWidget(btnQDebug, 2, 1, 1, 1);

        btnSum = new QPushButton(groupBox);
        btnSum->setObjectName("btnSum");

        gridLayout->addWidget(btnSum, 2, 3, 1, 1);

        textPrice = new QDoubleSpinBox(groupBox);
        textPrice->setObjectName("textPrice");
        textPrice->setSingleStep(0.250000000000000);
        textPrice->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(textPrice, 0, 3, 1, 1);

        textSum = new QDoubleSpinBox(groupBox);
        textSum->setObjectName("textSum");

        gridLayout->addWidget(textSum, 1, 3, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        textDEC = new QSpinBox(groupBox_2);
        textDEC->setObjectName("textDEC");
        textDEC->setSingleStep(1);

        gridLayout_2->addWidget(textDEC, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        textBIN = new QSpinBox(groupBox_2);
        textBIN->setObjectName("textBIN");
        textBIN->setDisplayIntegerBase(2);

        gridLayout_2->addWidget(textBIN, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        textOCT = new QSpinBox(groupBox_2);
        textOCT->setObjectName("textOCT");
        textOCT->setDisplayIntegerBase(8);

        gridLayout_2->addWidget(textOCT, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\347\232\204\350\276\223\345\205\245\344\270\216\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        textNum->setSuffix(QCoreApplication::translate("Widget", "\344\270\252", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        btnQDebug->setText(QCoreApplication::translate("Widget", "qDebug()\346\265\213\350\257\225", nullptr));
        btnSum->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        textPrice->setPrefix(QString());
        textPrice->setSuffix(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        textSum->setPrefix(QString());
        textSum->setSuffix(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266\357\274\232", nullptr));
        textDEC->setSuffix(QString());
        textDEC->setPrefix(QCoreApplication::translate("Widget", "DEC ", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266\357\274\232", nullptr));
        textBIN->setPrefix(QCoreApplication::translate("Widget", "BIN ", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266\357\274\232", nullptr));
        textOCT->setPrefix(QCoreApplication::translate("Widget", "OCT ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
