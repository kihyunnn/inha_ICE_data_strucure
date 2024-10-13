//HW1_12211736_김기현
#ifndef GEOM_H
#define GEOM_H

#include <iostream>
#include <string>
#include <iomanip>

class GeomProgression {
private: // 멤버변수들
    long first;
    long cur;
    long base

public:
    GeomProgression(long f = 1, long i = 3);  // 생성자 정의
    //필요 함수들
    long firstValue();
    long nextValue();
    void printProgression(long n); //출력 함수

    ~GeomProgression(); // 소멸자 선언
};

#endif
