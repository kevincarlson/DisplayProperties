#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>
#include "display.hh"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_sbResolutionHor_valueChanged(int arg1);

    void on_sbResolutionVer_valueChanged(int arg1);

    void on_dsbDiagonalSize_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    DisplayPanel * display;

    void updateValues();
};

#endif // MAINWINDOW_HH
