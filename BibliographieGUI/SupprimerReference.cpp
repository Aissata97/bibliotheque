/**
 * \file SupprimerReference.cpp
 * \brief Implémentation de la classe SupprimerReference
 * \date 22 décembre 2022
 */

#include "SupprimerReference.h"
#include <QMessageBox>


SupprimerReference::SupprimerReference ()
{
  widget.setupUi (this);
}


SupprimerReference::~SupprimerReference () { }


QString
SupprimerReference::reqIdentifiant () const
{
  return widget.Identifiant->text ();
}


void
SupprimerReference::ValidationEntree ()
{
  QMessageBox messageBox;
  messageBox.setWindowTitle ("Confirmation");
  messageBox.setText ("Êtes-vous sûre de vouloir supprimer cette reference ?");
  messageBox.setIcon (QMessageBox::Warning);
  messageBox.setStandardButtons (QMessageBox::Yes | QMessageBox::No);
  messageBox.setButtonText (QMessageBox::Yes, tr ("Oui"));
  messageBox.setButtonText (QMessageBox::No, tr ("Non"));
  int choixMsgBox = messageBox.exec ();

  switch (choixMsgBox)
    {
      case QMessageBox::Yes:
        //Si on clique sur Oui
        if (reqIdentifiant ().isEmpty ())
          {
            QString message ("L'identifiant ne doit pas etre vide.");
            QMessageBox::information (this, "ERREUR", message);
            return;
          }
        accept ();
        break;
      case QMessageBox::No:
        break;
      default:
        break;
    }
}