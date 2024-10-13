//HW1_12211736_김기현
#include "Arith_inher.h"
using namespace std;


ArithProgression::ArithProgression(long f, long i) : Progression(f) {  // 생성자
    inc = i;
    cur = first;
}

long ArithProgression::nextValue() { // nextValue함수 오버라이딩 ( 등차수열용)
    return (cur += inc);
}


