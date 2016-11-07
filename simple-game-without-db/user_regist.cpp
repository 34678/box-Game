#include "user_regist.h"
#include "ui_user_regist.h"
#include"user_login.h"
#include"QTimer"
#include"QMessageBox"
#include"QTextCodec"
user_regist::user_regist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_regist)
{
    ui->setupUi(this);
     this->setWindowTitle(QObject::tr("注册"));
}

user_regist::~user_regist()
{
    delete ui;
}
//检测两次密码是否相同 返回真为不符合 假为符合
bool check_duplicate_pwd(QString s1,QString s2){
    //存在中文
    bool b = s1.contains(QRegExp("[\\x4e00-\\x9fa5]+"));
    if(b)
    {
      return 1;
    }
    //检测两次密码是否相同
  // return  QString::compare(& s1,  &s2, Qt::CaseSensitive);

    return s1.compare(s2);
}

void user_regist::on_signUpButton_2_clicked()
{
    //判断密码是不是规范
    if(check_duplicate_pwd(ui->pwd1->text(),ui->pwd2->text())==0){
    // 定时跳转并提示
      QTimer *testTimer = new QTimer(this);
      testTimer ->singleShot( 2000,this, SLOT(back()) );
      QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
      QMessageBox::information(NULL, "注册成功", "两秒后跳转,请重新登陆!", QMessageBox::Yes );

    }else{
        QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
        QMessageBox::information(NULL, "注册失败", "两次密码输入不正确,请重新输入!", QMessageBox::Yes );
    }
}

void user_regist::back(){
    user_login  *a= new user_login();
    this->hide();
    a->show();
}
