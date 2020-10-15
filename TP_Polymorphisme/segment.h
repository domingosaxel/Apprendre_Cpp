#ifndef SEGMENT_H
#define SEGMENT_H
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Segment
{
private:
    double longueur;
    double angle;  
public:
    Segment(const double _longueur, const double _angle);
    void Afficher();

};

#endif // SEGMENT_H
