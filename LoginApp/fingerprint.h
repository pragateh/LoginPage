#ifndef FINGERPRINT_H
#define FINGERPRINT_H

#include <QDialog>
#include "secdialog.h"
namespace Ui {
class Fingerprint;
}

class Fingerprint : public QDialog
{
    Q_OBJECT

public:
    explicit Fingerprint(QWidget *parent = nullptr);
    ~Fingerprint();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Fingerprint *ui;
    SecDialog *dashboard;
};

#endif // FINGERPRINT_H
