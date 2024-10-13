//HW1_12211736_김기현
#include <iostream>
#include "Progression.h"
#include "Arith_inher.h"
#include "Geom_inher.h"

using namespace std;

int main() {
    Progression *prog[4];
    cout << "Arithmetic Progression with default increment" << endl;
    prog[0] = new ArithProgression();
    prog[0]->printProgression(10);
    cout << "Arithmetic Progression with increment 5" << endl;
    prog[1] = new ArithProgression(5);
    prog[1]->printProgression(10);
    cout << "Geometric Progression with default base" << endl;
    prog[2] = new GeomProgression();
    prog[2]->printProgression(10);
    cout << "Geometric Progression with base 3" << endl;
    prog[3] = new GeomProgression(3);
    prog[3]->printProgression(10);
    return 0;
} // main()
