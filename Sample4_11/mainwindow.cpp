#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tBtnListInit->setDefaultAction(ui->actListInit);
    ui->tBtnListAppend->setDefaultAction(ui->actListAdd);
    ui->tBtnListInsert->setDefaultAction(ui->actListInsert);
    ui->tBtnListDelete->setDefaultAction(ui->actListDeleteCurrent);
    ui->tBtnListClear->setDefaultAction(ui->actListClear);
    ui->tBtnSelectALL->setDefaultAction(ui->actSelectListALL);
    ui->tBtnselectInvs->setDefaultAction(ui->actSelectListInverse);
    ui->tBtnSelectNone->setDefaultAction(ui->actSelectListNone);
    ui->tBtnSelectItem->setDefaultAction(ui->actListMenu);

    // 创建一个QMenu对象，父对象为this
    QMenu* x_menu = new QMenu(this);
    // 向菜单中添加动作
    x_menu->addAction(ui->actSelectListALL);
    x_menu->addAction(ui->actSelectListInverse);
    x_menu->addAction(ui->actSelectListNone);

    ui->tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->tBtnSelectItem->setMenu(x_menu);

    QToolButton* xToolBtn = new QToolButton(this);
    xToolBtn->setPopupMode(QToolButton::InstantPopup);
    xToolBtn->setText("设置选项");
    QIcon aIcon;
    aIcon.addFile(":/new/prefix1/icons/128.bmp");
    xToolBtn->setIcon(aIcon);
    xToolBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    xToolBtn->setMenu(x_menu);
    ui->toolBar->addWidget(xToolBtn);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actListInit_triggered()
{
    ui->listWidget->clear();

    QListWidgetItem* aItem;
    QIcon aIcon;
    aIcon.addFile(":/new/prefix1/icons/check2.ico");

    bool chk = ui->chkEditable->isChecked();
    for(int i = 0; i < 10; ++i)
    {
        aItem = new QListWidgetItem();
        aItem->setText("Item"+QString("%1").arg(i));
        aItem->setIcon(aIcon);
        aItem->setCheckState(Qt::Checked);

        if(chk)
        {
            aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        } else
        {
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }

        ui->listWidget->addItem(aItem);
    }
}


void MainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear();
}


void MainWindow::on_actListInsert_triggered()
{
    QListWidgetItem* aItem;
    QIcon aIcon;
    aIcon.addFile(":/new/prefix1/icons/check2.ico");

    bool chk = ui->chkEditable->isChecked();

    aItem = new QListWidgetItem();
    aItem->setText("Item"+QString(" insert"));
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);

    if(chk)
    {
        aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    } else
    {
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }

    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);

}


void MainWindow::on_actListAdd_triggered()
{
    QListWidgetItem* aItem;
    QIcon aIcon;
    aIcon.addFile(":/new/prefix1/icons/check2.ico");

    bool chk = ui->chkEditable->isChecked();

    aItem = new QListWidgetItem();
    aItem->setText("Item"+QString(" add"));
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);

    if(chk)
    {
        aItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    } else
    {
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }


    ui->listWidget->insertItem(ui->listWidget->count(),aItem);
}


void MainWindow::on_actListDeleteCurrent_triggered()
{
    QListWidgetItem* curItem = ui->listWidget->currentItem();
    if(curItem)
    {
        int row = ui->listWidget->currentRow();
        delete ui->listWidget->takeItem(row);
    }
}


void MainWindow::on_actSelectListALL_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i = 0; i < cnt; ++i)
    {
        QListWidgetItem* curItem = ui->listWidget->item(i);
        curItem->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_actSelectListNone_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i = 0; i < cnt; ++i)
    {
        QListWidgetItem* curItem = ui->listWidget->item(i);
        curItem->setCheckState(Qt::Unchecked);
    }
}


void MainWindow::on_actSelectListInverse_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i = 0; i < cnt; ++i)
    {
        QListWidgetItem* curItem = ui->listWidget->item(i);
        if(curItem->checkState() == Qt::Checked)
            curItem->setCheckState(Qt::Unchecked);
        else curItem->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    if(current != NULL)
    {
        if(previous != NULL)
        {
            ui->TextCurrent->setText("当前项："+ current->text() + " 上一项：" + previous->text());
            ui->textEdit->append("currentItenChanged()");
            return;
        }
        ui->TextCurrent->setText("当前项："+ current->text()+"上一项：无");
    }

    ui->textEdit->append("currentItenChanged()");
}


void MainWindow::on_chkAllowSort_clicked(bool checked)
{
    ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_tBtnUP_clicked()
{
    if(ui->listWidget->isSortingEnabled())
    ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_tBtnDown_clicked()
{
    if(ui->listWidget->isSortingEnabled())
    ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu * menuList=new QMenu();
    menuList->addAction(ui->actListInit);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListAdd);
    menuList->addAction(ui->actListDeleteCurrent);
    menuList->addSeparator();
    menuList->addAction(ui->actSelectListALL);
    menuList->addAction(ui->actSelectListNone);
    menuList->addAction(ui->actSelectListInverse);
    menuList->exec(QCursor::pos());
    delete menuList;

}

