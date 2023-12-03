/**
 * \file   Bibliographie.cpp
 * \brief Implementation de la classe Bibliographie permettant de faire la gestion des références
 * \author Aissata
 * \date 23 novembre 2022
 */
#include <sstream>
#include <string>
#include <iostream>
#include "Bibliographie.h"
#include "ContratException.h"
#include <vector>
#include <algorithm>

using namespace std;

namespace biblio
{


  /**
   * \fn Bibliographie (const string& p_nomBibliographie) : m_nomBibliographie (p_nomBibliographie)
   * \brief Constructeur avec paramètre de la classe la Bibliographie \n
   * Ce constructeur construit un objet de la classe Bibliographie
   *
   * \param[in] p_nomBibliographie represente le nom d'une bibliographie
   *
   * \pre p_nomBibliographie ne doit pas être vide
   * \post m_nomBibliographie prend la valeur de p_nomBibliographie
   */

  Bibliographie::Bibliographie (const string& p_nomBibliographie) : m_nomBibliographie (p_nomBibliographie)
  {
    PRECONDITION (!m_nomBibliographie.empty ());
    POSTCONDITION (m_nomBibliographie == p_nomBibliographie);
    INVARIANTS ();
  }


  /**
   * \fn Bibliographie (const Bibliographie& p_bibliographie)
   * \brief Constructeur de copie. Il copie une bibliographie
   * \param[in] p_bibliographie represente un objet de la classe Bibliographie
   *
   * \post m_nomBibliographie prend la valeur de m_nomBibliographie de l'objet passé en paramètre
   */
  Bibliographie::Bibliographie (const Bibliographie& p_bibliographie) : m_nomBibliographie (p_bibliographie.m_nomBibliographie)
  {
    PRECONDITION (m_vReferences.empty ());
    vector<Reference*>::const_iterator it;
    for (it = p_bibliographie.m_vReferences.begin (); it < p_bibliographie.m_vReferences.end (); it++)
      {
        Reference* ref = *it;
        m_vReferences.push_back (ref -> clone ());
      }
    POSTCONDITION (m_nomBibliographie == p_bibliographie.m_nomBibliographie);
    INVARIANTS ();
  }


  /**
   * \fn ~Bibliographie ()
   * \brief Destructeur de la classe Bibliograpgie. Il va désalloué toutes les references d'une bibliographie dans le vecteur
   */
  Bibliographie::~Bibliographie ()
  {
    vector<Reference*>::const_iterator iter;
    for (iter = m_vReferences.begin (); iter < m_vReferences.end (); iter++)
      {
        delete (*iter);
      }
    m_vReferences.clear ();
  }


  /**
   * \fn string reqNomBibliographie () const
   * \brief Méthode permettant d'accéder en lecture (accesseur) à l'attribut m_nomBibliographie de la classe Reference
   * \return m_nomBibliographie le nom de la bibliographie
   */
  string
  Bibliographie::reqNomBibliographie () const
  {
    return m_nomBibliographie;
  }


  /**
   * \fn string reqBibliographieFormate () const
   * \brief Cette méthode parcourt toutes les reference de la bibliographie et retourne les informations des references.
   * \return un objet string avec les informations correspondant à chaque référence
   */
  string
  Bibliographie::reqBibliographieFormate () const
  {
    ostringstream os;
    os << m_nomBibliographie << endl << "===============================" << endl;
    int affichage = 1;
    vector<Reference*>::const_iterator it;
    for (it = m_vReferences.begin (); it < m_vReferences.end (); it++)
      {
        os << "[" << affichage++ << "] " << (*it) -> reqReferenceFormate () <<  endl;
      }

    return os.str ();
  }


  /**
   * \fn bool referenceEstDejaPresente (const Reference& p_reference) const
   * \brief Méthode permettant de vérifier si une reference est déjà présente dans le vecteur de reference
   * \param[in] p_reference Objet de Reference à ajouter dans le vecteur
   * \return un booléen, true si la reference est déjà presente ou false sinon
   */
  bool
  Bibliographie::referenceEstDejaPresente (const Reference& p_reference) const
  {
    bool estDejaPresente = false;
    vector<Reference*>::const_iterator it;
    for (it = m_vReferences.begin (); it < m_vReferences.end (); it++)
      {
        if ((*it)->reqIdentifiant () ==  p_reference.reqIdentifiant ())
          {
            estDejaPresente = true;
            //break;
          }
      }
    return estDejaPresente;
  }


  /**
   * \fn Bibliographie& operator= (const Bibliographie& p_bibliographie)
   * \brief Méthode permettant d'assigner une bibliographie
   * \param[in] p_bibliographie un objet de la classe Bibliographipe
   * \return Une bibliographie
   */
  Bibliographie& Bibliographie::operator= (const Bibliographie& p_bibliographie)
  {
    m_nomBibliographie = p_bibliographie.m_nomBibliographie;
    //Vider le vecteur de Reference
    vector<Reference*>::const_iterator iter;
    for (iter = m_vReferences.begin (); iter < m_vReferences.end (); iter++)
      {
        delete (*iter);
      }
    m_vReferences.clear ();


    //Remplir le vecteur de Reference
    vector<Reference*>::const_iterator it;
    for (it = p_bibliographie.m_vReferences.begin (); it < p_bibliographie.m_vReferences.end (); it++)
      {
        Reference* ref = *it;
        m_vReferences.push_back (ref -> clone ());
      }

    INVARIANTS ();

    return *this;
  }


  /**
   * \fn void ajouterReference (const Reference& p_reference)
   * \brief Méthode permettant d'ajouter une nouvelle reference au vecteur de Reference, \n
   * elle lance une exeption si la reference qu'on essaie d'ajouter est déjà présente
   * \param[in] p_reference la nouvelle reference à ajouter au vecteur de Reference.
   *
   */
  void
  Bibliographie::ajouterReference (const Reference& p_reference)
  {
    if (!referenceEstDejaPresente (p_reference))
      {
        m_vReferences.push_back (p_reference.clone ());
      }
    else
      {
        throw ReferenceDejaPresenteException (p_reference.reqReferenceFormate ());
      }
    INVARIANTS ();
  }


  /**
   * \fn void verifieInvariant () const
   * \brief Méthode permettant de verifier tous les invariants
   */
  void
  Bibliographie::verifieInvariant () const
  {
    INVARIANT (!m_nomBibliographie.empty ());
  }


  /**
   * \fn void Bibliographie::supprimerReference (const string& p_identifiant)
   * \brief fonction permettant de supprimer une reference et si la reference n'existe pas elle envoie un message d'exception.
   * \param[in] p_bibliographie qui est une bibliographie
   */
  void
  Bibliographie::supprimerReference (const string& p_identifiant)
  {
    int verifieSupression = 0;
    vector<Reference*>::const_iterator iter1;
    for (iter1 = m_vReferences.begin (); iter1 < m_vReferences.end (); iter1++)
      {
        if ((*iter1)->reqIdentifiant () == p_identifiant)
          {
            delete (*iter1);
            iter1 = m_vReferences.erase (iter1);
            verifieSupression++;
            break;
          }
      }

    if (verifieSupression == 0)
      {
        throw ReferenceAbsenteException (" Une reférence inexistante ne peut être supprimée ");
      }

    INVARIANTS ();
  }





}
