QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    characters/stat.cpp \
    main.cpp \
    mainwindow.cpp \
    widgets/statdisplay.cpp \
    widgets/statlistdisplay.cpp

HEADERS += \
    characters/stat.h \
    mainwindow.h \
    widgets/statdisplay.h \
    widgets/statlistdisplay.h

FORMS += \
    mainwindow.ui \
    widgets/statdisplay.ui \
    widgets/statlistdisplay.ui

TRANSLATIONS += \
    TVB_en_150.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
