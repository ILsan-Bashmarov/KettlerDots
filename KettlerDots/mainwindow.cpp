#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    QString fp=QFileDialog::getOpenFileName();
    ui->statusbar->showMessage("Открыто : "+fp,5000);
}


void MainWindow::on_actionSave_triggered()
{
    QString fp=QFileDialog::getSaveFileName();
    ui->statusbar->showMessage("Сохранено : "+fp,5000);
}

