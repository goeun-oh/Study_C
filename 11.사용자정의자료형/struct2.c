#include <stdio.h>

struct profile{
    int age;
    double height;
};

struct student{
    struct profile pf;
    int id;
    double grade;
};

int main(){
    struct student yuni;

    yuni.pf.age =17; //구조체 안에 구조체 넣기
}