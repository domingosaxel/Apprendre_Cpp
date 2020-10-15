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
    //Element **parcours;
    //parcours = new (Element*[_pElement]);
public:
    Trajectoire(const int _nbEtapesMax);
    ~Trajectoire();
    bool Ajouter(const Element *_pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
