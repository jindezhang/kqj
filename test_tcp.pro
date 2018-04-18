#-------------------------------------------------
#
# Project created by QtCreator 2018-03-19T20:30:56
#
#-------------------------------------------------
QT       += core gui network serialport
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_tcp
TEMPLATE = app


SOURCES += main.cpp\
    netmodel.cpp \
    first.cpp \
    sqlmodel.cpp \
    serialmodel.cpp \
    test.cpp \
    serialmodel_c.cpp \
    mythread.cpp \
    top.cpp \
    mybutton.cpp \
    winbutton.cpp \
    windowdownload.cpp \
    windowmain.cpp \
    windownet.cpp \
    windowrule.cpp \
    windowselectforid.cpp

HEADERS  += \
    netmodel.h \
    first.h \
    sqlmodel.h \
    allstruct.h \
    serialmodel.h \
    test.h \
    serialmodel_c.h \
    mythread.h \
    top.h \
    mybutton.h \
    winbutton.h \
    windowdownload.h \
    windowmain.h \
    windownet.h \
    windowrule.h \
    windowselectforid.h

FORMS    += mainwindow.ui \
    netwindow.ui \
    first.ui \
    selectforid.ui \
    test.ui \
    top.ui \
    winbutton.ui \
    downloadwindow.ui \
    rulewindow.ui
