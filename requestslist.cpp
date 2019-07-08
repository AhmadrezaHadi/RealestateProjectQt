#include "requestslist.h"


requestsList::requestsList(QWidget *parent) :
    QDialog(parent)
{
    titleLabel = new QLabel("Requests List");
    IDLabel = new QLabel("ID");
    connect(acceptButton, SIGNAL(clicked(bool)), this, acceptButtonClicked());
    connect(declineButton, SIGNAL(clicked(bool)), this, declineButtonClicked());
}

requestsList::~requestsList()
{

}

void requestsList::declineButtonClicked()
{

}

void requestsList::acceptButtonClicked()
{

}
