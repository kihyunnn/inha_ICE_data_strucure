//HW1_12211736_김기현
#include "Geom_inher.h"
using namespace std;

GeomProgression::GeomProgression(long f, long b) : Progression(f){ // 생성자 정의
    base = b ;
    cur = first;
}

long GeomProgression::nextValue() { //공비수열용 nextValue 오버라이딩
    return (cur *= base);
}
