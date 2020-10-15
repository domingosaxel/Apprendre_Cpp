#ifndef ELEMENT_H
#define ELEMENT_H
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Element
{
public:
    Element();
    virtual ~Element();
    virtual void Afficher();
};

#endif // ELEMENT_H
