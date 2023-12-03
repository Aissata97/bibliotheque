/********************************************************************************
** Form generated from reading UI file 'AjoutJournalInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTJOURNALINTERFACE_H
#define UI_AJOUTJOURNALINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AjoutJournalInterface
{
public:
    QLineEdit *nom;
    QLineEdit *titre;
    QPushButton *sauvegarder;
    QLineEdit *auteurs;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *identifiant;
    QPushButton *annuler;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *annee;
    QLabel *label_4;
    QSpinBox *volume;
    QSpinBox *numero;
    QSpinBox *page;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *AjoutJournalInterface)
    {
        if (AjoutJournalInterface->objectName().isEmpty())
            AjoutJournalInterface->setObjectName(QString::fromUtf8("AjoutJournalInterface"));
        AjoutJournalInterface->resize(849, 692);
        AjoutJournalInterface->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 0, 0);\n"
"font: 75 14pt \"Bitstream Charter\";\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt \"Lohit Telugu\";"));
        nom = new QLineEdit(AjoutJournalInterface);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(250, 340, 501, 28));
        nom->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        titre = new QLineEdit(AjoutJournalInterface);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(250, 160, 501, 28));
        titre->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        sauvegarder = new QPushButton(AjoutJournalInterface);
        sauvegarder->setObjectName(QString::fromUtf8("sauvegarder"));
        sauvegarder->setGeometry(QRect(300, 580, 90, 28));
        sauvegarder->setStyleSheet(QString::fromUtf8("color:rgb(8, 8, 8)"));
        auteurs = new QLineEdit(AjoutJournalInterface);
        auteurs->setObjectName(QString::fromUtf8("auteurs"));
        auteurs->setGeometry(QRect(250, 100, 501, 28));
        auteurs->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        label = new QLabel(AjoutJournalInterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 110, 81, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        label_2 = new QLabel(AjoutJournalInterface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 170, 58, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        label_6 = new QLabel(AjoutJournalInterface);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 410, 71, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        identifiant = new QLineEdit(AjoutJournalInterface);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(250, 280, 501, 28));
        identifiant->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        annuler = new QPushButton(AjoutJournalInterface);
        annuler->setObjectName(QString::fromUtf8("annuler"));
        annuler->setGeometry(QRect(430, 580, 90, 28));
        annuler->setStyleSheet(QString::fromUtf8("color:rgb(2, 2, 2)"));
        label_3 = new QLabel(AjoutJournalInterface);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 230, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        label_5 = new QLabel(AjoutJournalInterface);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 290, 101, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        annee = new QSpinBox(AjoutJournalInterface);
        annee->setObjectName(QString::fromUtf8("annee"));
        annee->setGeometry(QRect(250, 220, 131, 26));
        annee->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        annee->setMaximum(5000);
        label_4 = new QLabel(AjoutJournalInterface);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 350, 131, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        volume = new QSpinBox(AjoutJournalInterface);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(250, 400, 131, 26));
        volume->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        volume->setMaximum(10000);
        numero = new QSpinBox(AjoutJournalInterface);
        numero->setObjectName(QString::fromUtf8("numero"));
        numero->setGeometry(QRect(250, 460, 131, 26));
        numero->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        numero->setMaximum(10000);
        page = new QSpinBox(AjoutJournalInterface);
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(250, 510, 131, 26));
        page->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 11pt \"Ubuntu\";"));
        page->setMaximum(10000);
        label_7 = new QLabel(AjoutJournalInterface);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 460, 91, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        label_8 = new QLabel(AjoutJournalInterface);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 510, 58, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25 italic 14pt \"Ubuntu\";"));
        label_9 = new QLabel(AjoutJournalInterface);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 30, 311, 41));
        label_9->setStyleSheet(QString::fromUtf8("font: 25 italic 16pt \"URW Bookman [UKWN]\";"));

        retranslateUi(AjoutJournalInterface);
        QObject::connect(annuler, SIGNAL(clicked()), AjoutJournalInterface, SLOT(close()));
        QObject::connect(sauvegarder, SIGNAL(clicked()), AjoutJournalInterface, SLOT(valideEnregistrement()));

        QMetaObject::connectSlotsByName(AjoutJournalInterface);
    } // setupUi

    void retranslateUi(QDialog *AjoutJournalInterface)
    {
        AjoutJournalInterface->setWindowTitle(QApplication::translate("AjoutJournalInterface", "AjoutJournalInterface", nullptr));
        sauvegarder->setText(QApplication::translate("AjoutJournalInterface", "OK", nullptr));
        label->setText(QApplication::translate("AjoutJournalInterface", "Auteur(s)", nullptr));
        label_2->setText(QApplication::translate("AjoutJournalInterface", "Titre", nullptr));
        label_6->setText(QApplication::translate("AjoutJournalInterface", "Volume", nullptr));
        annuler->setText(QApplication::translate("AjoutJournalInterface", "Annuler", nullptr));
        label_3->setText(QApplication::translate("AjoutJournalInterface", "Annee", nullptr));
        label_5->setText(QApplication::translate("AjoutJournalInterface", "Code ISSN", nullptr));
        label_4->setText(QApplication::translate("AjoutJournalInterface", "Nom du journal", nullptr));
        label_7->setText(QApplication::translate("AjoutJournalInterface", "Numero", nullptr));
        label_8->setText(QApplication::translate("AjoutJournalInterface", "Page", nullptr));
        label_9->setText(QApplication::translate("AjoutJournalInterface", "Formulaire d'ajout du journal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutJournalInterface: public Ui_AjoutJournalInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTJOURNALINTERFACE_H
