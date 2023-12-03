/**
 * \file   AjoutJournalInterface.h
 * \brief  Prototype de la classe AjoutJournalInterface qui gère l'ajout des journaux
 */

#ifndef _AJOUTJOURNALINTERFACE_H
#define _AJOUTJOURNALINTERFACE_H

#include "ui_AjoutJournalInterface.h"
#include "Journal.h"

class AjoutJournalInterface : public QDialog
{
  Q_OBJECT
public:
  AjoutJournalInterface ();
  virtual ~AjoutJournalInterface ();

  QString reqAuteurs () const;
  QString reqTitre () const;
  int reqAnnee () const;
  QString reqIdentifiant () const;
  QString reqNom () const;
  int reqVolume () const;
  int reqNumero () const;
  int reqPage () const;

private slots:
  void valideEnregistrement ();


private:
  Ui::AjoutJournalInterface widget;
};

#endif /* _AJOUTJOURNALINTERFACE_H */