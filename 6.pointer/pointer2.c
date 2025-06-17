#include <stdio.h>


int main(){
    int a;
    char b;

    int *pa;
    char *pb;

    b = 'A';
    pa = &a;
    *pa = 0x12345678;
    pb = &b;
    *pb = 'B';

    printf("포인터로 a 값 출력: %d, 변수 크기: %d\n", *pa, sizeof(pa));
    printf("변수명으로 a 값 출력: %d, 변수 크기: %d\n", a, sizeof(a));
    printf("포인터로 b 값 출력: %d, 변수 크기: %d\n", *pb, sizeof(pb));
    printf("변수명으로 a 값 출력: %d, 변수 크기: %d\n", b, sizeof(b));

    return 0;
}