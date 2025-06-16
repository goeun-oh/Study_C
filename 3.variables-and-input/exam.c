#include <stdio.h>

int main(){
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수의 값: %.20f\n", ft);
    printf("double형 변수의 값: %.20lf\n", db);

    return 0;
}

/*
실행 결과:
float형 변수의 값: 1.23456788063049316406
double형 변수의 값: 1.23456789012345669043

학습 포인트:
- 컴퓨터 구조상 정확한 소수점 표현이 어려움
- 실제 값은 근사값으로 저장됨
- float는 약 7자리, double은 약 15자리 정밀도
*/