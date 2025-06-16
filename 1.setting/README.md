# Environment Setup

## 📖 학습 내용
C 언어 개발 환경 설정 및 첫 번째 프로그램 작성

## 🎯 학습 목표
- C 언어 개발 환경 구축
- 컴파일러 설치 및 설정
- 첫 번째 "Hello World" 프로그램 작성
- 컴파일 및 실행 과정 이해

## 🛠️ 개발 환경 설정

### Linux/macOS 환경
```bash
# GCC 컴파일러 설치 확인
gcc --version

# bashrc 설정
echo 'export PATH=/usr/bin:$PATH' >> ~/.bashrc
source ~/.bashrc
```

### Windows 환경
- Dev-C++ 또는 Code::Blocks 설치
- 또는 WSL을 통한 Linux 환경 구축

## 💻 첫 번째 프로그램

### main.c
```c
#include <stdio.h>

int main(){
    int a, b, c;
    
    a = 10;
    b = 20;
    c = a + b;
    
    printf("hello world\n");
    printf("sum = %d + %d = %d\n", a, b, c);
    
    return 0;
}
```

## 🔧 컴파일 및 실행
```bash
# 컴파일
gcc main.c -o main

# 실행
./main
```

## 📋 주요 개념
- `#include <stdio.h>`: 표준 입출력 헤더 파일 포함
- `int main()`: 프로그램의 시작점
- `printf()`: 출력 함수
- `return 0`: 프로그램 정상 종료

## 🎉 예상 출력
```
hello world
sum = 10 + 20 = 30
```

## 📝 주의사항
- bashrc는 쉘 시작 시 가장 먼저 실행되는 설정 파일
- 환경 변수 및 PATH 설정이 중요
- 컴파일러 경로가 올바르게 설정되어 있는지 확인
