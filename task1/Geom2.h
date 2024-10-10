#ifndef GEOM_H
#define GEOM_H

#include <iostream>
#include <string>
#include <iomanip>

class GeomProgression {  // 클래스 이름은 Arith
private:
    long first;  // 초기값
    long cur;    // 현재값
    long base;    // 등차값

public:
    // 생성자: 첫 번째 값과 증가 값을 설정
    GeomProgression(long f = 1, long i = 3);  // 클래스 이름에 맞춰 생성자 이름 수정

    // 첫 번째 값을 반환하고 현재 값으로 설정
    long firstValue();

    // 다음 값을 계산하여 반환
    long nextValue();

    // 수열의 첫 n개의 값을 출력
    void printProgression(long n);
};

#endif
