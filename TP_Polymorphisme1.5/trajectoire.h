/**
   @file trajectoire.h
   @brief Déclaration de la classe Trajectoire
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
  */

#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Trajectoire
{
private:
    int nbEtapesMax;
    int prochaineEtape;
    Element **parcours;
public:
    Trajectoire(const int _nbEtapesMax);
    ~Trajectoire();
    bool Ajouter( Element *_pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
