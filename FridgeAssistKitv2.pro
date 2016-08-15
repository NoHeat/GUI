#-------------------------------------------------
#
# Project created by QtCreator 2016-08-14T18:12:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FridgeAssistKitv2
TEMPLATE = app


SOURCES += main.cpp\
        welcomescreen.cpp \
    actionmenu.cpp \
    inventorychange.cpp \
    custominput.cpp \
    shoppinglist.cpp

HEADERS  += welcomescreen.h \
    actionmenu.h \
    inventorychange.h \
    custominput.h \
    shoppinglist.h

FORMS    += welcomescreen.ui \
    actionmenu.ui \
    inventorychange.ui \
    custominput.ui \
    shoppinglist.ui

RESOURCES += \
    imagesandicons.qrc
