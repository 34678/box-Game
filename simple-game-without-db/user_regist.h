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

private:
    Ui::user_regist *ui;
};

#endif // USER_REGIST_H
