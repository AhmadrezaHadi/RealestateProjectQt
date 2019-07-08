#ifndef REQUESTSLIST_H
#define REQUESTSLIST_H

#include <QDialog>

namespace Ui {
class requestsList;
}

class requestsList : public QDialog
{
    Q_OBJECT

public:
    explicit requestsList(QWidget *parent = 0);
    ~requestsList();

private:
    Ui::requestsList *ui;
};

#endif // REQUESTSLIST_H
