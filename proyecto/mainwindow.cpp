#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // Widget *widget = new Widget();
   // ui->openGL_Window->addWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_rbtn_cube_clicked()
{
     //Widget *widget = new Widget();
     //Se supone que esta función limpia antes
     //qDeleteAll(this->ui->openGL_Window->findChildren<QOpenGLWidget *>(QString(), Qt::FindDirectChildrenOnly));

     //this->ui->openGL_Window->addWidget(widget);
}
