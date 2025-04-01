#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <QLabel>
#include <QSpinBox>

void MainWindow::changeItemCaption(QTreeWidgetItem *item)
{
    QString str = "*" + item->text(colItem);
    item->setText(colItem,str);
    if(item->childCount()>0)
    {
        for(int i = 0; i < item->childCount(); i++)
        {
            changeItemCaption(item->child(i));
        }
    }
}

void MainWindow::displayImage(QTreeWidgetItem *item)
{
    qDebug() << 1;
    QString filename = item->data(colItem,Qt::UserRole).toString();
    labFileName->setText(filename);
    labNodeText->setText(item->text(colItem));
    qDebug() << 2;
    qDebug() << filename;
    x_pixmap.load(filename);
    ui->actZoomFitV->triggered();
    qDebug() << 6;
    ui->actZoomFitV->setEnabled(true);
    ui->actZoomFitW->setEnabled(true);
    ui->actZoomIn->setEnabled(true);
    ui->actZoomOut->setEnabled(true);
    qDebug() << 7;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->clear();
    //  header
    QTreeWidgetItem* header = new QTreeWidgetItem();
    header->setText(colItem,"目录和文件");
    header->setText(MainWindow::colItemType,"节点类型");
    header->setText(colDate,"最后的修改日期");

    header->setTextAlignment(0,Qt::AlignHCenter|Qt::AlignVCenter);

    ui->treeWidget->setHeaderItem(header);

    // add tree node
    QIcon xIcon(":/image/icons/15.ico");
    QTreeWidgetItem* topItem = new QTreeWidgetItem(itTopItem);
    topItem->setIcon(colItem,xIcon);

    topItem->setText(colItem,"图片");
    topItem->setText(colItemType,"Top Item");
    // Qt::ItemIsAutoTristate 自动三态 已选 未选 选一部分
    topItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
    topItem->setCheckState(colItem,Qt::Checked);
    ui->treeWidget->addTopLevelItem(topItem);

    // status bar
    labNodeText = new QLabel("节点标题：",this);
    labNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labNodeText);

    spinRatio = new QSpinBox(this);
    spinRatio->setRange(0,2000);
    spinRatio->setValue(100);
    spinRatio->setSuffix("%");
    spinRatio->setReadOnly(true);
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons);

    ui->statusbar->addPermanentWidget(spinRatio);

    labFileName = new QLabel("文件名：",this);
    ui->statusbar->addPermanentWidget(labFileName);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actAddFolder_triggered()
{
    QString dir = QFileDialog::getExistingDirectory();
    if(dir.isEmpty())
    {
        return;
    }
    QTreeWidgetItem* parItem = ui->treeWidget->currentItem();
    if(parItem == nullptr)
    {
        return;
    }

    if(parItem->type() != itImageItem)
    {
        int cnt = dir.length();
        int i = dir.lastIndexOf("/");
        QString nodeName = dir.right(cnt-i-1);

        QTreeWidgetItem* item = new QTreeWidgetItem(itGroupItem);
        QIcon icon(":/image/icons/open3.bmp");
        item->setIcon(colItem,icon);
        item->setText(colItem,nodeName);
        item->setText(colItemType,"GroupItem");
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
        item->setCheckState(colItem,Qt::Checked);
        item->setData(colItem,Qt::UserRole,QVariant(dir));
        parItem->addChild(item);
    }
    parItem->setExpanded(true);
}


