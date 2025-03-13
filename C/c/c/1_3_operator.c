// 1_3_operator.c
#include <stdio.h>

#define TRUE  1
#define FALSE 0

// c 파일 작성 -> 컴파일(.o) -> 목적파일 연결 -> 실행파일 생성

void f_1();
void f_2();
void f_3();
void f_4();
void f_5();

// 퀴즈
// f_3 함수를 만들고 선언도 추가하세요

int main() {      
    // f_1();
    // f_2();
    // f_3();
    // f_4();
    f_5();
    return 0;
}

void f_1() {
    int a = 0;
    printf("input : ");
    scanf("%d", &a);

    printf("check : %d\n", a);
}

// 퀴즈
// 실수를 입력 받아서 소숫점 아래 영역만 출력해 주세요
// 3.14 -> 0.14
void f_2() {
    float b = 3.14;

    // scanf("%lf", &b);

    int c = b;
    printf("%d\n", c);
    printf("%lf\n", b - c);
    printf("%.2f\n", b - c);
}


// 퀴즈
// 변수 a와 b의 값을 추가 변수 없이 교환하세요
void f_3() {
    int a = 3, b = 7;
    a = a + b;          // a=10, b=7
    b = a - b;          // a=10, b=3
    a = a - b;

    printf("%d %d\n", a, b);    // 7 3

    // 추가
    // 곱셈을 사용해서 문제를 풀어보세요
    a = a * b;          // a=21, b=3
    b = a / b;          // a=21, b=7
    a = a / b;          // a=3, b=7

    printf("%d %d\n", a, b);    // 3 7
}

// 관계: >  >=  <  <=  ==  !=
// 참: 1, 1.0, 0.1, -1, 2
// 거짓: 0, 0.0
void f_4() {
    int a = 7, b = 3;

    printf("%d\n", a > b);
    printf("%d\n", a >= b);
    printf("%d\n", a < b);
    printf("%d\n", a <= b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("============\n");

    // 퀴즈
    // 나이가 10대인지 아닌지 알려주세요
    int age = 1;
    printf("%d\n", 10 <= age < 20);

    int c1 = age >= 10;     // 0, 1
    int c2 = age < 20;      // 0, 1

    printf("%d : %d\n", age, (c1 + c2) == 2);
    printf("%d : %d\n", age, c1 == c2);
    printf("%d : %d\n", age, c1 * c2);
    printf("%d : %d\n", age, c1 && c2);
}

// 논리: &&  ||  !
void f_5() {
    // printf("%d\n", TRUE);

    printf("%d\n", TRUE && TRUE);
    printf("%d\n", TRUE && FALSE);
    printf("%d\n", FALSE && TRUE);
    printf("%d\n", FALSE && FALSE);
}
