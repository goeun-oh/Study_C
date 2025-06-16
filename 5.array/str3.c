//문자열 끝에 널문자 없다면? null문자가 나올 때 까지 출력한다.

#include <stdio.h>

int main(){
    char str[5];

    str[0] = '0';
    str[1] = 'K';
    printf("%s", str);
}