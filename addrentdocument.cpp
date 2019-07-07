#include "addrentdocument.h"


addRentDocument::addRentDocument(QWidget *parent) :
    QDialog(parent)
{
    typeComboBox = new QComboBox;
    IDLabel = new QLabel("ID");
    typeLabel = new QLabel("Type");
    commisionLabel = new QLabel("Commision");
    mortgageLabel = new QLabel("Mortgage");
    durationOfRentLabel = new QLabel("Duration Of Rent");
    CostOfRentLabel = new QLabel("Cost Of Rent");
    clearButton = new QPushButton("Clear");
    addButton = new QPushButton("Add");

    IDLineEdit = new QLineEdit();
    commisionLineEdit = new QLineEdit();
    mortgageLineEdit = new QLineEdit();
    durationOfRentLineEdit = new QLineEdit();
    CostOfRentLineEdit = new QLineEdit();

    typeComboBox->addItem("Villa");
    typeComboBox->addItem("Apartment");

    QVBoxLayout * rightBox = new QVBoxLayout();
    QVBoxLayout * leftBox = new QVBoxLayout();
    QHBoxLayout * widgetsBox = new QHBoxLayout();
    QHBoxLayout * ButtonsBox = new QHBoxLayout();
    QVBoxLayout * mainLayout = new QVBoxLayout();


    connect(addButton, SIGNAL(clicked(bool)), this, SLOT(addButtonClicked()));
    connect(clearButton, SIGNAL(clicked(bool)), this, SLOT(clearButtonClicked()));


    leftBox->addWidget(typeLabel);
    leftBox->addWidget(IDLabel);
    leftBox->addWidget(commisionLabel);
    leftBox->addWidget(mortgageLabel);
    leftBox->addWidget(durationOfRentLabel);
    leftBox->addWidget(CostOfRentLabel);

    rightBox->addWidget(typeComboBox);
    rightBox->addWidget(IDLineEdit);
    rightBox->addWidget(commisionLineEdit);
    rightBox->addWidget(mortgageLineEdit);
    rightBox->addWidget(durationOfRentLineEdit);
    rightBox->addWidget(CostOfRentLineEdit);

    widgetsBox->addLayout(leftBox);
    widgetsBox->addLayout(rightBox);

    ButtonsBox->addWidget(clearButton);
    ButtonsBox->addWidget(addButton);

    mainLayout->addLayout(widgetsBox);
    mainLayout->addLayout(ButtonsBox);

    setLayout(mainLayout);
}

addRentDocument::~addRentDocument()
{

}

void addRentDocument::clearButtonClicked()
{

}

void addRentDocument::addButtonClicked()
{

}
