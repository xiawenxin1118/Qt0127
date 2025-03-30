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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnInitLeft;
    QPushButton *btnClearLeft;
    QCheckBox *chkEditable;
    QComboBox *comboLeft;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnInitRight;
    QComboBox *comboRight;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPushButton *btnClearUnder;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(499, 404);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        btnInitLeft = new QPushButton(groupBox);
        btnInitLeft->setObjectName("btnInitLeft");

        gridLayout_2->addWidget(btnInitLeft, 0, 0, 1, 1);

        btnClearLeft = new QPushButton(groupBox);
        btnClearLeft->setObjectName("btnClearLeft");

        gridLayout_2->addWidget(btnClearLeft, 0, 1, 1, 1);

        chkEditable = new QCheckBox(groupBox);
        chkEditable->setObjectName("chkEditable");

        gridLayout_2->addWidget(chkEditable, 0, 2, 1, 1);

        comboLeft = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../\343\200\212Qt 6 C++\345\274\200\345\217\221\346\214\207\345\215\227\343\200\213\345\205\250\344\271\246\347\244\272\344\276\213\346\272\220\347\240\201\343\200\201\346\274\224\347\244\272\350\275\257\344\273\266\345\217\212\344\275\277\347\224\250\350\257\264\346\230\216-20231218\346\233\264\346\226\260/03\343\200\212Qt 6 C++\345\274\200\345\217\221\346\214\207\345\215\227\343\200\213\345\205\250\344\271\246\347\244\272\344\276\213\346\272\220\347\240\201--qmake\347\273\203\344\271\240\347\211\210 V1.1/Chap04_Widgets/samp4_09Combobox/icons/UNIT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        comboLeft->addItem(icon, QString());
        comboLeft->addItem(QString());
        comboLeft->addItem(QString());
        comboLeft->addItem(QString());
        comboLeft->setObjectName("comboLeft");

        gridLayout_2->addWidget(comboLeft, 1, 0, 1, 3);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        btnInitRight = new QPushButton(groupBox_2);
        btnInitRight->setObjectName("btnInitRight");

        gridLayout_3->addWidget(btnInitRight, 0, 0, 1, 1);

        comboRight = new QComboBox(groupBox_2);
        comboRight->setObjectName("comboRight");

        gridLayout_3->addWidget(comboRight, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName("gridLayout");
        btnClearUnder = new QPushButton(groupBox_3);
        btnClearUnder->setObjectName("btnClearUnder");

        gridLayout->addWidget(btnClearUnder, 0, 0, 1, 1);

        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Combo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\347\256\200\345\215\225ComboBox", nullptr));
        btnInitLeft->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        btnClearLeft->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        chkEditable->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        comboLeft->setItemText(0, QCoreApplication::translate("Widget", "\345\215\227\344\272\254", nullptr));
        comboLeft->setItemText(1, QCoreApplication::translate("Widget", "\346\235\255\345\267\236", nullptr));
        comboLeft->setItemText(2, QCoreApplication::translate("Widget", "\350\213\217\345\267\236", nullptr));
        comboLeft->setItemText(3, QCoreApplication::translate("Widget", "\345\260\217\351\202\223", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", nullptr));
        btnInitRight->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        comboRight->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\345\237\216\345\270\202", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        btnClearUnder->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
