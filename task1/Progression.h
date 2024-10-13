//HW1_12211736_김기현
#ifndef PROGRESSION_H
#define PROGRESSION_H

#include <iostream>

class Progression {
protected:
    long first;
    long cur;
    long firstValue();

    virtual long nextValue() = 0;  // nextVlue의 순수 가상 함수

    // long nextValue(); //버추얼 아닌 버전 함수 선언


public:
    Progression(long f = 0) ;   // 생성자

    void printProgression(int n); //수열 출력 함수

    // //2번 문제용 기본 소멸자
    // ~Progression();


    virtual ~Progression();     // 가상 소멸자
};

#endif
