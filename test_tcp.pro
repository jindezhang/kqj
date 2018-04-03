#-------------------------------------------------
#
# Project created by QtCreator 2018-03-19T20:30:56
#
#-------------------------------------------------
QT       += core gui network
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_tcp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    netmodel.cpp \
    netwindow.cpp \
    first.cpp \
    sqlmodel.cpp \
    selectforid.cpp

HEADERS  += mainwindow.h \
    netmodel.h \
    netwindow.h \
    first.h \
    sqlmodel.h \
    allstruct.h \
    selectforid.h

FORMS    += mainwindow.ui \
    netwindow.ui \
    first.ui \
    selectforid.ui
