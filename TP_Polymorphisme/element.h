/**
   @file element.h
   @brief Déclaration de la classe Element
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
  */

#ifndef ELEMENT_H
#define ELEMENT_H
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Element
{
protected:
    int numero;
    int vitesse;
public:
    Element(const int _vitesse=1);
    virtual ~Element();
    virtual void Afficher()=0;

    int getNumero() const;
    void setNumero(int valeur);
    int getVitesse() const;
    void setVitesse(int valeur);

    /*virtual double ObtenirLongueur();
    virtual int ObtenirDuree();
    virtual int ObtenirVecteurArivee();*/
};

#endif // ELEMENT_H
