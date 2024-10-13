//HW1_12211736_김기현
#include <iostream>
#include "Arith.h"
#include "Geom.h"
//상속 테스트용
// #include "Progression.h"
// #include "Arith_inher.h"
// #include "Geom_inher.h"
using namespace std;

int main()
{
    ArithProgression* ap;
    GeomProgression* gp;

    cout << "Arithmetic progression with default increment: \n";
    ap = new ArithProgression();
    ap->printProgression(10);

    cout << "Arithmetic progression with increment 5: \n";
    ap = new ArithProgression(0, 5);
    ap->printProgression(10);

    cout << "Geometric progression with default base: \n";
    gp = new GeomProgression();
    gp->printProgression(10);

    cout << "Geometric progression with base 3: \n";
    gp = new GeomProgression(1, 3);
    gp->printProgression(10);

    return 0;

}
