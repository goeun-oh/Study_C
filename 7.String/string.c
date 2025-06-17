#include <stdio.h>

int main(){
    printf("apple이 저장된 시작 주소 값: %p\n", "apple");
    printf("apple이 저장된 두 번째 주소 값: %p\n", "apple" +1);
    printf("첫번째 문자: %c\n", *"apple");
    printf("첫번째 문자: %c\n", *("apple" +1));
    printf("배열로 표현한 세 번째 문자: %c\n","apple"[2]);


    return 0;
}