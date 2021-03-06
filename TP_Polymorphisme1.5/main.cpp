/**
   @file main.cpp
   @brief Programme principale
   @version 1.0
   @author Axel DOMINGOS
   @date 15/10/2020
  */

#include <iostream>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"

using namespace std;

int main()
{
    Trajectoire traj(5);
    Segment seg(9,0,3);
    Segment seg2(5,0.927295,1);

    traj.Afficher();
    seg.Afficher();
    seg2.Afficher();

    return 0;
}
