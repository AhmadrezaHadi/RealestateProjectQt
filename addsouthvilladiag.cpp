#include "addsouthvilladiag.h"

addSouthVillaDiag::addSouthVillaDiag(QWidget *parent) :
    QDialog(parent)
{
    areaOfYardLineEdit = new QLineEdit();
    areaOfParkingLineEdit = new QLineEdit();
    pricePerMeterLineEdit = new QLineEdit();
    addressLineEdit = new QLineEdit();
    buildingSpaceLineEdit = new QLineEdit();
    totalSpaceLineEdit = new QLineEdit();

    numberOfRoomsComboBox = new QComboBox();
    numberOfRoomsComboBox->addItem("0");
    numberOfRoomsComboBox->addItem("1");
    numberOfRoomsComboBox->addItem("2");
    numberOfRoomsComboBox->addItem("3");
    numberOfRoomsComboBox->addItem("4");
    numberOfRoomsComboBox->addItem("5");


    areaOfYardLabel = new QLabel("Area Of Yard");
    areaOfParkingLabel = new QLabel("Area Of Parking");
    buildingSpaceLabel = new QLabel("Building Space");
    totalSpaceLabel = new QLabel("Total Space");
    pricePerMeterLabel = new QLabel("Price per Meter");
    numberOfRoomsLabel = new QLabel("Number of Rooms");
    addressLabel = new QLabel("Address");



    addButton = new QPushButton("Add Villa");
    ClearButton = new QPushButton("Clear");
    addPictureButton = new QPushButton("Add Picture");


    //connect
    connect(addButton, SIGNAL(clicked(bool)), this, SLOT(addButtonClicked()));
    connect(ClearButton, SIGNAL(clicked(bool)), this, SLOT(clearButtonClicked()));
    connect(addPictureButton, SIGNAL(clicked(bool)), this, SLOT(addPictureButtonClicked()));



    //Layouts
    QVBoxLayout * rightBox = new QVBoxLayout();
    QVBoxLayout * leftBox = new QVBoxLayout();
    QHBoxLayout * buttonsBox = new QHBoxLayout();
    QHBoxLayout * mainLayout = new QHBoxLayout();
    QVBoxLayout * page = new QVBoxLayout();

    leftBox->addWidget(buildingSpaceLabel);
    leftBox->addWidget(totalSpaceLabel);
    leftBox->addWidget(pricePerMeterLabel);
    leftBox->addWidget(numberOfRoomsLabel);
    leftBox->addWidget(addressLabel);
    leftBox->addWidget(areaOfYardLabel);
    leftBox->addWidget(areaOfParkingLabel);


    rightBox->addWidget(buildingSpaceLineEdit);
    rightBox->addWidget(totalSpaceLineEdit);
    rightBox->addWidget(pricePerMeterLineEdit);
    rightBox->addWidget(numberOfRoomsComboBox);
    rightBox->addWidget(addressLineEdit);
    rightBox->addWidget(areaOfYardLineEdit);
    rightBox->addWidget(areaOfParkingLineEdit);




    buttonsBox->addWidget(ClearButton);
    buttonsBox->addWidget(addPictureButton);
    buttonsBox->addWidget(addButton);


    mainLayout->addLayout(leftBox);
    mainLayout->addLayout(rightBox);

    page->addLayout(mainLayout);
    page->addLayout(buttonsBox);

    setLayout(page);


}

addSouthVillaDiag::~addSouthVillaDiag()
{

}

void addSouthVillaDiag::addButtonClicked()
{

}

void addSouthVillaDiag::clearButtonClicked()
{

}

void addSouthVillaDiag::addPictureButtonClicked()
{

}
