/**
 * \file  SupprimerReference.h
 * \brief Prototype de la classe SupprimerReference qui gère la suppression d'une reference
 * \date on 22 décembre 2022
 */

#ifndef _SUPPRIMERREFERENCE_H
#define _SUPPRIMERREFERENCE_H

#include "ui_SupprimerReference.h"
#include"Bibliographie.h"

class SupprimerReference : public QDialog
{
  Q_OBJECT
public:
  SupprimerReference ();
  virtual ~SupprimerReference ();

  QString reqIdentifiant () const;

private slots:
  void ValidationEntree ();

private:
  Ui::SupprimerReference widget;
};

#endif /* _SUPPRIMERREFERENCE_H */
