#include "symptoms_class.h"
#include "ui_symptoms_class.h"

symptoms_class::symptoms_class(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::symptoms_class)
{
    ui->setupUi(this);
}

symptoms_class::~symptoms_class()
{
    delete ui;
}
