#include <stdio.h>


int main(){
    char *dessert = "apple";

    printf("오늘 후식은 %s입니다\n", dessert);
    
    dessert = "bannan";
    
    printf("내일 후식은 %s입니다\n", dessert);

    return 0;
}