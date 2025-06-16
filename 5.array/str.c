#include <stdio.h>


int main(){
    char str[80] = "applejam";

    printf("최초의 문자열: %s\n", str);

    printf("문자열 입력: ");
    scanf("%s", str);

    /*****중요. 텔레칩스 면접문제? *****/
    printf("입력 후 문자열: %s\n", str); //null 문자를 만날 때 까지 출력한다

}