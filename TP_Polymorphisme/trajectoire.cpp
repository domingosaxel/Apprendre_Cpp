/**
   @file trajectoire.cpp
   @brief Implémentation de la classe Trajectoire
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
   @detail Classe modélisant la gestion des trajectoires
  */

#include "trajectoire.h"

using namespace std;

Trajectoire::Trajectoire(const int _nbEtapesMax):
    nbEtapesMax(_nbEtapesMax)
{   
    parcours = new Element *[nbEtapesMax];
    prochaineEtape=0;
    //Constructeur par défaut de la classe trajectoire
}

Trajectoire::~Trajectoire()
{
    delete [] parcours;
    //Destructeur par défaut de la classe trajectoire
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = false;
    if(prochaineEtape < nbEtapesMax){
        _pElement->setNumero(prochaineEtape+1);
        parcours[prochaineEtape++] = _pElement;
        retour = true;
    }
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl << endl;
}
