#include <stdio.h>


int main(){
    char str[80] = "applejam";

    printf("최초의 문자열: %s\n", str);

    printf("문자열 입력: ");
    scanf("%s", str);

    printf("입력 후 문자열: %s\n", str);
}