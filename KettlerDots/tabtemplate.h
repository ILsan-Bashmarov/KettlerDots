#ifndef TABTEMPLATE_H
#define TABTEMPLATE_H

#include <QWidget>

namespace Ui {
class TabTemplate;
}

class TabTemplate : public QWidget
{
    Q_OBJECT

public:
    explicit TabTemplate(QWidget *parent = nullptr, QString str="eugh");
    ~TabTemplate();

private slots:
    void foo(QString str);
private:
    Ui::TabTemplate *ui;
};

#endif // TABTEMPLATE_H
