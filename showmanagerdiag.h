#ifndef SHOWMANAGERDIAG_H
#define SHOWMANAGERDIAG_H

#include <QDialog>

namespace Ui {
class showManagerDiag;
}

class showManagerDiag : public QDialog
{
    Q_OBJECT

public:
    explicit showManagerDiag(QWidget *parent = 0);
    ~showManagerDiag();

private:
    Ui::showManagerDiag *ui;
};

#endif // SHOWMANAGERDIAG_H
