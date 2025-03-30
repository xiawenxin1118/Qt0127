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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *btnLeft;
    QPushButton *btnMid;
    QPushButton *btnRight;
    QFrame *line;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnBold;
    QPushButton *btnItalic;
    QPushButton *btnUnderLine;
    QFrame *line_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *btnReadonly;
    QHBoxLayout *horizontalLayout;
    QRadioButton *btnBlack;
    QRadioButton *btnRed;
    QRadioButton *btnBlue;
    QCheckBox *btnEnabled;
    QCheckBox *btnClearButtonEnabled;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(345, 298);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName("gridLayout_4");
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        btnLeft = new QPushButton(frame);
        btnLeft->setObjectName("btnLeft");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/srcBmp/dsdpow.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnLeft->setIcon(icon);
        btnLeft->setCheckable(true);
        btnLeft->setAutoExclusive(true);
        btnLeft->setFlat(true);

        gridLayout_2->addWidget(btnLeft, 0, 0, 1, 1);

        btnMid = new QPushButton(frame);
        btnMid->setObjectName("btnMid");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/srcBmp/dsddot.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnMid->setIcon(icon1);
        btnMid->setCheckable(true);
        btnMid->setAutoExclusive(true);
        btnMid->setFlat(true);

        gridLayout_2->addWidget(btnMid, 0, 1, 1, 1);

        btnRight = new QPushButton(frame);
        btnRight->setObjectName("btnRight");
        btnRight->setIcon(icon1);
        btnRight->setCheckable(true);
        btnRight->setAutoExclusive(true);
        btnRight->setFlat(true);

        gridLayout_2->addWidget(btnRight, 0, 2, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        line = new QFrame(Widget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

        frame_2 = new QFrame(Widget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName("gridLayout_3");
        btnBold = new QPushButton(frame_2);
        btnBold->setObjectName("btnBold");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/srcBmp/shaderOthers.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnBold->setIcon(icon2);
        btnBold->setCheckable(true);

        gridLayout_3->addWidget(btnBold, 0, 0, 1, 1);

        btnItalic = new QPushButton(frame_2);
        btnItalic->setObjectName("btnItalic");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/srcBmp/dsdmath.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnItalic->setIcon(icon3);
        btnItalic->setCheckable(true);

        gridLayout_3->addWidget(btnItalic, 0, 1, 1, 1);

        btnUnderLine = new QPushButton(frame_2);
        btnUnderLine->setObjectName("btnUnderLine");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/srcBmp/shaderPhong.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnUnderLine->setIcon(icon4);
        btnUnderLine->setCheckable(true);

        gridLayout_3->addWidget(btnUnderLine, 0, 2, 1, 1);


        gridLayout_4->addWidget(frame_2, 2, 0, 1, 1);

        line_2 = new QFrame(Widget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 3, 0, 1, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        btnReadonly = new QCheckBox(groupBox);
        btnReadonly->setObjectName("btnReadonly");

        gridLayout->addWidget(btnReadonly, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnBlack = new QRadioButton(groupBox);
        btnBlack->setObjectName("btnBlack");

        horizontalLayout->addWidget(btnBlack);

        btnRed = new QRadioButton(groupBox);
        btnRed->setObjectName("btnRed");

        horizontalLayout->addWidget(btnRed);

        btnBlue = new QRadioButton(groupBox);
        btnBlue->setObjectName("btnBlue");

        horizontalLayout->addWidget(btnBlue);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        btnEnabled = new QCheckBox(groupBox);
        btnEnabled->setObjectName("btnEnabled");

        gridLayout->addWidget(btnEnabled, 0, 1, 1, 1);

        btnClearButtonEnabled = new QCheckBox(groupBox);
        btnClearButtonEnabled->setObjectName("btnClearButtonEnabled");

        gridLayout->addWidget(btnClearButtonEnabled, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox, 4, 0, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(15);
        lineEdit->setFont(font);

        gridLayout_4->addWidget(lineEdit, 5, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnLeft->setText(QCoreApplication::translate("Widget", "\345\261\205\345\267\246", nullptr));
        btnMid->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255", nullptr));
        btnRight->setText(QCoreApplication::translate("Widget", "\345\261\205\345\217\263", nullptr));
        btnBold->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        btnItalic->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        btnUnderLine->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        groupBox->setTitle(QString());
        btnReadonly->setText(QCoreApplication::translate("Widget", "Readonly", nullptr));
        btnBlack->setText(QCoreApplication::translate("Widget", "Black", nullptr));
        btnRed->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        btnBlue->setText(QCoreApplication::translate("Widget", "Blue", nullptr));
        btnEnabled->setText(QCoreApplication::translate("Widget", "Enabled", nullptr));
        btnClearButtonEnabled->setText(QCoreApplication::translate("Widget", "ClearButtonEnabled", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\346\265\213\350\257\225\347\224\250\347\232\204\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
