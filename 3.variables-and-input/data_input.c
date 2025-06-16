#include <stdio.h>

int main() {
    // 데이터 입력 변수 선언
    char name[50];
    int age;
    float height;
    char favorite_subject[30];
    
    printf("=== 학생 정보 입력 프로그램 ===\n\n");
    
    // 사용자로부터 데이터 입력받기
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    
    printf("키를 입력하세요 (cm): ");
    scanf("%f", &height);
    
    printf("좋아하는 과목을 입력하세요: ");
    scanf("%s", favorite_subject);
    
    // 입력받은 데이터 출력
    printf("\n=== 입력하신 정보 ===\n");
    printf("이름: %s\n", name);
    printf("나이: %d세\n", age);
    printf("키: %.1f cm\n", height);
    printf("좋아하는 과목: %s\n", favorite_subject);
    
    // 추가 계산
    if (height >= 170.0) {
        printf("키가 평균보다 큽니다!\n");
    } else {
        printf("키가 평균 정도입니다.\n");
    }
    
    return 0;
}

/*
실행 예제:
=== 학생 정보 입력 프로그램 ===

이름을 입력하세요: 김철수
나이를 입력하세요: 20
키를 입력하세요 (cm): 175.5
좋아하는 과목을 입력하세요: 수학

=== 입력하신 정보 ===
이름: 김철수
나이: 20세
키: 175.5 cm
좋아하는 과목: 수학
키가 평균보다 큽니다!
*/
