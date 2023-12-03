/********************************************************************************
** Form generated from reading UI file 'SupprimerReference.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREFERENCE_H
#define UI_SUPPRIMERREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SupprimerReference
{
public:
    QLabel *label;
    QLineEdit *Identifiant;
    QPushButton *ok;

    void setupUi(QDialog *SupprimerReference)
    {
        if (SupprimerReference->objectName().isEmpty())
            SupprimerReference->setObjectName(QString::fromUtf8("SupprimerReference"));
        SupprimerReference->resize(364, 170);
        SupprimerReference->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 0, 0);\n"
"font: 75 14pt \"Bitstream Charter\";\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Lohit Telugu\";"));
        label = new QLabel(SupprimerReference);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 81, 16));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        Identifiant = new QLineEdit(SupprimerReference);
        Identifiant->setObjectName(QString::fromUtf8("Identifiant"));
        Identifiant->setGeometry(QRect(90, 40, 191, 31));
        Identifiant->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        ok = new QPushButton(SupprimerReference);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(140, 110, 51, 21));
        ok->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));

        retranslateUi(SupprimerReference);
        QObject::connect(ok, SIGNAL(clicked()), SupprimerReference, SLOT(ValidationEntree()));

        QMetaObject::connectSlotsByName(SupprimerReference);
    } // setupUi

    void retranslateUi(QDialog *SupprimerReference)
    {
        SupprimerReference->setWindowTitle(QApplication::translate("SupprimerReference", "SupprimerReference", nullptr));
        label->setText(QApplication::translate("SupprimerReference", "Identifiant:", nullptr));
        ok->setText(QApplication::translate("SupprimerReference", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SupprimerReference: public Ui_SupprimerReference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREFERENCE_H
