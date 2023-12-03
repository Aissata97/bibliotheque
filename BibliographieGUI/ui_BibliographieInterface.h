/********************************************************************************
** Form generated from reading UI file 'BibliographieInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOGRAPHIEINTERFACE_H
#define UI_BIBLIOGRAPHIEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibliographieInterface
{
public:
    QAction *actionQuitter_l_application;
    QAction *actionJournal;
    QAction *actionOuvrage;
    QAction *actionSupprimer_une_reference;
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *listeReference;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAjouter_une_reference;

    void setupUi(QMainWindow *BibliographieInterface)
    {
        if (BibliographieInterface->objectName().isEmpty())
            BibliographieInterface->setObjectName(QString::fromUtf8("BibliographieInterface"));
        BibliographieInterface->setEnabled(true);
        BibliographieInterface->resize(1040, 673);
        QFont font;
        font.setFamily(QString::fromUtf8("Lohit Telugu"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        BibliographieInterface->setFont(font);
        BibliographieInterface->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 0, 0);\n"
"font: 75 14pt \"Bitstream Charter\";\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Lohit Telugu\";"));
        actionQuitter_l_application = new QAction(BibliographieInterface);
        actionQuitter_l_application->setObjectName(QString::fromUtf8("actionQuitter_l_application"));
        actionJournal = new QAction(BibliographieInterface);
        actionJournal->setObjectName(QString::fromUtf8("actionJournal"));
        actionOuvrage = new QAction(BibliographieInterface);
        actionOuvrage->setObjectName(QString::fromUtf8("actionOuvrage"));
        actionSupprimer_une_reference = new QAction(BibliographieInterface);
        actionSupprimer_une_reference->setObjectName(QString::fromUtf8("actionSupprimer_une_reference"));
        centralwidget = new QWidget(BibliographieInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 451, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("TeX Gyre Pagella"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 75 18pt \"TeX Gyre Pagella\";"));
        listeReference = new QTextEdit(centralwidget);
        listeReference->setObjectName(QString::fromUtf8("listeReference"));
        listeReference->setGeometry(QRect(80, 60, 821, 501));
        listeReference->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        listeReference->setReadOnly(true);
        BibliographieInterface->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BibliographieInterface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BibliographieInterface->setStatusBar(statusbar);
        menubar = new QMenuBar(BibliographieInterface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1040, 55));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAjouter_une_reference = new QMenu(menuMenu);
        menuAjouter_une_reference->setObjectName(QString::fromUtf8("menuAjouter_une_reference"));
        BibliographieInterface->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuAjouter_une_reference->menuAction());
        menuMenu->addAction(actionSupprimer_une_reference);
        menuMenu->addAction(actionQuitter_l_application);
        menuAjouter_une_reference->addAction(actionJournal);
        menuAjouter_une_reference->addAction(actionOuvrage);

        retranslateUi(BibliographieInterface);
        QObject::connect(actionQuitter_l_application, SIGNAL(triggered()), BibliographieInterface, SLOT(close()));
        QObject::connect(actionOuvrage, SIGNAL(triggered()), BibliographieInterface, SLOT(dialogAjoutOuvrage()));
        QObject::connect(actionSupprimer_une_reference, SIGNAL(triggered()), BibliographieInterface, SLOT(dialogSupprimerReference()));
        QObject::connect(actionJournal, SIGNAL(triggered()), BibliographieInterface, SLOT(dialogAjoutJournal()));

        QMetaObject::connectSlotsByName(BibliographieInterface);
    } // setupUi

    void retranslateUi(QMainWindow *BibliographieInterface)
    {
        BibliographieInterface->setWindowTitle(QApplication::translate("BibliographieInterface", "BibliographieInterface", nullptr));
        actionQuitter_l_application->setText(QApplication::translate("BibliographieInterface", "Quitter l'application", nullptr));
        actionJournal->setText(QApplication::translate("BibliographieInterface", "Journal", nullptr));
        actionOuvrage->setText(QApplication::translate("BibliographieInterface", "Ouvrage", nullptr));
        actionSupprimer_une_reference->setText(QApplication::translate("BibliographieInterface", "Supprimer une reference", nullptr));
        label->setText(QApplication::translate("BibliographieInterface", "Liste des r\303\251f\303\251rences dans la biblioth\303\250que", nullptr));
        menuMenu->setTitle(QApplication::translate("BibliographieInterface", "Menu", nullptr));
        menuAjouter_une_reference->setTitle(QApplication::translate("BibliographieInterface", "Ajouter une reference", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibliographieInterface: public Ui_BibliographieInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOGRAPHIEINTERFACE_H
