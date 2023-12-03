/**
 * \file  AjoutOuvrageInterface.h
 * \brief  Prototype de la classe AjoutOuvrageInterface qui va gerer les ajouts faits à partir de l'interface d'ajout de l'ouvrage
 * \date 20 décembre 2022
 */
#ifndef _AJOUTOUVRAGEINTERFACE_H
#define _AJOUTOUVRAGEINTERFACE_H

#include "ui_AjoutOuvrageInterface.h"
#include "validationFormat.h"

class AjoutOuvrageInterface : public QDialog
{
  Q_OBJECT
public:
  AjoutOuvrageInterface ();
  virtual ~AjoutOuvrageInterface ();

  QString reqAuteurs () const;
  QString reqTitre () const;
  QString reqVilleEdition () const;
  QString reqEditeur () const;
  QString reqCodeIsbn () const;
  int reqAnneeEdition () const;

private slots:
  void validationSaisieFormulaire ();

private:
  Ui::AjoutOuvrageInterface widget;
};

#endif /* _AJOUTOUVRAGEINTERFACE_H */
