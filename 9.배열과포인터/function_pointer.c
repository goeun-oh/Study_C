#include <stdio.h>
int sum(int, int);
int sub(int a, int b);

int main(){
    int (*fp)(int, int); //*fp 는 함수 포인터
    int res;

    fp = sum;
    res = fp(20, 10);
    printf("result: %d\n", res);

    fp = sub;
    res = fp(20,10);
    printf("result: %d\n", res);
    return 0;

}

int sum(int a, int b){
    return (a+b);
}

int sub(int a, int b){
    return (a-b);
}