/**
   @file segment.h
   @brief Déclaration de la classe Segment
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
  */

#ifndef SEGMENT_H
#define SEGMENT_H
#include "element.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Segment : public Element
{
private:
    double longueur;
    double angle;  
public:
    Segment(const double _longueur, const double _angle, const int _vitesse);
    virtual void Afficher();

};

#endif // SEGMENT_H