void MainWindow::on_actAddFiles_triggered()
{
    QStringList files = QFileDialog::getOpenFileNames(this,"选择文件","","Image(*.jpg)");
    if(files.isEmpty())
    {
        return;
    }
    QTreeWidgetItem *parItem, *item;
    item = ui->treeWidget->currentItem();
    if(item == nullptr)
    {
        item = ui->treeWidget->topLevelItem(0);
    }
    if(item->type() == itImageItem)
    {
        parItem = item->parent();
    } else
    {
        parItem = item;
    }
    for(int i = 0; i < files.size(); ++i)
    {
        QString fileName = files.at(i);
        QIcon icon(":/image/icons/31.ico");
        QFileInfo fileInfo(fileName);
        QString NodeText = fileInfo.fileName();
        QDateTime dateTime = fileInfo.lastModified();

        QTreeWidgetItem *item = new QTreeWidgetItem(itImageItem);
        item->setIcon(colItem,icon);
        item->setText(colItem,NodeText);
        item->setText(colItemType,"ImageItem");
        item->setText(colDate,dateTime.toString("yyyy-MM-dd"));
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
        item->setCheckState(colItem,Qt::Checked);
        item->setData(colItem,Qt::UserRole,QVariant(fileName));
        parItem->addChild(item);

    }
    parItem->setExpanded(true);
}


void MainWindow::on_actPointDelete_triggered()
{
    QTreeWidgetItem *item=ui->treeWidget->currentItem();
    QTreeWidgetItem *parItem = item->parent();

    if(item == nullptr) return;
    parItem->removeChild(item);
}


void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    if(current==nullptr|current == previous)
        return;

    switch(current->type())
    {
    case itTopItem:
        qDebug() << "type is itTopItem";
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actPointDelete->setEnabled(false);
        break;
    case itGroupItem:
        qDebug() << "type is itGroupItem";
        ui->actAddFolder->setEnabled(true);
        ui->actAddFiles->setEnabled(true);
        ui->actPointDelete->setEnabled(true);
        break;
    case itImageItem:
        qDebug() << "type is itImageItem";
        ui->actAddFolder->setEnabled(false);
        ui->actAddFiles->setEnabled(true);
        ui->actPointDelete->setEnabled(true);
        displayImage(current);
        break;
    }
}


void MainWindow::on_actPointIterate_triggered()
{
    for(int i = 0; i < ui->treeWidget->topLevelItemCount(); i++)
    {
        changeItemCaption(ui->treeWidget->topLevelItem(i));
    }
}


void MainWindow::on_actZoomFitW_triggered()
{
    int w = ui->scrollArea->width()-30;
    int realw = x_pixmap.width();
    x_ratio = float(w)/realw;

    spinRatio->setValue(x_ratio*100);
    QPixmap pix = x_pixmap.scaledToWidth(w-30);
    ui->label->setPixmap(pix);
    ui->label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
}


void MainWindow::on_actZoomFitV_triggered()
{
    qDebug() << 3;
    int h = ui->scrollArea->height()-30;
    int realh = x_pixmap.height();
    x_ratio = float(h)/realh;
    qDebug() << 4;
    spinRatio->setValue(x_ratio*100);
    QPixmap pix = x_pixmap.scaledToHeight(h-30);
    ui->label->setPixmap(pix);
    qDebug() << 5;
}


void MainWindow::on_actZoomRealSize_triggered()
{
    ui->label->setPixmap(x_pixmap);
    x_ratio = 1;
    spinRatio->setValue(100);

}


void MainWindow::on_actZoomIn_triggered()
{
    x_ratio*= 1.2;
    int w = x_ratio * x_pixmap.width();
    int h = x_ratio * x_pixmap.height();
    ui->label->setPixmap(x_pixmap.scaled(w,h));

    spinRatio->setValue(100*x_ratio);
}


void MainWindow::on_actZoomOut_triggered()
{
    x_ratio*= 0.8;
    int w = x_ratio * x_pixmap.width();
    int h = x_ratio * x_pixmap.height();
    ui->label->setPixmap(x_pixmap.scaled(w,h));

    spinRatio->setValue(100*x_ratio);
}


void MainWindow::on_actDockVisible_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}


void MainWindow::on_actDockFloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->actDockVisible->setChecked(visible);
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->actDockFloat->setChecked(topLevel);
}

