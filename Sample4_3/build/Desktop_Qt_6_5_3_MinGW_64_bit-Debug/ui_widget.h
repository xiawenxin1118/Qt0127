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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *textNumber;
    QLabel *label_8;
    QLineEdit *textUnitPrice;
    QLabel *label_9;
    QLineEdit *textsSum;
    QPushButton *btnQdebug;
    QPushButton *btnsum;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnDEC2Others;
    QLineEdit *textOCT;
    QLineEdit *textBIN;
    QPushButton *btnOCT2Others;
    QLabel *label_4;
    QLineEdit *textDEC;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnBIN2Others;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(470, 436);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        textNumber = new QLineEdit(groupBox);
        textNumber->setObjectName("textNumber");
        textNumber->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(textNumber, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        textUnitPrice = new QLineEdit(groupBox);
        textUnitPrice->setObjectName("textUnitPrice");
        textUnitPrice->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(textUnitPrice, 0, 3, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        textsSum = new QLineEdit(groupBox);
        textsSum->setObjectName("textsSum");
        textsSum->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(textsSum, 1, 3, 1, 1);

        btnQdebug = new QPushButton(groupBox);
        btnQdebug->setObjectName("btnQdebug");

        gridLayout->addWidget(btnQdebug, 2, 1, 1, 1);

        btnsum = new QPushButton(groupBox);
        btnsum->setObjectName("btnsum");

        gridLayout->addWidget(btnsum, 2, 3, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        btnDEC2Others = new QPushButton(groupBox_2);
        btnDEC2Others->setObjectName("btnDEC2Others");

        gridLayout_2->addWidget(btnDEC2Others, 0, 2, 1, 1);

        textOCT = new QLineEdit(groupBox_2);
        textOCT->setObjectName("textOCT");
        textOCT->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(textOCT, 2, 1, 1, 1);

        textBIN = new QLineEdit(groupBox_2);
        textBIN->setObjectName("textBIN");

        gridLayout_2->addWidget(textBIN, 1, 1, 1, 1);

        btnOCT2Others = new QPushButton(groupBox_2);
        btnOCT2Others->setObjectName("btnOCT2Others");

        gridLayout_2->addWidget(btnOCT2Others, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        textDEC = new QLineEdit(groupBox_2);
        textDEC->setObjectName("textDEC");
        textDEC->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(textDEC, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        btnBIN2Others = new QPushButton(groupBox_2);
        btnBIN2Others->setObjectName("btnBIN2Others");

        gridLayout_2->addWidget(btnBIN2Others, 1, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\345\222\214\350\276\223\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        btnQdebug->setText(QCoreApplication::translate("Widget", "Qdebug()", nullptr));
        btnsum->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        btnDEC2Others->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266\350\275\254\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        btnOCT2Others->setText(QCoreApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266\350\275\254\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", nullptr));
        btnBIN2Others->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266\350\275\254\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
