#ifndef FORGOTPWD_H
#define FORGOTPWD_H

#include <QDialog>
#include "otpwindow.h"

namespace Ui {
class ForgotPwd;
}

class ForgotPwd : public QDialog
{
    Q_OBJECT

public:
    explicit ForgotPwd(QWidget *parent = nullptr);
    ~ForgotPwd();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ForgotPwd *ui;
    OtpWindow *otp;
};

#endif // FORGOTPWD_H
