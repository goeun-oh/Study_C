#include <stdio.h>

int main(){
    // 실수형 변수 선언 및 초기화
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    // 실수형 정밀도 비교 출력
    printf("float형 변수의 값: %.20f\n", ft);
    printf("double형 변수의 값: %.20lf\n", db);

    // 추가 예제: 다양한 자료형 크기 확인
    printf("\n=== 자료형별 크기 확인 ===\n");
    printf("char 크기: %zu bytes\n", sizeof(char));
    printf("int 크기: %zu bytes\n", sizeof(int));
    printf("float 크기: %zu bytes\n", sizeof(float));
    printf("double 크기: %zu bytes\n", sizeof(double));

    // 상수 사용 예제
    const int MAX_STUDENTS = 30;
    printf("\n최대 학생 수: %d명\n", MAX_STUDENTS);

    return 0;
}

/*
예상 컴파일 결과:
float형 변수의 값: 1.23456788063049316406
double형 변수의 값: 1.23456789012345669043

=== 자료형별 크기 확인 ===
char 크기: 1 bytes
int 크기: 4 bytes
float 크기: 4 bytes
double 크기: 8 bytes

최대 학생 수: 30명

참고사항:
- 컴퓨터 구조상 정확한 소수점 저장이 어려워 근사값으로 저장됩니다
- float는 약 7자리, double은 약 15자리 정밀도를 가집니다
- sizeof 연산자로 각 자료형의 메모리 크기를 확인할 수 있습니다
*/
