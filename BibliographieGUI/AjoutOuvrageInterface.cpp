/**
 * \file AjoutOuvrageInterface
 * \brief Implementation de la classe AjoutOuvrageInterface qui gère les informations saisies dans la fenêtre d'ajout de l'ouvrage
 * \date 20 décembre 2022
 */
#include "AjoutOuvrageInterface.h"
#include <QMessageBox>


AjoutOuvrageInterface::AjoutOuvrageInterface ()
{
  widget.setupUi (this);
}


AjoutOuvrageInterface::~AjoutOuvrageInterface () { }


QString
AjoutOuvrageInterface::reqAuteurs () const
{
  return widget.auteurTxt->text ();
}


QString
AjoutOuvrageInterface::reqTitre () const
{
  return widget.titreTxt->text ();
}


QString
AjoutOuvrageInterface::reqVilleEdition () const
{
  return widget.villeEditionTxt->text ();
}


QString
AjoutOuvrageInterface::reqEditeur () const
{
  return widget.editeurTxt->text ();
}


QString
AjoutOuvrageInterface::reqCodeIsbn () const
{
  return widget.codeIsbnTxt->text ();
}


int
AjoutOuvrageInterface::reqAnneeEdition () const
{
  return widget.anneeEditionSpn->value ();
}


void
AjoutOuvrageInterface::validationSaisieFormulaire ()
{

  //Auteurs
  if (reqAuteurs ().isEmpty ())
    {
      QString message ("Le nom du ou des auteurs ne peut être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (!util::validerFormatNom (reqAuteurs ().toStdString ()))
    {
      QString message ("Le nom du ou des auteurs saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  //Titre
  if (reqTitre ().isEmpty ())
    {
      QString message ("Le titre ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  //Ville d'édition
  if (reqVilleEdition ().isEmpty ())
    {
      QString message ("La ville d'édition ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (!util::validerFormatNom (reqVilleEdition ().toStdString ()))
    {
      QString message ("La ville d'édition saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }


  //Editeur
  if (reqEditeur ().isEmpty ())
    {
      QString message ("Le nom de l'éditeur ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (!util::validerFormatNom (reqEditeur ().toStdString ()))
    {
      QString message ("Le nom d'éditeur saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  //Annee d'édition
  if (reqAnneeEdition () <= 0)
    {
      QString message ("L'année d'édition doit être strictement plus grande que 0");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  //Code ISBN
  if (reqCodeIsbn ().isEmpty ())
    {
      QString message ("Le code ISBN ne peut pas être vide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  if (!util::validerCodeIsbn (reqCodeIsbn ().toStdString ()))
    {
      QString message ("Le code ISBN saisie n'est pas valide");
      QMessageBox::information (this, "ERREUR!", message);
      return;
    }

  accept ();
}
