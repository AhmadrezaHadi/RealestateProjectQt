#include "addnorthvilladiag.h"

addNorthVillaDiag::addNorthVillaDiag(QWidget *parent) :
    QDialog(parent)
{
    areaOfFrontYardLineEdit = new QLineEdit();
    areaOfBackYardLineEdit = new QLineEdit();
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


    areaOfFrontYardLabel = new QLabel("Area Of Front Yard");
    areaOfBackYardLabel = new QLabel("Area Of Back Yard");
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
    leftBox->addWidget(areaOfFrontYardLabel);
    leftBox->addWidget(areaOfBackYardLabel);


    rightBox->addWidget(buildingSpaceLineEdit);
    rightBox->addWidget(totalSpaceLineEdit);
    rightBox->addWidget(pricePerMeterLineEdit);
    rightBox->addWidget(numberOfRoomsComboBox);
    rightBox->addWidget(addressLineEdit);
    rightBox->addWidget(areaOfFrontYardLineEdit);
    rightBox->addWidget(areaOfBackYardLineEdit);




    buttonsBox->addWidget(ClearButton);
    buttonsBox->addWidget(addPictureButton);
    buttonsBox->addWidget(addButton);


    mainLayout->addLayout(leftBox);
    mainLayout->addLayout(rightBox);

    page->addLayout(mainLayout);
    page->addLayout(buttonsBox);

    setLayout(page);


}

addNorthVillaDiag::~addNorthVillaDiag()
{

}

void addNorthVillaDiag::addButtonClicked()
{

}

void addNorthVillaDiag::clearButtonClicked()
{

}

void addNorthVillaDiag::addPictureButtonClicked()
{

}
