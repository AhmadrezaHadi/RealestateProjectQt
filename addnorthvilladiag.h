#ifndef ADDNORTHVILLADIAG_H
#define ADDNORTHVILLADIAG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QWidget>
#include <QLineEdit>


class addNorthVillaDiag : public QDialog
{
    Q_OBJECT

public:
    explicit addNorthVillaDiag(QWidget *parent = 0);
    ~addNorthVillaDiag();

private slots:
    void addButtonClicked();
    void clearButtonClicked();
    void addPictureButtonClicked();

private:


    QLineEdit * areaOfFrontYardLineEdit;
    QLineEdit * areaOfBackYardLineEdit;
    QLineEdit * pricePerMeterLineEdit;
    QLineEdit * addressLineEdit;
    QLineEdit * buildingSpaceLineEdit;
    QLineEdit * totalSpaceLineEdit;

    QComboBox * numberOfRoomsComboBox;




    QLabel * areaOfFrontYardLabel;
    QLabel * areaOfBackYardLabel;
    QLabel * buildingSpaceLabel;
    QLabel * totalSpaceLabel;
    QLabel * pricePerMeterLabel;
    QLabel * numberOfRoomsLabel;
    QLabel * addressLabel;



    QPushButton * addButton;
    QPushButton * ClearButton;
    QPushButton * addPictureButton;



};

#endif // ADDNORTHVILLADIAG_H
