#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QString u = ui->username->text();
    QString p = ui->pass->text();

    if(u == "sufiyaan" && p == "123"){
        QMessageBox::information(this, "Login", "Correct");
        hide();
        sec = new SecondDialog(this);
        sec->show();
    }else{
        QMessageBox::warning(this, "Login", "Not Correct");
    }
}

