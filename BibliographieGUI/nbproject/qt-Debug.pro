# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = BibliographieGUI
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += AjoutJournalInterface.cpp AjoutOuvrageInterface.cpp BibliographieInterface.cpp SupprimerReference.cpp main.cpp
HEADERS += AjoutJournalInterface.h AjoutOuvrageInterface.h BibliographieInterface.h SupprimerReference.h
FORMS += AjoutJournalInterface.ui AjoutOuvrageInterface.ui BibliographieInterface.ui SupprimerReference.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++-10
DEFINES += 
INCLUDEPATH += ../source 
LIBS += ../source/dist/Debug/GNU-Linux/libsource.a  
