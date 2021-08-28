QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    app_resources.qrc

DISTFILES += \
    app_icons/add.png \
    app_icons/all.png \
    app_icons/back.png \
    app_icons/bpp.png \
    app_icons/clear.png \
    app_icons/exit.png \
    app_icons/exit_32.png \
    app_icons/help.png \
    app_icons/home.png \
    app_icons/next.png \
    app_icons/package.png \
    app_icons/play.png \
    app_icons/previous.png \
    app_icons/refresh.png \
    app_icons/settings.png \
    app_icons/zoom_in.png \
    app_icons/zoom_out.png \
    app_icons/zoom_to_fit.png
