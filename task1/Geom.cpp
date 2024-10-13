//HW1_12211736_김기현
#include "Geom.h"
using namespace std;


GeomProgression::GeomProgression(long f, long b) {  // 생성자 정의
    first = f;
    base = b;
    cur = first;
}

long GeomProgression::firstValue() { // 첫 번 째 값 반환 함수
    cur = first;
    return cur;
}

long GeomProgression::nextValue() { // 등비수열 계산 함수
    return (cur *= base);
}

void GeomProgression::printProgression(long n) { //수열 출력 함수 정의
    cout << firstValue();
    for (int i = 2; i <= n; i++) {
        cout << " " << nextValue();
    }
    cout << endl;
}

GeomProgression::~GeomProgression() { //소멸자 정의

}