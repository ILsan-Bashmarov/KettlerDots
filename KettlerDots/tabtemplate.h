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
    void setImage(QString str);
    void scaleImage(double factor);
    void on_zoomInButton_clicked();

    void on_zoomOutButton_clicked();

    void on_normalSizeButton_clicked();

private:
    Ui::TabTemplate *ui;

    QPixmap MyPix;
    double scaleFactor = 1;

};

#endif // TABTEMPLATE_H
