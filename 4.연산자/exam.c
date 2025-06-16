#include <stdio.h>

int main(){
    int a= 5, b= 5;
    int pre, post;

    pre = (++a) * 3;
    post = (b++) * 3; //안좋은 코드, ++a, b++ 줄을 분리해서 사용하기

    printf("초기값 a= %d, b= %d\n", a, b);
    printf("전위형: (++a) * 3= %d, 후위형 : (b++) *3= %d\n", pre, post);
}


/*
컴파일 결과
$ ./a
珥덇린媛?a= 6, b= 6
?꾩쐞?? (++a) * 3= 18, ?꾩쐞??: (b++) *3= 15

*/