#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    string userName, pass;
    userName = ui->ID;
    pass = ui->password;
}

