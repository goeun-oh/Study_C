#include <stdio.h>


int main(){
    int a= 10, b= 15, total;

    double avg;

    int *pa, *pb;

    int *pt = &total; 
    // *pt는 int 형 주소를 가리킬 수 있는 포인터 변수 (크기 8 byte)
    // total의 주소는 8 byte, 즉 pt와 total 주소를 연결한 것.

    double *pg = &avg;

    pa = &a;
    pb = &b;


    //형변환 하기//
    double a = 3.4;
    double *pd = &a;
    int *pi;
    pi = (int *)pd; //casting 형을 맞추기
}