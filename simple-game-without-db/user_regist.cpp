#include "user_regist.h"
#include "ui_user_regist.h"

user_regist::user_regist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_regist)
{
    ui->setupUi(this);
}

user_regist::~user_regist()
{
    delete ui;
}
