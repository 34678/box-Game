#include "mainwindow.h"
#include"myview.h"
#include<QApplication>
#include<QtGui>
#include<QString>
#include<QSqlDatabase>
#include<QtSql>
#include<QTextCodec>
#include<QTime>
#include<QSplashScreen>



int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    QPixmap pix(":/images/logo.png");
    QSplashScreen splash(pix);
    splash.resize(pix.size());
    splash.show();
    app.processEvents();
    MyView view;
    view.show();
    splash.finish(&view);

    return app.exec();

}

