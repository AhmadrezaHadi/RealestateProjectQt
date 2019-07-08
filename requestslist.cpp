#include "requestslist.h"


requestsList::requestsList(QWidget *parent) :
    QDialog(parent)
{
    titleLabel = new QLabel("Requests List");
    IDLabel = new QLabel("ID");

    acceptButton = new QPushButton ("Accept");
    declineButton = new QPushButton("Decline");

    li_result = new QListWidget();


    connect(acceptButton, SIGNAL(clicked(bool)), this, SLOT(acceptButtonClicked()));
    connect(declineButton, SIGNAL(clicked(bool)), this, SLOT(declineButtonClicked()));


    li_result ->clear();
    li_result ->addItem("SHOW ALL HABITATIONS SEPERATLY");
    li_result ->addItem("Apartment : ");
    for(int i=0; i< v_apartment.size();i++)
    {
        li_result ->addItem("House : ");
        for(int j=0; j< v_apartment[i].get_v_house_for_apartment().size();j++)
        {
            house h = v_apartment[i].get_v_house_for_apartment()[j];
            if( h.getIsInList() == 1)
            {
                li_result ->addItem("Id : " + h.getId());
                li_result ->addItem("Total price : " + QString::number(h.getTotalPriceOfHouse()));
                li_result ->addItem("Building space : " + QString::number(h.getBuildingSpace()));
                li_result ->addItem("Number of rooms : " + QString::number(h.getNumberOfRooms()));
                li_result ->addItem("Floor number : " + QString::number(h.getFloorNumber()));
            }
        }
    }
    //
    li_result ->addItem("NorthVilla : ");
    for(int i=0; i< v_northVilla.size();i++)
    {
        if (v_northVilla[i].getIsInList() == 1){
            li_result -> addItem("Id : " + v_northVilla[i].getId());
            li_result ->addItem("Total price : " + QString::number(v_northVilla[i].get_total_price()));
            li_result ->addItem("Building space : " + QString::number(v_northVilla[i].get_building_space()));
            li_result ->addItem("Number of rooms : " + QString::number(v_northVilla[i].get_number_of_rooms()));
            li_result ->addItem("Area of front yard : " + QString::number(v_northVilla[i].get_area_of_front_yard()));
            li_result ->addItem("Area of back yard : " + QString::number(v_northVilla[i].get_area_of_back_yard()));
        }
    }
    //
    li_result ->addItem("SouthVilla : ");
    for(int i=0; i< v_southVilla.size();i++)
    {
        if (v_southVilla[i].getIsInList() == 1){
            li_result -> addItem("Id : " + v_southVilla[i].getId());
            li_result ->addItem("Total price : " + QString::number(v_southVilla[i].get_total_price()));
            li_result ->addItem("Building space : " + QString::number(v_southVilla[i].get_building_space()));
            li_result ->addItem("Number of rooms : " + QString::number(v_southVilla[i].get_number_of_rooms()));
            li_result ->addItem("Area of yard : " + QString::number(v_southVilla[i].get_area_of_yard()));
            li_result ->addItem("Area of parking : " + QString::number(v_southVilla[i].get_area_of_parking()));
        }
    }



    IDLineEdit = new QLineEdit();

    QVBoxLayout * vBox = new QVBoxLayout();
    vBox->addWidget(titleLabel);
    vBox->addWidget(li_result);
    QHBoxLayout * hBox = new QHBoxLayout();
    hBox->addWidget(IDLabel);
    hBox->addWidget(IDLineEdit);
    hBox->addWidget(declineButton);
    hBox->addWidget(acceptButton);

    QVBoxLayout * mainLayout = new QVBoxLayout();
    mainLayout->addLayout(vBox);
    mainLayout->addLayout(hBox);

    setLayout(mainLayout);
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
