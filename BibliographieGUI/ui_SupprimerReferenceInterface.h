/********************************************************************************
** Form generated from reading UI file 'SupprimerReferenceInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREFERENCEINTERFACE_H
#define UI_SUPPRIMERREFERENCEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SupprimerReferenceInterface
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *Identifiant;
    QPushButton *ok;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SupprimerReferenceInterface)
    {
        if (SupprimerReferenceInterface->objectName().isEmpty())
            SupprimerReferenceInterface->setObjectName(QString::fromUtf8("SupprimerReferenceInterface"));
        SupprimerReferenceInterface->resize(476, 256);
        centralwidget = new QWidget(SupprimerReferenceInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 131, 21));
        Identifiant = new QLineEdit(centralwidget);
        Identifiant->setObjectName(QString::fromUtf8("Identifiant"));
        Identifiant->setGeometry(QRect(110, 60, 271, 31));
        ok = new QPushButton(centralwidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(180, 140, 71, 21));
        SupprimerReferenceInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SupprimerReferenceInterface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 476, 22));
        SupprimerReferenceInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(SupprimerReferenceInterface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SupprimerReferenceInterface->setStatusBar(statusbar);

        retranslateUi(SupprimerReferenceInterface);

        QMetaObject::connectSlotsByName(SupprimerReferenceInterface);
    } // setupUi

    void retranslateUi(QMainWindow *SupprimerReferenceInterface)
    {
        SupprimerReferenceInterface->setWindowTitle(QApplication::translate("SupprimerReferenceInterface", "SupprimerReferenceInterface", nullptr));
        label->setText(QApplication::translate("SupprimerReferenceInterface", "Identifiant :", nullptr));
        ok->setText(QApplication::translate("SupprimerReferenceInterface", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SupprimerReferenceInterface: public Ui_SupprimerReferenceInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREFERENCEINTERFACE_H
