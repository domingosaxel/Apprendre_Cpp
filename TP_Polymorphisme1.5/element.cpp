/**
   @file element.cpp
   @brief Implémentation de la classe Element
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
   @detail Classe modélisant la gestion des elements
  */

#include "element.h"

using namespace std;



Element::Element(const int _vitesse):
    numero(1),
    vitesse(_vitesse)
{
    //Constructeur par défaut de la classe element
}

Element::~Element()
{
    //Destructeur par défaut de la classe trajectoire
}

int Element::getNumero() const
{
    return numero;
}
void Element::setNumero(int valeur)
{
    numero = valeur;
}


int Element::getVitesse() const
{
   return vitesse;
}
void Element::setVitesse(int valeur)
{
    vitesse = valeur;
}

void Element::Afficher()
{

}
