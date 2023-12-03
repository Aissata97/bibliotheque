/**
 * \file ReferenceException.cpp
 * \author Aissata
 * \brief Implementation de la classe ReferenceException qui gère les exceptions et ses heritiers
 * \date 19 décembre 2022
 */

#include "ReferenceException.h"
#include <string>
using namespace std;


/**
 * \param p_raison
 * \brief constructeur de la classe ReferenceException
 */
ReferenceException::ReferenceException (const std::string& p_raison) : runtime_error (p_raison) { }


/**
 * \param p_raison
 * \brief constructeur de la classe ReferenceDejaPresenteException
 */
ReferenceDejaPresenteException::ReferenceDejaPresenteException (const std::string& p_raison) : ReferenceException (p_raison)  { }


/**
 * \param p_raison
 * \brief constructeur de la classe ReferenceAbsenteException
 */
ReferenceAbsenteException::ReferenceAbsenteException (const string& p_raison) : ReferenceException (p_raison) { }
