#include "forgotpwd.h"
#include "ui_forgotpwd.h"

ForgotPwd::ForgotPwd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgotPwd)
{
    ui->setupUi(this);
}

ForgotPwd::~ForgotPwd()
{
    delete ui;
}

void ForgotPwd::on_pushButton_clicked()
{
    ui->label_4->setText("CHECK EMAIL / PHONE FOR OTP");
    // OPEN A NEW DIALOG BOX ASKING FOR OTP
    otp = new OtpWindow(this);
    otp->show();
}

