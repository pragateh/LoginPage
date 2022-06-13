#include "newuserdialog.h"
#include "ui_newuserdialog.h"

newUserDialog::newUserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newUserDialog)
{
    ui->setupUi(this);
}

newUserDialog::~newUserDialog()
{
    delete ui;
}

void newUserDialog::on_submit_clicked()
{
    ui-> register_status->setText("SUCCESSFUL REGISTRATION, CHECK EMAIL-ID/ PHONE FOR LOGIN DETAILS");
}

