/**
 * \file Bibliographie.h
 * \brief Prototype de la classe Bibliotheque permettant de faire la gestion des références
 * \author Aissata
 * \date 23 novembre 2022
 */

#ifndef BIBLIOGRAPHIE_H
#define BIBLIOGRAPHIE_H

#include <vector>
#include "Reference.h"
#include "ContratException.h"
#include "ReferenceException.h"


/**
 * \namespace Namespace contenant la classe Reference ainsi que toutes ses classes filles
 */
namespace biblio
{

  /**
   * \class Bibliographie
   * \brief Classe permettant de faire la gestion des Références
   */
  class Bibliographie
  {
  public:
    Bibliographie (const std::string& p_nomBibliographie);
    Bibliographie (const Bibliographie& p_bibliographie);
    ~Bibliographie ();

    std::string reqNomBibliographie () const;
    void ajouterReference (const Reference& p_reference);
    std::string reqBibliographieFormate () const;
    Bibliographie& operator= (const Bibliographie& p_bibliographie);
    void supprimerReference (const std::string& p_identifiant);

  private:
    std::string m_nomBibliographie;
    std::vector<Reference*> m_vReferences;

    bool referenceEstDejaPresente (const Reference& p_reference) const;
    void verifieInvariant () const;
  };
}


#endif /* BIBLIOGRAPHIE_H */

