#include "user_login.h"
#include "ui_user_login.h"
#include"mainwindow.h"
#include"user_regist.h"
user_login::user_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_login)
{
    ui->setupUi(this);
    ui->logButton->setStyleSheet("border:2px groove white;border-radius:10px;padding:2px 4px;outline: none;color: rgb(189, 186, 186);color: rgb(255, 255, 255); font: 17pt 'Ubuntu'");
    ui->signUpButton->setStyleSheet("border:2px groove white;border-radius:10px;padding:2px 4px;outline: none;color: rgb(189, 186, 186);color: rgb(255, 255, 255); font: 17pt 'Ubuntu'");
   this->setWindowTitle(QObject::tr("登陆"));
    this->setWindowIcon(QIcon(":/image/icon.png"));
}

user_login::~user_login()
{
    delete ui;
}
void user_login::on_signUpButton_clicked()
{
    MainWindow *a=new MainWindow();
    this->hide();
    a->show();
}

void user_login::on_signUpButton_2_clicked()
{
    user_regist  *a= new user_regist ();
    this->hide();
    a->show();
}

//return username
QString user_login::username(){
    return ui->userLineEdt_2->text();
}
//return pwd
QString user_login::pwd(){
    return ui->psdLineEdt_2->text();
}
