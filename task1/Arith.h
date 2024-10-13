//HW1_12211736_김기현
#ifndef ARITH_H
#define ARITH_H

#include <iostream>
#include <string>
#include <iomanip>

class ArithProgression {
private:
    long first;  // 초기값
    long cur;    // 현재값
    long inc;    // 등차값

public:

    ArithProgression(long f = 0, long i = 1);  // 생성자 선언

    //필요 함수들 선언
    long firstValue();
    long nextValue();
    void printProgression(long n);

    ~ArithProgression();     // 소멸자 선언
};

#endif
