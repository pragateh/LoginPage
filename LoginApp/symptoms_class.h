#ifndef SYMPTOMS_CLASS_H
#define SYMPTOMS_CLASS_H

#include <QDialog>

namespace Ui {
class symptoms_class;
}

class symptoms_class : public QDialog
{
    Q_OBJECT

public:
    explicit symptoms_class(QWidget *parent = nullptr);
    ~symptoms_class();

private:
    Ui::symptoms_class *ui;
};

#endif // SYMPTOMS_CLASS_H
