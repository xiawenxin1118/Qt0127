/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actFile_New;
    QAction *actFile_Save;
    QAction *actFile_Open;
    QAction *actFile_X;
    QAction *actFile_C;
    QAction *actFile_V;
    QAction *acFile_Z;
    QAction *actFile_UnZ;
    QAction *actText_Bold;
    QAction *actText_Italic;
    QAction *actText_Under;
    QAction *actText_Chinese;
    QAction *actText_English;
    QAction *actClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_M;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actFile_New = new QAction(MainWindow);
        actFile_New->setObjectName("actFile_New");
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_New->setIcon(icon);
        actFile_New->setMenuRole(QAction::NoRole);
        actFile_Save = new QAction(MainWindow);
        actFile_Save->setObjectName("actFile_Save");
        actFile_Save->setCheckable(true);
        actFile_Save->setChecked(false);
        actFile_Save->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Save->setIcon(icon1);
        actFile_Save->setMenuRole(QAction::NoRole);
        actFile_Open = new QAction(MainWindow);
        actFile_Open->setObjectName("actFile_Open");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/001.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Open->setIcon(icon2);
        actFile_Open->setMenuRole(QAction::NoRole);
        actFile_X = new QAction(MainWindow);
        actFile_X->setObjectName("actFile_X");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_X->setIcon(icon3);
        actFile_X->setMenuRole(QAction::NoRole);
        actFile_C = new QAction(MainWindow);
        actFile_C->setObjectName("actFile_C");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_C->setIcon(icon4);
        actFile_C->setMenuRole(QAction::NoRole);
        actFile_V = new QAction(MainWindow);
        actFile_V->setObjectName("actFile_V");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_V->setIcon(icon5);
        actFile_V->setMenuRole(QAction::NoRole);
        acFile_Z = new QAction(MainWindow);
        acFile_Z->setObjectName("acFile_Z");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        acFile_Z->setIcon(icon6);
        acFile_Z->setMenuRole(QAction::NoRole);
        actFile_UnZ = new QAction(MainWindow);
        actFile_UnZ->setObjectName("actFile_UnZ");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_UnZ->setIcon(icon7);
        actFile_UnZ->setMenuRole(QAction::NoRole);
        actText_Bold = new QAction(MainWindow);
        actText_Bold->setObjectName("actText_Bold");
        actText_Bold->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("images/500.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actText_Bold->setIcon(icon8);
        actText_Bold->setMenuRole(QAction::NoRole);
        actText_Italic = new QAction(MainWindow);
        actText_Italic->setObjectName("actText_Italic");
        actText_Italic->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("images/502.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actText_Italic->setIcon(icon9);
        actText_Italic->setMenuRole(QAction::NoRole);
        actText_Under = new QAction(MainWindow);
        actText_Under->setObjectName("actText_Under");
        actText_Under->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("images/504.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actText_Under->setIcon(icon10);
        actText_Under->setMenuRole(QAction::NoRole);
        actText_Chinese = new QAction(MainWindow);
        actText_Chinese->setObjectName("actText_Chinese");
        actText_Chinese->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("images/CN.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actText_Chinese->setIcon(icon11);
        actText_Chinese->setMenuRole(QAction::NoRole);
        actText_English = new QAction(MainWindow);
        actText_English->setObjectName("actText_English");
        actText_English->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("images/timg2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actText_English->setIcon(icon12);
        actText_English->setMenuRole(QAction::NoRole);
        actClose = new QAction(MainWindow);
        actClose->setObjectName("actClose");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/images/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon13);
        actClose->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_M = new QMenu(menubar);
        menu_M->setObjectName("menu_M");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_M->menuAction());
        menu_F->addAction(actFile_New);
        menu_F->addAction(actFile_Open);
        menu_F->addAction(actFile_Save);
        menu_E->addAction(actFile_X);
        menu_E->addAction(actFile_C);
        menu_E->addAction(actFile_V);
        menu_E->addSeparator();
        menu_E->addAction(acFile_Z);
        menu_E->addAction(actFile_UnZ);
        menu_M->addAction(actText_Bold);
        menu_M->addAction(actText_Italic);
        menu_M->addAction(actText_Under);
        toolBar->addAction(actFile_New);
        toolBar->addAction(actFile_Open);
        toolBar->addAction(actFile_Save);
        toolBar->addSeparator();
        toolBar->addAction(actFile_X);
        toolBar->addAction(actFile_C);
        toolBar->addAction(actFile_V);
        toolBar->addSeparator();
        toolBar->addAction(acFile_Z);
        toolBar->addAction(actFile_UnZ);
        toolBar->addSeparator();
        toolBar->addAction(actText_Bold);
        toolBar->addAction(actText_Italic);
        toolBar->addAction(actText_Under);
        toolBar->addSeparator();
        toolBar->addAction(actText_Chinese);
        toolBar->addAction(actText_English);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actFile_C, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actFile_V, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(acFile_Z, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::undo));
        QObject::connect(actClose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(textEdit, &QTextEdit::undoAvailable, acFile_Z, &QAction::setEnabled);
        QObject::connect(actFile_UnZ, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::redo));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actFile_New->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actFile_New->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_X->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actFile_X->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_X->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_C->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actFile_C->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_C->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_V->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actFile_V->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_V->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        acFile_Z->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        acFile_Z->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\345\212\250\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        acFile_Z->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_UnZ->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(tooltip)
        actFile_UnZ->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232\350\241\214\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_UnZ->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actText_Bold->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#if QT_CONFIG(tooltip)
        actText_Bold->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actText_Bold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actText_Italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actText_Italic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actText_Italic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actText_Under->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actText_Under->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actText_Under->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actText_Chinese->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actText_Chinese->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actText_English->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actText_English->setToolTip(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\260\217\351\202\223\345\260\217\351\202\223 \344\275\240\346\230\257\350\260\201\357\274\237</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\212\236\345\205\254\350\275\257\344\273\266</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\">Microsoft Word\357\274\232\345\234\250 Windows \347\263\273\347\273\237\344\270\255\357\274\214\346\214\211\344\270\213 Ctrl + I \347\273\204\345\220\210\351\224\256\345\217\257\345\260\206\351\200\211\344\270\255\347\232\204\346\226\207\346\234\254\350\256\276\347\275\256\344\270\272\346\226\234\344\275\223\357\274\233\345\234\250 Mac \347\263\273\347\273\237\351\207\214\357\274\214\344\275\277\347\224\250 Command + I \347\273\204\345\220\210\351\224\256\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">WPS \346\226\207\345\255\227\357\274\232\345\234\250 Windows \344\270\212\357\274\214\345\220\214\346\240\267\346\230\257 Ctrl + I \357\274\233\345\234\250 Mac \344\270\212\345\210\231\344\270\272 Command + I\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Google Docs\357\274\232\344\270\215\347\256\241\346\230\257 Win"
                        "dows \350\277\230\346\230\257 Mac\357\274\214\351\203\275\345\217\257\344\273\245\351\200\232\350\277\207 Ctrl + I\357\274\210Windows\357\274\211\346\210\226\350\200\205 Command + I\357\274\210Mac\357\274\211\346\235\245\350\256\251\346\226\207\346\234\254\345\217\230\346\210\220\346\226\234\344\275\223\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\273\243\347\240\201\347\274\226\350\276\221\345\231\250</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Visual Studio Code\357\274\232Ctrl + I\357\274\210Windows/Linux\357\274\211\346\210\226\350\200\205 Command + I\357\274\210Mac\357\274\211\345\217\257\351\200\211\344\270\255\345\275\223\345\211\215\350\241\214\346\226\207\346\234\254\357\274\214\344\270\215\350\277\207\345\256\203\346\234\254\350\272\253\346\262\241\346\234\211\347\233\264\346\216\245\350\256\276\347\275\256\346\226\234"
                        "\344\275\223\347\232\204\345\277\253\346\215\267\351\224\256\357\274\214\344\275\206\345\234\250\346\224\257\346\214\201 Markdown \351\242\204\350\247\210\347\232\204\345\234\272\346\231\257\344\270\213\357\274\214\345\217\257\351\200\232\350\277\207\350\276\223\345\205\245 *\346\226\207\346\234\254* \346\210\226\350\200\205 _\346\226\207\346\234\254_ \346\235\245\345\260\206\346\226\207\346\234\254\346\240\207\350\256\260\344\270\272\346\226\234\344\275\223\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sublime Text\357\274\232\351\273\230\350\256\244\346\262\241\346\234\211\347\233\264\346\216\245\350\256\276\347\275\256\346\226\234\344\275\223\347\232\204\345\277\253\346\215\267\351\224\256\357\274\214\344\270\215\350\277\207\345\234\250\347\274\226\350\276\221 Markdown \346\226\207\346\241\243\346\227\266\357\274\214\344\271\237\350\203\275\351\200\232\350\277\207\350\276\223\345\205\245 *\346\226\207\346\234\254*"
                        " \346\210\226\350\200\205 _\346\226\207\346\234\254_ \346\235\245\345\256\236\347\216\260\343\200\202</p></body></html>", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&M)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
