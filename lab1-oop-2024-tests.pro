QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_note.cpp \
    ../lab1-oop-2024/note.cpp \
    ../lab1-oop-2024/task.cpp

HEADERS += \
    ../lab1-oop-2024/note.h \
    ../lab1-oop-2024/task.h
