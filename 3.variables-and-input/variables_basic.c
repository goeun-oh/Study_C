#include <stdio.h>

int main() {
    // 1. 기본 변수 선언과 초기화
    int age = 25;
    float height = 175.5;
    char grade = 'A';
    
    printf("=== 기본 변수 예제 ===\n");
    printf("나이: %d세\n", age);
    printf("키: %.1f cm\n", height);
    printf("학점: %c\n", grade);
    
    // 2. 변수값 변경
    age = 26;
    height = 176.0;
    printf("\n=== 변수값 변경 후 ===\n");
    printf("나이: %d세\n", age);
    printf("키: %.1f cm\n", height);
    
    // 3. 상수 사용
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;
    
    printf("\n=== 상수 사용 예제 ===\n");
    printf("원주율: %.5f\n", PI);
    printf("일주일: %d일\n", DAYS_IN_WEEK);
    
    // 4. 계산 예제
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("반지름이 %.1f인 원의 넓이: %.2f\n", radius, area);
    
    return 0;
}
