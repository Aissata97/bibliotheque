/**
 * \file AjoutJournalInterface.cpp
 * \brief Implementation de la classe AjoutJournalInterface
 */

#include "QMessageBox"
#include "validationFormat.h"
#include "AjoutJournalInterface.h"


AjoutJournalInterface::AjoutJournalInterface ()
{
  widget.setupUi (this);
}


AjoutJournalInterface::~AjoutJournalInterface () { }


QString
AjoutJournalInterface::reqAuteurs () const
{
  return widget.auteurs->text ();
}


QString
AjoutJournalInterface::reqTitre () const
{
  return widget.titre->text ();
}


int
AjoutJournalInterface::reqAnnee () const
{
  return widget.annee->value ();
}


QString
AjoutJournalInterface::reqIdentifiant () const
{
  return widget.identifiant->text ();
}


QString
AjoutJournalInterface::reqNom () const
{
  return widget.nom->text ();
}


int
AjoutJournalInterface::reqVolume () const
{
  return widget.volume->value ();
}


int
AjoutJournalInterface::reqNumero () const
{
  return widget.numero->value ();
}


int
AjoutJournalInterface::reqPage () const
{
  return widget.page->value ();
}


void
AjoutJournalInterface::valideEnregistrement ()
{

  if (reqAuteurs ().isEmpty ())
    {
      QString message ("Le nom du ou des auteurs ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }
  if (!util::validerFormatNom (reqAuteurs ().toStdString ()))
    {
      QString message ("Le nom du ou des auteurs saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }
  if (reqTitre ().isEmpty ())
    {
      QString message ("Le titre ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }
  if (reqAnnee () <= 0)
    {
      QString message ("L'année d'édition doit être strictement plus grande que 0");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (reqIdentifiant ().isEmpty ())
    {
      QString message ("Le code ISSN ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (!util::validerCodeIssn (reqIdentifiant ().toStdString ()))
    {
      QString message ("Le code ISSN saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (reqNom ().isEmpty ())
    {
      QString message ("Le nom du journal ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }
  if (!util::validerFormatNom (reqNom ().toStdString ()))
    {
      QString message ("Le nom du journal saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (reqVolume () <= 0)
    {
      QString message ("Le volume doit être strictement plus grand que 0");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (reqNumero () <= 0)
    {
      QString message ("Le numéro du journal doit être strictement plus grand que 0");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }
  if (reqPage () <= 0)
    {
      QString message ("La page doit être strictement plus grand que 0");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }
  else
    {
      accept ();
    }
}