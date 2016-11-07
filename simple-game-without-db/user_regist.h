#ifndef USER_REGIST_H
#define USER_REGIST_H

#include <QMainWindow>

namespace Ui {
class user_regist;
}

class user_regist : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_regist(QWidget *parent = 0);
    ~user_regist();

private slots:
    void on_signUpButton_2_clicked();
    void  back();

    //return username
    QString  username();

    //return pwd
    QString  pwd();

    //return repeated pwd
    QString  pwdRepeated();

    //return email
    QString email();

private:
    Ui::user_regist *ui;
};

#endif // USER_REGIST_H
