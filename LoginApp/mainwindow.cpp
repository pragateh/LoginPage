#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QStyle>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
//    mydb.setDatabaseName("C:/Users/Pragati Sathia/Downloads/sqlite/sqlite3.dll");

//    if(!mydb.open())
//        ui->label_3->setText("Failed to open the database");
//    else
//        ui->label_3->setText("Connected");

    QPixmap pix(":/resources/img/login-icon.jpg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


//     connect(ui->pushButton_Login, &QPushButton::clicked, this, &MainWindow::onClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    /*
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

//    QPushButton* target = qobject_cast<QPushButton*>(sender());
//    target->setProperty("clicked", true);
//    target->style()->unpolish(target);
//    target->style()->polish(target);

    if(username ==  "test" && password == "test") {
        QMessageBox::information(this, "Login", "Username and password is correct");
        // hide();
//        secDialog = new SecDialog(this);
//        secDialog->show();
       // ui->statusbar->showMessage("username & password is correct");
    }
    else {
        QMessageBox::warning(this,"Login", "Username and password is not correct");
        // ui->statusbar->showMessage("username & password is incorrect");
    }
    */

    secDialog = new SecDialog(this);
    secDialog->show();
}


void MainWindow::on_pushButton_Register_clicked()
{
    newuserDialog = new newUserDialog(this);
    newuserDialog->show();
}


void MainWindow::on_pushButton_forgot_clicked()
{
//    forgotPwdDialog = new ForgotPwdDialog(this);
//    forgotPwdDialog -> show();
    forgotpwd = new ForgotPwd(this);
    forgotpwd->show();
}


void MainWindow::on_pushButton_forgot_2_clicked()
{
    finger = new Fingerprint(this);
    finger->show();
}

