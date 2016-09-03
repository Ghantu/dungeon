TEMPLATE = app
CONFIG += c++11
QT += testlib

HEADERS += \
    src/model/adventurer.h \
    test/model/testadventurer.h \
    test/testexecutor.h \
    src/model/characterstock.h \
    src/model/characterclass.h \
    test/model/testcharacterstock.h \
    test/model/testcharacterclass.h

SOURCES += \
    src/model/adventurer.cpp \
    src/main.cpp \
    test/model/testadventurer.cpp \
    test/testexecutor.cpp \
    src/model/characterstock.cpp \
    src/model/characterclass.cpp \
    test/model/testcharacterstock.cpp \
    test/model/testcharacterclass.cpp
