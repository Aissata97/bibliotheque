/**
 * \file BibliographieInterface.h
 * \brief Prototype de la classe BibliographieInterface qui gère les actions sur notre fenêtre principale
 * \date 20 décembre 2022
 */

#ifndef _BIBLIOGRAPHIEINTERFACE_H
#define _BIBLIOGRAPHIEINTERFACE_H

#include "ui_BibliographieInterface.h"
#include "Bibliographie.h"
#include "ContratException.h"
#include "Bibliographie.h"

class BibliographieInterface : public QMainWindow
{
  Q_OBJECT
public:
  BibliographieInterface (QWidget *parent = 0);
  virtual ~BibliographieInterface ();

private slots:
  //Liste des actions
  void dialogAjoutJournal ();
  void dialogAjoutOuvrage ();
  void dialogSupprimerReference ();

private:
  Ui::BibliographieInterface widget;
  biblio::Bibliographie m_biblio;
};

#endif /* _BIBLIOGRAPHIEINTERFACE_H */
