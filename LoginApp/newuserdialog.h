#ifndef NEWUSERDIALOG_H
#define NEWUSERDIALOG_H

#include <QDialog>

namespace Ui {
class newUserDialog;
}

class newUserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newUserDialog(QWidget *parent = nullptr);
    ~newUserDialog();

private slots:
    void on_submit_clicked();

private:
    Ui::newUserDialog *ui;
};

#endif // NEWUSERDIALOG_H
