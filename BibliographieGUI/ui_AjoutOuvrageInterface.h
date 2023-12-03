/********************************************************************************
** Form generated from reading UI file 'AjoutOuvrageInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTOUVRAGEINTERFACE_H
#define UI_AJOUTOUVRAGEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AjoutOuvrageInterface
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *auteurTxt;
    QLineEdit *titreTxt;
    QLineEdit *villeEditionTxt;
    QLineEdit *editeurTxt;
    QLineEdit *codeIsbnTxt;
    QPushButton *btnOK;
    QSpinBox *anneeEditionSpn;

    void setupUi(QDialog *AjoutOuvrageInterface)
    {
        if (AjoutOuvrageInterface->objectName().isEmpty())
            AjoutOuvrageInterface->setObjectName(QString::fromUtf8("AjoutOuvrageInterface"));
        AjoutOuvrageInterface->resize(815, 672);
        AjoutOuvrageInterface->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(AjoutOuvrageInterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 130, 81, 16));
        label->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        label_2 = new QLabel(AjoutOuvrageInterface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 190, 61, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        label_3 = new QLabel(AjoutOuvrageInterface);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 310, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        label_4 = new QLabel(AjoutOuvrageInterface);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 250, 111, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        label_5 = new QLabel(AjoutOuvrageInterface);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 370, 131, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        label_6 = new QLabel(AjoutOuvrageInterface);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 430, 101, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        label_7 = new QLabel(AjoutOuvrageInterface);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 40, 321, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman [UKWN]"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(7);
        font.setStrikeOut(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 italic 16pt \"URW Bookman [UKWN]\";"));
        auteurTxt = new QLineEdit(AjoutOuvrageInterface);
        auteurTxt->setObjectName(QString::fromUtf8("auteurTxt"));
        auteurTxt->setGeometry(QRect(250, 120, 451, 31));
        titreTxt = new QLineEdit(AjoutOuvrageInterface);
        titreTxt->setObjectName(QString::fromUtf8("titreTxt"));
        titreTxt->setGeometry(QRect(250, 180, 451, 31));
        villeEditionTxt = new QLineEdit(AjoutOuvrageInterface);
        villeEditionTxt->setObjectName(QString::fromUtf8("villeEditionTxt"));
        villeEditionTxt->setGeometry(QRect(250, 240, 451, 31));
        editeurTxt = new QLineEdit(AjoutOuvrageInterface);
        editeurTxt->setObjectName(QString::fromUtf8("editeurTxt"));
        editeurTxt->setGeometry(QRect(250, 300, 451, 31));
        codeIsbnTxt = new QLineEdit(AjoutOuvrageInterface);
        codeIsbnTxt->setObjectName(QString::fromUtf8("codeIsbnTxt"));
        codeIsbnTxt->setGeometry(QRect(250, 420, 451, 31));
        btnOK = new QPushButton(AjoutOuvrageInterface);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(410, 500, 90, 28));
        btnOK->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127);\n"
"color: rgb(0, 0, 0);"));
        anneeEditionSpn = new QSpinBox(AjoutOuvrageInterface);
        anneeEditionSpn->setObjectName(QString::fromUtf8("anneeEditionSpn"));
        anneeEditionSpn->setGeometry(QRect(250, 360, 451, 26));
        anneeEditionSpn->setMaximum(5000);

        retranslateUi(AjoutOuvrageInterface);
        QObject::connect(btnOK, SIGNAL(clicked()), AjoutOuvrageInterface, SLOT(validationSaisieFormulaire()));

        QMetaObject::connectSlotsByName(AjoutOuvrageInterface);
    } // setupUi

    void retranslateUi(QDialog *AjoutOuvrageInterface)
    {
        AjoutOuvrageInterface->setWindowTitle(QApplication::translate("AjoutOuvrageInterface", "AjoutOuvrageInterface", nullptr));
        label->setText(QApplication::translate("AjoutOuvrageInterface", "Auteur(s) ", nullptr));
        label_2->setText(QApplication::translate("AjoutOuvrageInterface", "Titre", nullptr));
        label_3->setText(QApplication::translate("AjoutOuvrageInterface", "\303\211diteur", nullptr));
        label_4->setText(QApplication::translate("AjoutOuvrageInterface", "Ville d'\303\251dition", nullptr));
        label_5->setText(QApplication::translate("AjoutOuvrageInterface", "Ann\303\251e d'\303\251dition", nullptr));
        label_6->setText(QApplication::translate("AjoutOuvrageInterface", "Code ISBN", nullptr));
        label_7->setText(QApplication::translate("AjoutOuvrageInterface", "Formulaire d'ajout de l'ouvrage", nullptr));
        btnOK->setText(QApplication::translate("AjoutOuvrageInterface", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutOuvrageInterface: public Ui_AjoutOuvrageInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTOUVRAGEINTERFACE_H
