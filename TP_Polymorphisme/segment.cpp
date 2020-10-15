#include "segment.h"

using namespace std;

Segment::Segment(const double _longueur, const double _angle):
    longueur(_longueur),
    angle(_angle)
{
    //Constructeur par défaut de la classe segment
}

 void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << "      A = " << angle << endl;
}
