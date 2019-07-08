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
    IDLineEdit = new QLineEdit();

    numberOfRoomsComboBox = new QComboBox();
    numberOfRoomsComboBox->addItem("0");
    numberOfRoomsComboBox->addItem("1");
    numberOfRoomsComboBox->addItem("2");
    numberOfRoomsComboBox->addItem("3");
    numberOfRoomsComboBox->addItem("4");
    numberOfRoomsComboBox->addItem("5");


    modeComboBox = new QComboBox();
    modeComboBox->addItem("Add");
    modeComboBox->addItem("Edit");


    areaOfYardLabel = new QLabel("Area Of Yard");
    areaOfParkingLabel = new QLabel("Area Of Parking");
    buildingSpaceLabel = new QLabel("Building Space");
    totalSpaceLabel = new QLabel("Total Space");
    pricePerMeterLabel = new QLabel("Price per Meter");
    numberOfRoomsLabel = new QLabel("Number of Rooms");
    addressLabel = new QLabel("Address");
    IDLabel = new QLabel("ID");
    modeLabel = new QLabel("Mode");




    addButton = new QPushButton("Apply");
    ClearButton = new QPushButton("Clear");
    modeButton = new QPushButton("Ok");
    applyIDButton = new QPushButton("Find ID");



    //connect
    connect(addButton, SIGNAL(clicked(bool)), this, SLOT(addButtonClicked()));
    connect(ClearButton, SIGNAL(clicked(bool)), this, SLOT(clearButtonClicked()));

    connect(modeButton, SIGNAL(clicked(bool)), this, SLOT(modeButtonClicked()));



    //Layouts
    QHBoxLayout * IDBox = new QHBoxLayout();
    QHBoxLayout * modeBox = new QHBoxLayout();

    QVBoxLayout * rightBox = new QVBoxLayout();
    QVBoxLayout * leftBox = new QVBoxLayout();
    QHBoxLayout * buttonsBox = new QHBoxLayout();
    QHBoxLayout * mainLayout = new QHBoxLayout();
    QVBoxLayout * page = new QVBoxLayout();

    IDBox->addWidget(IDLineEdit);
    IDBox->addWidget(applyIDButton);

    modeBox->addWidget(modeComboBox);
    modeBox->addWidget(modeButton);

    leftBox->addWidget(modeLabel);
    leftBox->addWidget(IDLabel);
    leftBox->addWidget(buildingSpaceLabel);
    leftBox->addWidget(totalSpaceLabel);
    leftBox->addWidget(pricePerMeterLabel);
    leftBox->addWidget(numberOfRoomsLabel);
    leftBox->addWidget(addressLabel);
    leftBox->addWidget(areaOfYardLabel);
    leftBox->addWidget(areaOfParkingLabel);


    rightBox->addLayout(modeBox);
    rightBox->addLayout(IDBox);
    rightBox->addWidget(buildingSpaceLineEdit);
    rightBox->addWidget(totalSpaceLineEdit);
    rightBox->addWidget(pricePerMeterLineEdit);
    rightBox->addWidget(numberOfRoomsComboBox);
    rightBox->addWidget(addressLineEdit);
    rightBox->addWidget(areaOfYardLineEdit);
    rightBox->addWidget(areaOfParkingLineEdit);


    IDLabel->hide();
    IDLineEdit->hide();
    applyIDButton->hide();


    buttonsBox->addWidget(ClearButton);
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
    IDLineEdit->setText("");
    areaOfParkingLineEdit->setText("");
    areaOfYardLineEdit->setText("");
    pricePerMeterLineEdit->setText("");
    addressLineEdit->setText("");
    totalSpaceLineEdit->setText("");
    buildingSpaceLineEdit->setText("");
    numberOfRoomsComboBox->setCurrentIndex(0);
}



void addSouthVillaDiag::modeButtonClicked()
{
    if(modeComboBox->currentIndex() == 0){
        IDLabel->hide();
        IDLineEdit->hide();
        applyIDButton->hide();
    }else{
        IDLabel->show();
        IDLineEdit->show();
        applyIDButton->show();
    }

}
