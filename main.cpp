#include "mainwindow.h"
#include "global.h"
#include <QApplication>
#include "startandend.cpp"

int main(int argc, char *argv[])
{
  //  start();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
   // end();
    return a.exec();
}
