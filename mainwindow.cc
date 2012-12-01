#include "mainwindow.hh"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    display = new DisplayPanel();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateValues() {
    ui->lblPixelDensity->setText(QString::number(display->getPixelsPerInch()));
    ui->lblSizeHor->setText(QString::number(display->getHorizontalSize()));
    ui->lblSizeVer->setText(QString::number(display->getVerticalSize()));
}

void MainWindow::on_sbResolutionHor_valueChanged(int arg1) {
    display->setHorizontalResolution(arg1);
    updateValues();
}

void MainWindow::on_sbResolutionVer_valueChanged(int arg1) {
    display->setVerticalResolution(arg1);
    updateValues();
}

void MainWindow::on_dsbDiagonalSize_valueChanged(double arg1) {
    display->setDiagonalSize(arg1);
    updateValues();
}
