#ifndef MANAGERPANEL_H
#define MANAGERPANEL_H

#include <QDialog>
#include <QTabWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QComboBox>

#include "addnorthvilladiag.h"
#include "addsouthvilladiag.h"
#include "addrentdocument.h"
#include "addsalediag.h"



class managerPanel : public QDialog
{
    Q_OBJECT

public:
    explicit managerPanel(QWidget *parent = 0);
    ~managerPanel();


private slots:
    //Add Apartment
    void addPictureButtonClicked();
    void addApartmentCancelButtonClicked();
    void addApartmentButtonClicked();

    //Add House
    void addHouseButtonClicked();
    void addHouseClearButtonClicked();




private:
    QTabWidget * mainTab = new QTabWidget;



    //LineEdits
    QLineEdit * apartmentIDLineEdit;
    QLineEdit * floorNumberLineEdit;
    QLineEdit * totalSpaceLineEdit;
    QLineEdit * numberOfFloorsLineEdit;
    QLineEdit * pricePerMeterLineEdit;
    QLineEdit * addressLineEdit;
    QLineEdit * buildingSpaceLineEdit;






    //Labels
    QLabel * totalSpaceLabel;
    QLabel * numberOfFloorsLabel;
    QLabel * elevatorsLabel;
    QLabel * pricePerMeterLabel;
    QLabel * addressLabel;


    QLabel * numberOfRoomsLabel;
    QLabel * apartmentIDLabel;
    QLabel * floorNumberLabel;
    QLabel * buildingSpaceLabel;
    QLabel * useLabel;





    //ComboBox
        //Add Apartment
    QComboBox * elevatorsComboBox;
        //Add House
    QComboBox * useComboBox;
    QComboBox * numberOfRoomsComboBox;

    //Buttons
    QPushButton * addApartmentButton;
    QPushButton * addPictureButton;
    QPushButton * addApartmentCancelButton;

    QPushButton * addHouseButton;
    QPushButton * addHouseClearButton;




};

#endif // MANAGERPANEL_H
