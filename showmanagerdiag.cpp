#include "showmanagerdiag.h"
#include "ui_showmanagerdiag.h"

showManagerDiag::showManagerDiag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showManagerDiag)
{
    ui->setupUi(this);
}

showManagerDiag::~showManagerDiag()
{
    delete ui;
}
