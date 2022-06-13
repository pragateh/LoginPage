#include "otpwindow.h"
#include "secdialog.h"
#include "ui_otpwindow.h"

OtpWindow::OtpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OtpWindow)
{
    ui->setupUi(this);
}

OtpWindow::~OtpWindow()
{
    delete ui;
}

void OtpWindow::on_pushButton_Login_clicked()
{
    dashboard = new SecDialog(this);
    dashboard->show();
}

