#include <stdio.h>

int main() {
    // 상수 선언 - 컴파일 시간에 값이 결정됨
    const int MAX_STUDENTS = 30;
    const float PI = 3.14159;
    const double GRAVITY = 9.81;
    
    // 일반 변수 선언
    int current_students = 25;
    float radius = 5.0;
    
    // 상수 활용 예제
    printf("최대 학생 수: %d명\n", MAX_STUDENTS);
    printf("현재 학생 수: %d명\n", current_students);
    printf("남은 자리: %d개\n", MAX_STUDENTS - current_students);
    
    // 원의 넓이 계산
    float area = PI * radius * radius;
    printf("\n반지름 %.1f인 원의 넓이: %.2f\n", radius, area);
    
    // 중력 가속도 활용
    double mass = 10.0;  // kg
    double weight = mass * GRAVITY;
    printf("\n질량 %.1lf kg인 물체의 무게: %.2lf N\n", mass, weight);
    
    // 상수 수정 시도 (컴파일 오류 발생)
    // MAX_STUDENTS = 35;  // 오류: assignment of read-only variable
    // PI = 3.14;          // 오류: assignment of read-only variable
    
    printf("\n상수의 특징:\n");
    printf("1. 선언과 동시에 초기화 필수\n");
    printf("2. 프로그램 실행 중 값 변경 불가\n");
    printf("3. 코드 가독성과 유지보수성 향상\n");
    printf("4. 매직 넘버를 피할 수 있음\n");
    
    return 0;
}

/*
상수 사용의 장점:
1. 코드 가독성 향상 - 의미있는 이름으로 값 표현
2. 유지보수 용이성 - 한 곳에서 값 관리
3. 실수 방지 - 의도치 않은 값 변경 방지
4. 컴파일러 최적화 - 상수는 컴파일 시 값이 대체됨

매직 넘버 예시:
- 나쁜 예: if (score >= 90) // 90이 무엇을 의미하는지 불분명
- 좋은 예: const int A_GRADE = 90; if (score >= A_GRADE)
*/