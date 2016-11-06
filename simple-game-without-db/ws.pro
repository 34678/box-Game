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
    login.cpp \
    mybox.cpp\
    myview.cpp

HEADERS  += mainwindow.h \
    login.h \
    mybox.h\
    myview.h

FORMS    += mainwindow.ui \
    login.ui


