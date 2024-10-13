//HW1_12211736_김기현
#include "Arith.h"
using namespace std;

ArithProgression::ArithProgression(long f, long i) {  //  생성자 정의
    first = f;
    inc = i;
    cur = first;
}

long ArithProgression::firstValue() { // 첫 번째 값 반환 함수 정의
    cur = first;
    return cur;
}

// 다음 값을 계산하여 반환
long ArithProgression::nextValue() { // 다음 값 반환 함수 정의
    return (cur += inc);
}

void ArithProgression::printProgression(long n) { // 출력 함수 정의
    cout << firstValue();
    for (int i = 2; i <= n; i++) {
        cout << " " << nextValue();
    }
    cout << endl;
}

ArithProgression::~ArithProgression() { // 소멸자 정의
}
