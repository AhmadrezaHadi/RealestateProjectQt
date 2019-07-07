#include "managerpanel.h"


managerPanel::managerPanel(QWidget *parent) :
    QDialog(parent)
{
    //Dialogs
    QDialog * addApartmentDiag = new QDialog();
    QDialog * addHouseDiag = new QDialog();


    //LineEdits
    apartmentIDLineEdit = new QLineEdit();
    floorNumberLineEdit = new QLineEdit();
    totalSpaceLineEdit = new QLineEdit();
    numberOfFloorsLineEdit = new QLineEdit();
    pricePerMeterLineEdit = new QLineEdit();
    addressLineEdit = new QLineEdit();
    buildingSpaceLineEdit = new QLineEdit();






    //Labels
    totalSpaceLabel = new QLabel("Total Space :");
    numberOfFloorsLabel = new QLabel("Number Of Floors :");
    elevatorsLabel = new QLabel("Does it have elevator? ");
    pricePerMeterLabel = new QLabel("Price per Meter :");
    addressLabel = new QLabel("Address");


    numberOfRoomsLabel = new QLabel("Number Of Rooms");
    apartmentIDLabel = new QLabel("Apartment ID");
    floorNumberLabel = new QLabel("Floor Number");
    buildingSpaceLabel = new QLabel("Building Space");
    useLabel = new QLabel("Use");





    //ComboBox
        //Add Apartment
    elevatorsComboBox = new QComboBox();
    elevatorsComboBox->addItem("Yes");
    elevatorsComboBox->addItem("No");

        //Add House
    useComboBox = new QComboBox();
    useComboBox->addItem("Normal");
    useComboBox->addItem("Adminstrative");
    useComboBox->addItem("Commercial");
    numberOfRoomsComboBox = new QComboBox;
    numberOfRoomsComboBox->addItem("0");
    numberOfRoomsComboBox->addItem("1");
    numberOfRoomsComboBox->addItem("2");
    numberOfRoomsComboBox->addItem("3");
    numberOfRoomsComboBox->addItem("4");
    numberOfRoomsComboBox->addItem("5");

    //Buttons
    addApartmentButton = new QPushButton("Add Apartment");
    addPictureButton = new QPushButton("Add Picture");
    addApartmentCancelButton = new QPushButton("Clear");

    addHouseButton = new QPushButton("Add House");
    addHouseClearButton = new QPushButton("Clear");



    //Layouts

        //Add Apartment
    QHBoxLayout * addressHLayout = new QHBoxLayout();
    QHBoxLayout * totalSpaceHLayout = new QHBoxLayout();
    QHBoxLayout * numberOfFloorsHLayout = new QHBoxLayout();
    QHBoxLayout * elevatorsHLayout = new QHBoxLayout();
    QHBoxLayout * pricePerMeterHLayout = new QHBoxLayout;
    QHBoxLayout * buttonsHLayout = new QHBoxLayout();
    QVBoxLayout * addApartmentMainLayout = new QVBoxLayout();
    QVBoxLayout * mainVLayout = new QVBoxLayout();

    addressHLayout->addWidget(addressLabel);
    addressHLayout->addWidget(addressLineEdit);

    totalSpaceHLayout->addWidget(totalSpaceLabel);
    totalSpaceHLayout->addWidget(totalSpaceLineEdit);

    numberOfFloorsHLayout->addWidget(numberOfFloorsLabel);
    numberOfFloorsHLayout->addWidget(numberOfFloorsLineEdit);

    elevatorsHLayout->addWidget(elevatorsLabel);
    elevatorsHLayout->addWidget(elevatorsComboBox);

    pricePerMeterHLayout->addWidget(pricePerMeterLabel);
    pricePerMeterHLayout->addWidget(pricePerMeterLineEdit);

    buttonsHLayout->addWidget(addApartmentCancelButton);
    buttonsHLayout->addWidget(addPictureButton);
    buttonsHLayout->addWidget(addApartmentButton);

    addApartmentMainLayout->addLayout(totalSpaceHLayout);
    addApartmentMainLayout->addLayout(numberOfFloorsHLayout);
    addApartmentMainLayout->addLayout(pricePerMeterHLayout);
    addApartmentMainLayout->addLayout(elevatorsHLayout);
    addApartmentMainLayout->addLayout(addressHLayout);
    addApartmentMainLayout->addLayout(buttonsHLayout);

    addApartmentDiag->setLayout(addApartmentMainLayout);


        //Add House
    QVBoxLayout * rightBox = new QVBoxLayout();
    QVBoxLayout * leftBox = new QVBoxLayout();
    QHBoxLayout * houseButtonsLayout = new QHBoxLayout();
    QHBoxLayout * widgetsHLayout = new QHBoxLayout();
    QVBoxLayout * addHouseVLayout = new QVBoxLayout();

    rightBox->addWidget(apartmentIDLineEdit);
    rightBox->addWidget(floorNumberLineEdit);
    rightBox->addWidget(numberOfRoomsComboBox);
    rightBox->addWidget(buildingSpaceLineEdit);
    rightBox->addWidget(useComboBox);

    leftBox->addWidget(apartmentIDLabel);
    leftBox->addWidget(floorNumberLabel);
    leftBox->addWidget(numberOfRoomsLabel);
    leftBox->addWidget(buildingSpaceLabel);
    leftBox->addWidget(useLabel);

    houseButtonsLayout->addWidget(addHouseClearButton);
    houseButtonsLayout->addWidget(addHouseButton);

    widgetsHLayout->addLayout(leftBox);
    widgetsHLayout->addLayout(rightBox);

    addHouseVLayout->addLayout(widgetsHLayout);
    addHouseVLayout->addLayout(houseButtonsLayout);

    addHouseDiag->setLayout(addHouseVLayout);



    //connect
    connect(addPictureButton, SIGNAL(clicked(bool)), this, SLOT(addPictureButtonClicked()));


    connect(addApartmentCancelButton, SIGNAL(clicked(bool)), this, SLOT(addApartmentCancelButtonClicked()));
    connect(addApartmentButton, SIGNAL(clicked(bool)), this, SLOT(addApartmentButtonClicked()));


    connect(addHouseButton, SIGNAL(clicked(bool)), this, SLOT(addHouseButtonClicked()));
    connect(addHouseClearButton, SIGNAL(clicked(bool)), this, SLOT(addHouseClearButtonClicked()));






    //End

    addNorthVillaDiag * northVillaDiag = new addNorthVillaDiag();
    addSouthVillaDiag * southVillaDiag = new addSouthVillaDiag();
    mainTab->addTab(addApartmentDiag, "Add Apartment");
    mainTab->addTab(addHouseDiag, "Add House");
    mainTab->addTab(northVillaDiag, "Add North Villa");
    mainTab->addTab(southVillaDiag, "Add South Villa");


    mainVLayout->addWidget(mainTab);

    setLayout(mainVLayout);


}

managerPanel::~managerPanel()
{

}

void managerPanel::addPictureButtonClicked()
{

}

void managerPanel::addApartmentCancelButtonClicked()
{

}

void managerPanel::addApartmentButtonClicked()
{


}

void managerPanel::addHouseButtonClicked()
{

}

void managerPanel::addHouseClearButtonClicked()
{

}


