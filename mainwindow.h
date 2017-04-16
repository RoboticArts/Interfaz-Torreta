#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;




public slots:

    void Accion(void);

private slots:
    void on_agregar_clicked();
    void on_eliminar_clicked();
};



#endif // MAINWINDOW_H
