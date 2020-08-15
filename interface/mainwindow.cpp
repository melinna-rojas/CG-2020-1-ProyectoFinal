#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "screengl.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lienzo->addWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}



