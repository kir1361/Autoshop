QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH +=

SOURCES += \
    carform.cpp \
    congratulationsdialog.cpp \
    dialogaddcar2.cpp \
    dialogpurchasecar.cpp \
    logodialog.cpp \
    mainwindow.cpp \
    main.cpp \

HEADERS += \
    carform.h \
    congratulationsdialog.h \
    dialogaddcar2.h \
    dialogpurchasecar.h \
    logodialog.h \
    mainwindow.h \

FORMS += \
    carform.ui \
    congratulationsdialog.ui \
    dialogaddcar2.ui \
    dialogpurchasecar.ui \
    logodialog.ui \
    mainwindow.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-AutoShop-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/AutoShop.exe
