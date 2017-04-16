#include "mainwindow.h"
#include "ui_mainwindow.h"

int i = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Boton,SIGNAL(pressed()),this,SLOT(Accion()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Accion(void)
{

    ui -> LabelTest -> setText("HOLA MUNDO");
    ui -> LCD->display(i++);


}
