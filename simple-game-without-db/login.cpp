#include "login.h"
#include "ui_login.h"
#include"mainwindow.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->logButton->setStyleSheet("border:2px groove white;border-radius:10px;padding:2px 4px;outline: none;color: rgb(189, 186, 186);color: rgb(255, 255, 255); font: 17pt 'Ubuntu'");
    ui->signUpButton->setStyleSheet("border:2px groove white;border-radius:10px;padding:2px 4px;outline: none;color: rgb(189, 186, 186);color: rgb(255, 255, 255); font: 17pt 'Ubuntu'");

}

login::~login()
{
    delete ui;
}


void login::on_signUpButton_clicked()
{
    MainWindow *a=new MainWindow();
    this->hide();
    a->show();
}
