#-------------------------------------------------
#
# Project created by QtCreator 2017-10-17T21:00:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Enigma_definitivo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plugboard.cpp \
    assign.cpp \
    rotor1.cpp \
    rotor2.cpp \
    rotor3.cpp \
    reflector.cpp \
    rotor3_bck.cpp \
    rotor2_bck.cpp \
    rotor1_bck.cpp \
    back_plugboard.cpp \
    control.cpp

HEADERS  += mainwindow.h \
    plugboard.h \
    assign.h \
    rotor1.h \
    rotor2.h \
    rotor3.h \
    reflector.h \
    rotor3_bck.h \
    rotor2_bck.h \
    rotor1_bck.h \
    back_plugboard.h \
    control.h

FORMS    += mainwindow.ui
