#-------------------------------------------------
#
# Project created by QtCreator 2016-10-29T22:00:38
#
#-------------------------------------------------

QT += core gui
QT +=sql

QT       += phonon
RESOURCES += \
    myImages.qrc
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ws
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    mybox.cpp\
    myview.cpp \
    user_login.cpp \
    user_regist.cpp

HEADERS  += mainwindow.h \
    mybox.h\
    myview.h \
    user_login.h \
    user_regist.h

FORMS    += mainwindow.ui \
    user_login.ui \
    user_regist.ui


