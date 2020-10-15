#include "trajectoire.h"

using namespace std;

Trajectoire::Trajectoire(const int _nbEtapesMax):
    nbEtapesMax(_nbEtapesMax)
{
    //Constructeur par défaut de la classe trajectoire
}

Trajectoire::~Trajectoire()
{
    //Destructeur par défaut de la classe trajectoire
}

bool Trajectoire::Ajouter(const Element *_pElement)
{

}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl;
    cout << endl;

}
