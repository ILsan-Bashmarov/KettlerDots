#include "tabtemplate.h"
#include "ui_tabtemplate.h"
#include <QPixmap>
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
    this->scaleFactor*=factor;
    ui->label->resize(this->scaleFactor*this->MyPix.size());
}

void TabTemplate:: setImage(QString str)
{

    MyPix.load(str);
    ui->label->resize(MyPix.size());
    ui->label->setScaledContents(true);
    ui->label->setPixmap(MyPix);

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

    ui->label->resize(MyPix.size());
    this->scaleFactor=1.0;
}

