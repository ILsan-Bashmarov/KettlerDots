#include "tabtemplate.h"
#include "ui_tabtemplate.h"
#include <QPixmap>
TabTemplate::TabTemplate(QWidget *parent, QString str) :
    QWidget(parent),
    ui(new Ui::TabTemplate)
{
    ui->setupUi(this);
    TabTemplate::foo(str);
}

TabTemplate::~TabTemplate()
{
    delete ui;
}


void TabTemplate:: foo(QString str)
{
    QPixmap pix(str);
    ui->label->setPixmap(pix);
}
