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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editStr;
    QPushButton *btnGetChars;
    QLabel *label_2;
    QLineEdit *editChar;
    QPushButton *btnCharJudge;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnComvLatin1;
    QPushButton *pushButton_4;
    QPushButton *btnCompare;
    QPushButton *btnClear;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QCheckBox *chkSpace;
    QCheckBox *chkDigit;
    QCheckBox *chkUpper;
    QCheckBox *chkMark;
    QCheckBox *chkSymbol;
    QCheckBox *chkLetterOrNumber;
    QCheckBox *chkLetter;
    QCheckBox *chkLower;
    QCheckBox *chkPunct;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(451, 638);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 20));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editStr = new QLineEdit(groupBox);
        editStr->setObjectName("editStr");

        gridLayout->addWidget(editStr, 0, 1, 1, 1);

        btnGetChars = new QPushButton(groupBox);
        btnGetChars->setObjectName("btnGetChars");

        gridLayout->addWidget(btnGetChars, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 20));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editChar = new QLineEdit(groupBox);
        editChar->setObjectName("editChar");

        gridLayout->addWidget(editChar, 1, 1, 1, 1);

        btnCharJudge = new QPushButton(groupBox);
        btnCharJudge->setObjectName("btnCharJudge");

        gridLayout->addWidget(btnCharJudge, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        btnComvLatin1 = new QPushButton(groupBox_2);
        btnComvLatin1->setObjectName("btnComvLatin1");

        gridLayout_2->addWidget(btnComvLatin1, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_2->addWidget(pushButton_4, 0, 1, 1, 1);

        btnCompare = new QPushButton(groupBox_2);
        btnCompare->setObjectName("btnCompare");

        gridLayout_2->addWidget(btnCompare, 1, 0, 1, 1);

        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName("btnClear");

        gridLayout_2->addWidget(btnClear, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_3->addWidget(plainTextEdit, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        chkSpace = new QCheckBox(groupBox_4);
        chkSpace->setObjectName("chkSpace");

        gridLayout_4->addWidget(chkSpace, 6, 0, 1, 1);

        chkDigit = new QCheckBox(groupBox_4);
        chkDigit->setObjectName("chkDigit");

        gridLayout_4->addWidget(chkDigit, 0, 0, 1, 1);

        chkUpper = new QCheckBox(groupBox_4);
        chkUpper->setObjectName("chkUpper");

        gridLayout_4->addWidget(chkUpper, 3, 0, 1, 1);

        chkMark = new QCheckBox(groupBox_4);
        chkMark->setObjectName("chkMark");

        gridLayout_4->addWidget(chkMark, 5, 0, 1, 1);

        chkSymbol = new QCheckBox(groupBox_4);
        chkSymbol->setObjectName("chkSymbol");

        gridLayout_4->addWidget(chkSymbol, 7, 0, 1, 1);

        chkLetterOrNumber = new QCheckBox(groupBox_4);
        chkLetterOrNumber->setObjectName("chkLetterOrNumber");

        gridLayout_4->addWidget(chkLetterOrNumber, 2, 0, 1, 1);

        chkLetter = new QCheckBox(groupBox_4);
        chkLetter->setObjectName("chkLetter");

        gridLayout_4->addWidget(chkLetter, 1, 0, 1, 1);

        chkLower = new QCheckBox(groupBox_4);
        chkLower->setObjectName("chkLower");

        gridLayout_4->addWidget(chkLower, 4, 0, 1, 1);

        chkPunct = new QCheckBox(groupBox_4);
        chkPunct->setObjectName("chkPunct");

        gridLayout_4->addWidget(chkPunct, 8, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        editStr->setText(QCoreApplication::translate("Widget", "hello,\351\235\222\345\262\233", nullptr));
        btnGetChars->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204Unicode", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246", nullptr));
        btnCharJudge->setText(QCoreApplication::translate("Widget", "\345\215\225\344\270\252\345\255\227\347\254\246\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\350\260\203\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        btnComvLatin1->setText(QCoreApplication::translate("Widget", "\344\270\216Latin1\347\232\204\350\275\254\346\215\242", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\344\270\216UTF-16\347\232\204\350\275\254\346\215\242", nullptr));
        btnCompare->setText(QCoreApplication::translate("Widget", "QChar\346\257\224\350\276\203\345\222\214\350\275\254\346\215\242", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\347\273\223\346\236\234", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "QChar\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        chkSpace->setText(QCoreApplication::translate("Widget", "isSpace", nullptr));
        chkDigit->setText(QCoreApplication::translate("Widget", "isDigit", nullptr));
        chkUpper->setText(QCoreApplication::translate("Widget", "isUpper", nullptr));
        chkMark->setText(QCoreApplication::translate("Widget", "isMark", nullptr));
        chkSymbol->setText(QCoreApplication::translate("Widget", "isSymbol", nullptr));
        chkLetterOrNumber->setText(QCoreApplication::translate("Widget", "isLetterOrNumber", nullptr));
        chkLetter->setText(QCoreApplication::translate("Widget", "isLetter", nullptr));
        chkLower->setText(QCoreApplication::translate("Widget", "isLower", nullptr));
        chkPunct->setText(QCoreApplication::translate("Widget", "isPunct", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
