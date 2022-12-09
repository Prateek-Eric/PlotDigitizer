#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include <QMouseEvent>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionLoad,SIGNAL(triggered()), this, SLOT(loadImageAction()));
    ui->label_10->setMiniLabel(ui->label_11);
    ui->label_10->setMainImageLabel(ui->label_10);
    ui->label_10->setStatusBar(ui->statusbar);

}

void MainWindow::mWmousePressEvent(QMouseEvent *event)
{
    ui->statusbar->showMessage("Mouse press || X:" + QString::number(event->x()) + " Y:" + QString::number(event->y()));
}

void MainWindow::mWmouseReleaseEvent(QMouseEvent *event)
{
    ui->statusbar->showMessage("Mouse release || X:" + QString::number(event->x()) + " Y:" + QString::number(event->y()));
}

void MainWindow::mWmouseMoveEvent(QMouseEvent *event)
{
    ui->statusbar->showMessage("Mouse Move || X:" + QString::number(event->x()) + " Y:" + QString::number(event->y()));
}

void MainWindow::mWmouseDoubleClickEvent(QMouseEvent *event)
{
    ui->statusbar->showMessage("Double Click || X:" + QString::number(event->x()) + " Y:" + QString::number(event->y()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadImageAction()
{
    const QString formats = "Images (*.png *.jpg)";
    QString filePath = QFileDialog::getOpenFileName(this,"Load Image file",QString(), formats);

    if(ui->label_10->setImage(filePath))
    {
        ui->label_10->setMouseTracking(true);
    }

    ui->statusbar->showMessage("Ready");

}




