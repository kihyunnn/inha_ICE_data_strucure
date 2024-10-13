//HW1_12211736_김기현
#ifndef ARITH_INHER_H
#define ARITH_INHER_H

#include <iostream>
#include "Progression.h"

class ArithProgression : public Progression {
protected:
    long inc; //증가값

    virtual long nextValue() override; //가상 함수 오버라이딩 선언

public:
    ArithProgression(long f = 0 , long i = 1); // 생성자

    // long nextValue(); //버추얼 없는 버전
};

#endif
