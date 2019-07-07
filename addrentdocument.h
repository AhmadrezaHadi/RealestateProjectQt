#ifndef ADDRENTDOCUMENT_H
#define ADDRENTDOCUMENT_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QWidget>
#include <QLineEdit>



class addRentDocument : public QDialog
{
    Q_OBJECT

public:
    explicit addRentDocument(QWidget *parent = 0);
    ~addRentDocument();

private slots:
    void clearButtonClicked();
    void addButtonClicked();

private:
    QComboBox * typeComboBox;

    QPushButton * clearButton;
    QPushButton * addButton;

    QLabel * typeLabel;
    QLabel * IDLabel;
    QLabel * commisionLabel;
    QLabel * mortgageLabel;
    QLabel * durationOfRentLabel;
    QLabel * CostOfRentLabel;

    QLineEdit * IDLineEdit;
    QLineEdit * commisionLineEdit;
    QLineEdit * mortgageLineEdit;
    QLineEdit * durationOfRentLineEdit;
    QLineEdit * CostOfRentLineEdit;

};

#endif // ADDRENTDOCUMENT_H
