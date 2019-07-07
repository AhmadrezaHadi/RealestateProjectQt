#-------------------------------------------------
#
# Project created by QtCreator 2019-07-07T09:06:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AP_Project
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    apartment.cpp \
    global.cpp \
    house.cpp \
    logindialog.cpp \
    normaluserpanel.cpp \
    rent.cpp \
    sale.cpp \
    signupdialog.cpp \
    Source.cpp \
    startandend.cpp \
    user.cpp \
    villa.cpp \
    managerpanel.cpp \
    addnorthvilladiag.cpp \
    addsouthvilladiag.cpp \
    addrentdocument.cpp \
    addsalediag.cpp

HEADERS += \
        mainwindow.h \
    apartment.h \
    global.h \
    house.h \
    logindialog.h \
    normaluserpanel.h \
    rent.h \
    sale.h \
    signupdialog.h \
    user.h \
    villa.h \
    managerpanel.h \
    addnorthvilladiag.h \
    addsouthvilladiag.h \
    addrentdocument.h \
    addsalediag.h

FORMS +=
