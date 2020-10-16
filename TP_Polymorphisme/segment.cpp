/**
   @file segment.cpp
   @brief Implémentation de la classe Segment
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
   @detail Classe modélisant la gestion des segments
  */

#include "segment.h"

using namespace std;

Segment::Segment(const double _longueur, const double _angle, const int _vitesse):
    Element(_vitesse),
    longueur(_longueur),
    angle(_angle)
{
    //Constructeur par défaut de la classe segment
}

 void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << "     A = " << angle << endl;
}
