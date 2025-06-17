#include <stdio.h>
struct student{
    int num;
    double grade;
};

int main(){
    struct student s1;

    s1.num =2;
    s1.grade = 1.0;

    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

    return 0;
}