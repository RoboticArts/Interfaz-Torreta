#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //a.setStyle("fusion"); //Cambia el estilo de la ventana
    MainWindow w;
    w.show();

    return a.exec();
}


