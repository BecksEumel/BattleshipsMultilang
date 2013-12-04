#-------------------------------------------------
#
# Project created by QtCreator 2013-11-28T22:04:15
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SeaBattle
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    communit.cpp \
    mapgenerator.cpp \
    hc.cpp \
    ship.cpp \
    statistictracker.cpp \
    unionjack.cpp

HEADERS += \
    communit.h \
    mapgenerator.h \
    hc.h \
    ship.h \
    statistictracker.h \
    shottarget.h \
    unionjack.h \
    ishotstrategy.h
