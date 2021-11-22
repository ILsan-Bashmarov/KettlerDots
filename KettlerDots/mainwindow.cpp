#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include "QFileDialog"
#include "tabtemplate.h"

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
    QString fp=QFileDialog::getOpenFileName( this, "Выберите изображение для анализа",
                                            QDir::homePath(), "All files (*.*) ;; PNG image (*.png) ;; JPG image (*.jpg) ;; uR mOm (*.fat)");

    ui->statusbar->showMessage("Открыто : "+fp, 10000);
    ui->tabWidget->addTab( new TabTemplate(this, fp), fp);
}


void MainWindow::on_actionSave_triggered()
{
    QString fp=QFileDialog::getSaveFileName();
    ui->statusbar->showMessage("Сохранено : "+fp,10000);
}



void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

