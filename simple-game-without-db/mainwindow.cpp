#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"login.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("border:2px groove white;border-radius:10px;padding:2px 4px;outline: none;color: rgb(189, 186, 186);color: rgb(255, 255, 255); font: 17pt 'Ubuntu'");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    login  *a= new login();
    this->hide();
    a->show();
}

