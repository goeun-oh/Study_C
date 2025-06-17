#include <stdio.h>

int main(){
    int a= 10, b=20;
    swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb){ //매개 변수가 포인터형태이다.
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}


