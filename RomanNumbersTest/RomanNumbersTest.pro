QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG += c++17
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_romannumberstest.cpp \
    ../RomanNumbers/RomanNumbers.cpp

HEADERS += \
    ../RomanNumbers/RomanNumbers.h
