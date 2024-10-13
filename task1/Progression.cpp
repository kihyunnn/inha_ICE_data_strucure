//HW1_12211736_김기현
#include "Progression.h"
using namespace std;

Progression::Progression(long f) {
    cur = first = f;
}


long Progression::firstValue() { //첫번째값 반환 함수 정의
    cur = first;
    return cur;
}

//
// long Progression::nextValue() {
//     return ++cur;
// } // nextValue 함수 가상 아닌 버전

void Progression::printProgression(int n) {
    cout << firstValue();
    for(int i = 2 ; i <= n ; i++) {
        cout << " " << nextValue();
    }
    cout << endl;
}

Progression::~Progression() { // 가상 소멸자 정의
}




