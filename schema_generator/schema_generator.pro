#-------------------------------------------------
#
# Project created by QtCreator 2016-08-02T13:17:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = schema_generator
TEMPLATE = app


SOURCES += main.cpp\
        app.cpp \
    md5.cpp

HEADERS  += app.h \
    md5.h \
    generator.h

FORMS    += app.ui

RESOURCES += \
    res.qrc

DISTFILES += \
    app.rc \
    icon.ico

RC_FILE += app.rc
