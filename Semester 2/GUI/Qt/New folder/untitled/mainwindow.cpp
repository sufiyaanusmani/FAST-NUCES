#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.h"
#include <string.h>
#include <QMessageBox>
#include <fstream>

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


//void MainWindow::on_pushButton_clicked()
//{
//    QString u = ui->username->text();
//    QString p = ui->pass->text();

//    if(u == "sufiyaan" && p == "123"){
//        QMessageBox::information(this, "Login", "Correct");
//        hide();
//        sec = new SecondDialog(this);
//        sec->show();
//    }else{
//        QMessageBox::warning(this, "Login", "Not Correct");
//    }
//}


void MainWindow::on_addDataButton_clicked()
{
    User u;
    QString a = ui->QID->text();
    int id = a.toInt();
    QString b = ui->QName->text();
    char name[20];
    std::copy(b.toStdString().begin(),b.toStdString().end(),name);
    QString c = ui->QAge->text();
    int age = c.toInt();
    u.setData(id, name, age);
}

