#include <stdio.h>


int main(){
    char str[80] = "applejam";

    printf("최초의 문자열: %s\n", str);

    printf("문자열 입력: ");
    scanf("%s", str);
    str[3]=1;
    /*****중요. 텔레칩스 면접문제? *****/
    printf("입력 후 문자열: %s\n", str); //null 문자를 만날 때 까지 출력한다

}


/*
str[3]=1 했을 때랑 안했을 때 차이
kccistc@DESKTOP-7CFQ9ND MSYS /c/Users/kccistc/Documents/GitHub/Study_C/5.array
$ ./a
理쒖큹??臾몄옄?? applejam
臾몄옄???낅젰: sam
?낅젰 ??臾몄옄?? samejam

kccistc@DESKTOP-7CFQ9ND MSYS /c/Users/kccistc/Documents/GitHub/Study_C/5.array
$ gcc str.c

kccistc@DESKTOP-7CFQ9ND MSYS /c/Users/kccistc/Documents/GitHub/Study_C/5.array
$ ./a
理쒖큹??臾몄옄?? applejam
臾몄옄???낅젰: sam
?낅젰 ??臾몄옄?? sam



*/