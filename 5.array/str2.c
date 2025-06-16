//문자열 처리하기
#include <stdio.h>
#include <string.h>


int main(){
    char str1[80] = "cat";

    //strcpy(destination 주소, source 주소), 주소가 char 형, 1 byte 주소가 들어가야
    strcpy(str1, "tiger");
    //문자열의 특징: "tiger\0" 널 문자가 끝에 존재.
    //"tiger"는 첫번째 주소를 return 한다.
    //null문자를 만날 때 까지 memory copy 한다.
}