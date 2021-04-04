#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

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


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked()){
        stream<<"Pizza IS CHECKED"<<Qt::endl;}
    else{
        stream<<"Pizza IS UNCHECKED"<<Qt::endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked()){
        stream<<"Bhel Poori IS CHECKED"<<Qt::endl;}
    else{
        stream<<"Bhel poori IS UNCHECKED"<<Qt::endl;
    }
}


void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked()){
        stream<<"Masala poori IS CHECKED"<<Qt::endl;
    }
    else{
        stream<<"Masala Poori IS UNCHECKED"<<Qt::endl;
    }
}
