#-------------------------------------------------
#
# Project created by QtCreator 2016-01-22T15:34:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = La_Ruche
TEMPLATE = app


SOURCES += main.cpp\
    Graphics/mainwindow.cpp \
    Objects/abeille.cpp \
    Objects/ruche.cpp \
    Objects/fleur.cpp \
    Objects/freulon.cpp

HEADERS  += Graphics/mainwindow.h \
    Objects/abeille.h \
    Objects/objet.h \
    Objects/ruche.h \
    Objects/fleur.h \
    Objects/freulon.h
