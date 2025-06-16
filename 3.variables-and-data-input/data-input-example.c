#include <stdio.h>

int main() {
    // 다양한 자료형 변수 선언
    int age;
    float height;
    double weight;
    char grade;
    
    // 사용자로부터 데이터 입력 받기
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    
    printf("키를 입력하세요 (cm): ");
    scanf("%f", &height);
    
    printf("몸무게를 입력하세요 (kg): ");
    scanf("%lf", &weight);
    
    printf("학점을 입력하세요 (A, B, C, D, F): ");
    scanf(" %c", &grade);  // 공백 추가로 이전 입력의 개행문자 무시
    
    // 입력받은 데이터 출력
    printf("\n=== 입력 정보 ===");
    printf("나이: %d세\n", age);
    printf("키: %.1f cm\n", height);
    printf("몸무게: %.2lf kg\n", weight);
    printf("학점: %c\n", grade);
    
    // BMI 계산 (키는 m 단위로 변환)
    double bmi = weight / ((height/100) * (height/100));
    printf("BMI: %.2lf\n", bmi);
    
    return 0;
}

/*
학습 포인트:
1. scanf()의 형식 지정자
   - %d: 정수 입력
   - %f: float 입력
   - %lf: double 입력
   - %c: 문자 입력

2. 주소 연산자 (&)
   - scanf에서 변수의 주소를 전달
   - 문자 입력 시 앞의 공백으로 버퍼 정리

3. 형변환
   - 키를 cm에서 m로 변환하여 BMI 계산
*/