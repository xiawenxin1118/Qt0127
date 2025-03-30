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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnFrontBack;
    QPushButton *btnLeftRight;
    QPushButton *btnFirstLast;
    QPushButton *btnSection;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnNullEmpty;
    QPushButton *btnResize;
    QPushButton *btnSizeLength;
    QPushButton *btnFill;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPushButton *btnTrimmedSimplified;
    QPushButton *btnInsert;
    QPushButton *btnRemove;
    QPushButton *btnReplace;
    QFrame *frame_2;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxStr1;
    QComboBox *comboBoxStr2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(731, 509);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(Widget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        btnFrontBack = new QPushButton(groupBox);
        btnFrontBack->setObjectName("btnFrontBack");

        gridLayout_2->addWidget(btnFrontBack, 0, 0, 1, 1);

        btnLeftRight = new QPushButton(groupBox);
        btnLeftRight->setObjectName("btnLeftRight");

        gridLayout_2->addWidget(btnLeftRight, 0, 1, 1, 1);

        btnFirstLast = new QPushButton(groupBox);
        btnFirstLast->setObjectName("btnFirstLast");

        gridLayout_2->addWidget(btnFirstLast, 1, 0, 1, 1);

        btnSection = new QPushButton(groupBox);
        btnSection->setObjectName("btnSection");

        gridLayout_2->addWidget(btnSection, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        btnNullEmpty = new QPushButton(groupBox_2);
        btnNullEmpty->setObjectName("btnNullEmpty");

        gridLayout_3->addWidget(btnNullEmpty, 0, 0, 1, 1);

        btnResize = new QPushButton(groupBox_2);
        btnResize->setObjectName("btnResize");

        gridLayout_3->addWidget(btnResize, 0, 1, 1, 1);

        btnSizeLength = new QPushButton(groupBox_2);
        btnSizeLength->setObjectName("btnSizeLength");

        gridLayout_3->addWidget(btnSizeLength, 1, 0, 1, 1);

        btnFill = new QPushButton(groupBox_2);
        btnFill->setObjectName("btnFill");

        gridLayout_3->addWidget(btnFill, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        btnTrimmedSimplified = new QPushButton(groupBox_3);
        btnTrimmedSimplified->setObjectName("btnTrimmedSimplified");

        gridLayout_4->addWidget(btnTrimmedSimplified, 0, 0, 1, 1);

        btnInsert = new QPushButton(groupBox_3);
        btnInsert->setObjectName("btnInsert");

        gridLayout_4->addWidget(btnInsert, 0, 1, 1, 1);

        btnRemove = new QPushButton(groupBox_3);
        btnRemove->setObjectName("btnRemove");

        gridLayout_4->addWidget(btnRemove, 1, 0, 1, 1);

        btnReplace = new QPushButton(groupBox_3);
        btnReplace->setObjectName("btnReplace");

        gridLayout_4->addWidget(btnReplace, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 2, 0, 1, 1);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(2);
        gridLayout_8 = new QGridLayout(frame_2);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName("gridLayout_6");
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        gridLayout_6->addWidget(label_3, 1, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName("spinBox");

        gridLayout_6->addWidget(spinBox, 1, 4, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName("label");

        gridLayout_6->addWidget(label, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        comboBoxStr1 = new QComboBox(groupBox_4);
        comboBoxStr1->addItem(QString());
        comboBoxStr1->addItem(QString());
        comboBoxStr1->setObjectName("comboBoxStr1");
        comboBoxStr1->setMinimumSize(QSize(180, 0));

        gridLayout_6->addWidget(comboBoxStr1, 0, 1, 1, 4);

        comboBoxStr2 = new QComboBox(groupBox_4);
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->setObjectName("comboBoxStr2");
        comboBoxStr2->setMinimumSize(QSize(80, 0));
        comboBoxStr2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(comboBoxStr2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 2, 1, 1);


        gridLayout_8->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName("gridLayout_7");
        btnClear = new QPushButton(groupBox_5);
        btnClear->setObjectName("btnClear");

        gridLayout_7->addWidget(btnClear, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_7->addWidget(plainTextEdit, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 1, 0, 1, 1);

        splitter->addWidget(frame_2);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QString Demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        btnFrontBack->setText(QCoreApplication::translate("Widget", "front && back", nullptr));
        btnLeftRight->setText(QCoreApplication::translate("Widget", "left && right", nullptr));
        btnFirstLast->setText(QCoreApplication::translate("Widget", "first && last", nullptr));
        btnSection->setText(QCoreApplication::translate("Widget", "section *", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        btnNullEmpty->setText(QCoreApplication::translate("Widget", "isNull && is Empty", nullptr));
        btnResize->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        btnSizeLength->setText(QCoreApplication::translate("Widget", "size && length", nullptr));
        btnFill->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\346\210\226\344\277\256\346\224\271", nullptr));
        btnTrimmedSimplified->setText(QCoreApplication::translate("Widget", "trimmed && simplified", nullptr));
        btnInsert->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        btnRemove->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        btnReplace->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "str2", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "str1", nullptr));
        comboBoxStr1->setItemText(0, QCoreApplication::translate("Widget", "G:\\Qt\\Qtdemo", nullptr));
        comboBoxStr1->setItemText(1, QCoreApplication::translate("Widget", "G:\\Qt\\Qtdemo\\TXT.cpp", nullptr));

        comboBoxStr2->setItemText(0, QCoreApplication::translate("Widget", "\\", nullptr));
        comboBoxStr2->setItemText(1, QCoreApplication::translate("Widget", "Qt", nullptr));
        comboBoxStr2->setItemText(2, QCoreApplication::translate("Widget", ".", nullptr));
        comboBoxStr2->setItemText(3, QCoreApplication::translate("Widget", ",", nullptr));

        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
