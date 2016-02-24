QT += core
QT -= gui

CONFIG += c++11

TARGET = FindSmallerPrimes
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    calculateprimes.cpp \
    terminalinputoutput.cpp

HEADERS += \
    calculateprimes.h \
    terminalinputoutput.h
