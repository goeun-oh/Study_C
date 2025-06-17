#include <stdio.h>

int main(){
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int)); //동적 메모리 할당한 주소를 저장

    if(pi == NULL){
        printf("메모리가 부족");
        exit(1);
    }

    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형: %d\n", *pi);
    printf("실수형: %.1lf\n", *pd);

    free(pi); //동적 할당 영역 반환
    free(pd);

    return 0;
}