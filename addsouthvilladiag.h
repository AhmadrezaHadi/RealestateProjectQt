#ifndef ADDSOUTHVILLADIAG_H
#define ADDSOUTHVILLADIAG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QWidget>
#include <QLineEdit>


class addSouthVillaDiag : public QDialog
{
    Q_OBJECT

public:
    explicit addSouthVillaDiag(QWidget *parent = 0);
    ~addSouthVillaDiag();

private slots:
    void addButtonClicked();
    void clearButtonClicked();
    void addPictureButtonClicked();

private:

    QLineEdit * areaOfYardLineEdit;
    QLineEdit * areaOfParkingLineEdit;
    QLineEdit * pricePerMeterLineEdit;
    QLineEdit * addressLineEdit;
    QLineEdit * buildingSpaceLineEdit;
    QLineEdit * totalSpaceLineEdit;

    QComboBox * numberOfRoomsComboBox;


    QLabel * areaOfYardLabel;
    QLabel * areaOfParkingLabel;
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
