#include <stdio.h>

int main(){
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수의 값: %.20f\n", ft);
    printf("double형 변수의 값: %.20lf\n", db);

    return 0;
}

/*
컴파일 결과
$ ./a
float??蹂?섏쓽 媛? 1.23456788063049316406
double??蹂?섏쓽 媛? 1.23456789012345669043

/*컴퓨터 구조상 정확한 소수점 넣기 어려움, 근사값이다*/

