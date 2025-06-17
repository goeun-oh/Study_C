### 정적 지역 변수

static 으로 선언하면 함수가 종료되어도 메모리공간을 반환하지 않는다.
![]({A9D9B8BB-86E8-4648-AADD-FFA25D8AC612}.png)




```c
char animal[5][20];

for(i=0;i<count;i++){
    printf("%s", animal[i]); //다차원 배열에서 이건 묶음을 의미 (요소 X)
}
```
![]({3C87FFD7-D1A9-45C6-8BD2-003EE2E36449}.png)