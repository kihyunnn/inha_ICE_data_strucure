#include "Arith.h"
using namespace std;

// 생성자: 첫 번째 값과 증가 값을 초기화
ArithProgression::ArithProgression(long f, long i) {  // 클래스 이름에 맞춰 생성자 이름 수정
    first = f;    // 첫 번째 값 초기화
    inc = i;      // 증가 값 초기화
    cur = first;  // 현재 값을 첫 번째 값으로 설정
}

// 첫 번째 값을 반환하고, 현재 값을 첫 번째 값으로 설정
long ArithProgression::firstValue() {
    cur = first;
    return cur;
}

// 다음 값을 계산하여 반환
long ArithProgression::nextValue() {
    return (cur += inc);
}

// 수열의 첫 n개의 값을 출력
void ArithProgression::printProgression(long n) {
    cout << firstValue();
    for (int i = 2; i <= n; i++) {
        cout << " " << nextValue();
    }
    cout << endl;
}
