//HW1_12211736_김기현
#ifndef GEOM_INHER_H
#define GEOM_INHER_H

#include <iostream>
#include "Progression.h"

class GeomProgression : public Progression {
protected:
    long base; //공비값

    virtual long nextValue() override; //버추얼 버전. 오버라이드 선언

public:
    GeomProgression(long f = 1, long b = 3); // 디폴트값을 포함하는 생성자


    // long nextValue(); //버추얼 아닌버전 선언

};

#endif
