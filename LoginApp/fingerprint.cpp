#include "fingerprint.h"
#include "ui_fingerprint.h"

Fingerprint::Fingerprint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fingerprint)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/fingerprint-icon.jpg");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Fingerprint::~Fingerprint()
{
    delete ui;
}

void Fingerprint::on_pushButton_clicked()
{
    dashboard = new SecDialog(this);
    dashboard->show();
}

