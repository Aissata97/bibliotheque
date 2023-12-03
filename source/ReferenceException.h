/**
 * \file ReferenceException.h
 * \author Aissata
 * \brief Prototype de la classe ReferenceException qui gère les exceptions et ses héritiers
 * \date 19 décembre 2022
 */
#include <string>
#include <stdexcept>

#ifndef REFERENCEEXCEPTION_H
#define REFERENCEEXCEPTION_H

/**
 *
 * \class ReferenceException
 * \brief Classe de base modélisant les exceptions de Reference
 */
class ReferenceException : public std::runtime_error
{
public:
  ReferenceException (const std::string& p_raison);
};

/**
 * \class ReferenceDejaPresenteException
 * \brief Declaration de la classe ReferenceDejaPresenteException qui permet de faire la gestion des exceptions de l’ajout d’un doublon de  *        référence pour la bibliographie. Elle herite de ReferenceException
 */
class ReferenceDejaPresenteException : public ReferenceException
{
public:
  ReferenceDejaPresenteException (const std::string& p_raison);
};

/**
 * \class ReferenceAbesenteException
 * \brief Classe fait la gestion de l'erreur de l'absence d'une reference si elle est inexistante
 */
class ReferenceAbsenteException : public ReferenceException
{
public:
  ReferenceAbsenteException (const std::string& p_raison);
};

#endif /* REFERENCEEXCEPTION_H */


