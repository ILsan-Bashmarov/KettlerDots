#include "tabtemplate.h"
#include "ui_tabtemplate.h"
#include <QPixmap>
#include <QString>
TabTemplate::TabTemplate(QWidget *parent, QString str) :
    QWidget(parent),
    ui(new Ui::TabTemplate)
{
    ui->setupUi(this);
    TabTemplate::setImage(str);

}

TabTemplate::~TabTemplate()
{
    delete ui;
}

void TabTemplate::scaleImage(double factor)
{
    scaleFactor*=factor;
    ui->graphicsView->scale(factor,factor);
    ui->label->setText(QString::number(scaleFactor,'f',6));
}

void TabTemplate:: setImage(QString str)
{

    MyPix.load(str);
    scene = new QGraphicsScene(this);
    scene->addPixmap(MyPix);
    ui->graphicsView->setScene(scene);
}

void TabTemplate::on_zoomInButton_clicked()
{
    this->scaleImage(1.25);
}


void TabTemplate::on_zoomOutButton_clicked()
{
    this->scaleImage(0.8);
}


void TabTemplate::on_normalSizeButton_clicked()
{
    scaleImage(1/scaleFactor);
}

