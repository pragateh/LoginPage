#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
#include "newuserdialog.h"
#include "fingerprint.h"
#include "forgotpwd.h"
#include <QtSql>
#include <QtDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

    // void on_pushButton_Login_clicked(bool checked);

    void on_pushButton_Register_clicked();

    void on_pushButton_forgot_clicked();

    void on_pushButton_forgot_2_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    newUserDialog *newuserDialog;
    ForgotPwd *forgotpwd;
    Fingerprint *finger;
};

#endif // MAINWINDOW_H
