#ifndef OTPWINDOW_H
#define OTPWINDOW_H

#include <QDialog>
#include "secdialog.h"
namespace Ui {
class OtpWindow;
}

class OtpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OtpWindow(QWidget *parent = nullptr);
    ~OtpWindow();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::OtpWindow *ui;
    SecDialog *dashboard;
};

#endif // OTPWINDOW_H
