#include <stdio.h>

int main(){
    int a;
    int *pa; //포인트 변수 선언

    pa = &a; // 포인트 변수에 a 주소 값을 저장

    *pa = 10; // *pa = *&(a) -> a의 주소의 값

    printf("포인터로 a 값 출력: %d\n", *pa);
    printf("변수명으로 a 값 출력: %d\n", a);

    return 0;
}