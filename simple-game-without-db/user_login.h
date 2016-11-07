#ifndef USER_LOGIN_H
#define USER_LOGIN_H

#include <QMainWindow>
#include"user_login.h"
namespace Ui {
class user_login;
}

class user_login : public QMainWindow
{
    Q_OBJECT

private slots:
    void on_signUpButton_clicked();

    void on_signUpButton_2_clicked();

    QString username();
    QString pwd();
public:
    explicit user_login(QWidget *parent = 0);
    ~user_login();

private:
    Ui::user_login *ui;
};

#endif // USER_LOGIN_H
