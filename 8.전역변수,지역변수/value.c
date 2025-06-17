#include <stdio.h>


void auto_func(void);
void static_func(void);


int main(){
    int i;
    printf("일반 지역 변수를 사용한 함수\n");

    for (i=0; i<3; i++){
        auto_func(); //stack 영역에 할당
    }

    printf("정적 지역 변수를 사용한 함수\n");
    for (i=0; i<3; i++){
        static_func(); //.data영역에 할당. (전역 변수처럼 취급.)
    }
    return 0;
}


void auto_func(){
    int a=0;
    a++;
    printf("%d\n", a);
}

void static_func(){
    static int a;
    a++;
    printf("%d\n", a);
}