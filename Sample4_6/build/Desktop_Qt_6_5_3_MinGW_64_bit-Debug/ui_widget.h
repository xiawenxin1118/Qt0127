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
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDial *dial;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QScrollBar *horizontalScrollBar;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QProgressBar *progressBar;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkTextVisible;
    QCheckBox *checkInvertedAppearence;
    QRadioButton *radioPercent;
    QRadioButton *radioCurrent;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(364, 312);
        gridLayout_5 = new QGridLayout(Widget);
        gridLayout_5->setObjectName("gridLayout_5");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        dial = new QDial(groupBox);
        dial->setObjectName("dial");
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        gridLayout->addWidget(dial, 0, 0, 2, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 2, 1, 1);

        horizontalScrollBar = new QScrollBar(groupBox);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 1, 2, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(67);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progressBar, 0, 1, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        checkTextVisible = new QCheckBox(groupBox_3);
        checkTextVisible->setObjectName("checkTextVisible");

        gridLayout_3->addWidget(checkTextVisible, 0, 0, 1, 1);

        checkInvertedAppearence = new QCheckBox(groupBox_3);
        checkInvertedAppearence->setObjectName("checkInvertedAppearence");

        gridLayout_3->addWidget(checkInvertedAppearence, 0, 1, 1, 1);

        radioPercent = new QRadioButton(groupBox_3);
        radioPercent->setObjectName("radioPercent");

        gridLayout_3->addWidget(radioPercent, 1, 0, 1, 1);

        radioCurrent = new QRadioButton(groupBox_3);
        radioCurrent->setObjectName("radioCurrent");

        gridLayout_3->addWidget(radioCurrent, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\346\273\232\346\235\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "ProgressBar\346\230\276\347\244\272\345\222\214\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241", nullptr));
        progressBar->setFormat(QCoreApplication::translate("Widget", "%p%", nullptr));
        groupBox_3->setTitle(QString());
        checkTextVisible->setText(QCoreApplication::translate("Widget", "textVisible", nullptr));
        checkInvertedAppearence->setText(QCoreApplication::translate("Widget", "invertedAppearence", nullptr));
        radioPercent->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217-\347\231\276\345\210\206\346\257\224", nullptr));
        radioCurrent->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217-\345\275\223\345\211\215\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
