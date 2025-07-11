# Study_C

## 📚 프로젝트 소개
C 언어 학습을 위한 개인 스터디 저장소입니다. 기초부터 심화까지 단계별로 학습하며 실습 코드와 예제들을 정리합니다.

## 🎯 학습 목표
- C 언어 기본 문법 완전 이해
- 포인터와 메모리 관리 숙달
- 자료구조 구현 및 활용
- 알고리즘 문제 해결 능력 향상

## 📁 폴더 구조
```
Study_C/
├── 1.environment-setup/      # 개발 환경 설정 및 첫 프로그램
├── 2.constants-and-output/   # 상수와 데이터 출력
├── 3.variables-and-input/    # 변수와 데이터 입력
├── 4.연산자/                 # 연산자 학습
├── pointers/                 # 포인터 학습 (예정)
├── structures/               # 구조체 (예정)
├── algorithms/               # 알고리즘 구현 (예정)
├── projects/                 # 실습 프로젝트 (예정)
└── exercises/                # 연습 문제 (예정)
```

## 📈 학습 진행 상황
- [x] **1장: 환경 설정** - 개발 환경 구축 및 첫 번째 프로그램
- [x] **2장: 상수와 출력** - 상수 개념 및 printf 함수 활용
- [x] **3장: 변수와 입력** - 변수 선언, 자료형, 데이터 입력
- [x] **4장: 연산자** - 산술, 관계, 논리, 비트 연산자 학습
- [ ] 기본 문법 (조건문, 반복문)
- [ ] 함수와 배열
- [ ] 포인터와 메모리 관리
- [ ] 구조체와 공용체
- [ ] 파일 입출력
- [ ] 동적 메모리 할당
- [ ] 자료구조 구현

## 🛠️ 개발 환경
- **컴파일러**: GCC
- **에디터**: VS Code / Dev-C++
- **운영체제**: Windows/Linux/macOS

## 📚 각 장별 학습 내용

### 1. Environment Setup (환경 설정)
- C 언어 개발 환경 구축
- GCC 컴파일러 설치 및 설정
- 첫 번째 "Hello World" 프로그램
- 컴파일 및 실행 과정

### 2. Constants and Output (상수와 출력)
- 상수의 개념과 종류
- printf 함수 활용법
- 형식 지정자 사용법
- 변수와 상수 출력

### 3. Variables and Input (변수와 입력)
- C 언어 기본 자료형 (char, int, float, double)
- 변수 선언과 초기화
- 상수(const) 사용법
- scanf 함수를 이용한 데이터 입력
- 실수형 자료형의 정밀도 차이

### 4. 연산자 (Operators)
- 산술 연산자 (+, -, *, /, %)
- 관계 연산자 (==, !=, <, >, <=, >=)
- 논리 연산자 (&&, ||, !)
- 비트 연산자 (&, |, ^, ~, <<, >>)
- 대입 연산자 (=, +=, -=, *=, /=, %=)
- 증감 연산자 (++, --)
- 연산자 우선순위와 결합성

## 🔧 빌드 및 실행 방법
```bash
# 각 폴더로 이동 후
cd [폴더명]

# 컴파일
gcc [파일명].c -o [실행파일명]

# 실행
./[실행파일명]
```

### 3장 예제 실행
```bash
cd 3.variables-and-input/

# 기본 변수 예제
gcc variables_basic.c -o variables_basic
./variables_basic

# 데이터 입력 예제
gcc data_input.c -o data_input
./data_input

# 실수형 정밀도 비교
gcc exam.c -o exam
./exam
```

### 4장 예제 실행
```bash
cd 4.연산자/

# 연산자 관련 예제들 컴파일 및 실행
gcc [예제파일명].c -o [실행파일명]
./[실행파일명]
```

## 📖 참고 자료
- The C Programming Language (K&R)
- C 언어 관련 온라인 강의
- 프로그래밍 문제 사이트 (백준, 프로그래머스)

## 📝 학습 노트
각 폴더에는 해당 주제의 README.md 파일이 포함되어 있으며, 상세한 학습 내용과 예제 코드를 확인할 수 있습니다.

## 🔄 최근 업데이트
- **2025.06.16**: 4장 "연산자" 학습 진행
  - 다양한 연산자 종류 학습 완료
  - 연산자 우선순위와 결합성 이해
  - 실습 예제 코드 작성
- **2025.06.16**: 3장 "변수와 데이터 입력" 완료
  - 한글 폴더명을 영어로 변경 (3.변수와데이터입력 → 3.variables-and-input)
  - 체계적인 README.md 작성
  - 다양한 예제 코드 추가 (기본 변수, 데이터 입력, 정밀도 비교)

---
*C 언어 마스터를 향한 여정! 🚀*
