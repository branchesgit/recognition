TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += /usr/local/include \
               /usr/local/include/opencv4 \
               /home/branches/clibs/jsoncpp/include/json \
               /home/branches/clibs/jsoncpp/src/lib_json


LIBS += -L/usr/local/lib \
        /home/branches/clibs/jsoncpp/build/lib/libjsoncpp.so \
        /usr/local/lib/libopencv_* \
        -lopencv_core -lopencv_imgcodecs -lopencv_highgui



SOURCES += main.cpp \
    utils/file.cpp \
    utils/boundary.cpp

HEADERS += \
    utils/file.h \
    utils/boundary.h
