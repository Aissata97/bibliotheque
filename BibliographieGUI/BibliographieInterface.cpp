/**
 * \file BibliographieInterface
 * \brief Implémentation de la classe BibliographieInterface, qui gère les actions sur notre fenêtre principale
 * \date 19 decembre 2022
 */

#include "BibliographieInterface.h"
#include "AjoutOuvrageInterface.h"
#include "Ouvrage.h"
#include "SupprimerReference.h"
#include <QMessageBox>
#include "AjoutJournalInterface.h"


using namespace biblio;
using namespace std;


BibliographieInterface::BibliographieInterface (QWidget *parent)
: QMainWindow (parent), m_biblio ("Notre bibliographie")
{
  widget.setupUi (this);
}


BibliographieInterface::~BibliographieInterface () { }


void
BibliographieInterface::dialogAjoutJournal ()
{
  AjoutJournalInterface journalInterface;
  if (journalInterface.exec ())
    {
      try
        {
          Journal newJournal (journalInterface.reqAuteurs ().toStdString (),
                              journalInterface.reqTitre ().toStdString (),
                              journalInterface.reqAnnee (),
                              journalInterface.reqIdentifiant ().toStdString (),
                              journalInterface.reqNom ().toStdString (),
                              journalInterface.reqVolume (),
                              journalInterface.reqNumero (),
                              journalInterface.reqPage ());

          m_biblio.ajouterReference (newJournal);
        }
      catch (ReferenceDejaPresenteException &e)
        {
          QString message = "Un journal est déjà présent avec cet identifiant dans la bibliothèque \n";
          message.append (e.what ());
          QMessageBox::warning (this, "Identifiant déjà présent", message);
        }
      catch (PreconditionException &e)
        {
          QString message = "Les informations du journal ne sont pas correctes \n";
          QMessageBox::warning (this, "Entrez un journal valide !!", message);
        }
    }
  widget.listeReference->setText (m_biblio.reqBibliographieFormate ().c_str ());

}


void
BibliographieInterface::dialogAjoutOuvrage ()
{
  AjoutOuvrageInterface ouvrageInterface;
  if (ouvrageInterface.exec ())
    {
      try
        {
          Ouvrage newOuvrage (ouvrageInterface.reqAuteurs ().toStdString (),
                              ouvrageInterface.reqTitre ().toStdString (),
                              ouvrageInterface.reqAnneeEdition (),
                              ouvrageInterface.reqCodeIsbn ().toStdString (),
                              ouvrageInterface.reqEditeur ().toStdString (),
                              ouvrageInterface.reqVilleEdition ().toStdString ());

          m_biblio.ajouterReference (newOuvrage);
        }
      catch (ReferenceDejaPresenteException &e)
        {
          QString message = "Un ouvrage est déjà présent avec cet identifiant dans la bibliothèque \n";
          message.append (e.what ());
          QMessageBox::warning (this, "Identifiant déjà présent", message);
        }
      catch (PreconditionException &e)
        {
          QString message = "Les informations sur l'ouvrage ne sont pas correctes \n";
          QMessageBox::warning (this, "Entrez un ouvrage valide !!", message);
        }
    }
  widget.listeReference->setText (m_biblio.reqBibliographieFormate ().c_str ());
}


void
BibliographieInterface::dialogSupprimerReference ()
{
  SupprimerReference Supprime;
  if (Supprime.exec ())
    {
      try
        {
          m_biblio.supprimerReference (Supprime.reqIdentifiant ().toStdString ());
        }
      catch (ReferenceAbsenteException& e)
        {
          QString message = (e.what ());
          QMessageBox::information (this, "ERREUR", message);
        }
      widget.listeReference->setText (m_biblio.reqBibliographieFormate ().c_str ());
    }
}
