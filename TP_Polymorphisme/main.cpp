#include <iostream>
#include "element.h"
#include "segment.h"
#include "trajectoire.h"

using namespace std;

int main()
{
    Trajectoire traj(5);
    Segment seg(9,0);
    Segment seg2(5,0.927295);

    traj.Afficher();
    seg.Afficher();
    seg2.Afficher();

    return 0;
}