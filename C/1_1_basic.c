// 1_1_basic.c
#include <stdio.h>      // standard input output
// 표준 입력: 키보드
// 표준 출력: 모니터

// main: 함수
int main() {      
    // d(decimal) lf(long float) c(character) s(string)
    printf("%d %lf %c %s\n", 12, 3.14, 'A', "ABC");

    // o(octal) x(hexa decimal)
    // 2진수: 0 1
    // 8진수: 0 1 2 3 4 5 6 7
    // 10진수: 0 1 2 3 4 5 6 7 8 9
    // 16진수: 0 1 2 3 4 5 6 7 8 9 a b c d e f
    printf("%d %x\n", 12, 12);

    // 223을 16진수로 표현해 보세요
    // 13, 15
    // 0xdf

    // 변수 생성
    int a = 99;         // =(대입 연산자)
    int b, c;           // 쓰레기

    a = 7;
    b = a;
    printf("%d\n", a);
    printf("%d\n", b);

    // lvalue: 변수
    // rvalue: 변수, 상수
    // 12 = 91;         // 상수를 바꾸려고 했슴
    printf("--------------------%c", '\n');
    printf("--------------------%s", "\n");

    // 퀴즈
    // 변수 a와 b의 값을 교환하세요
    a = 9;
    b = 5;

    printf("%d %d\n", a, b);

    int t;
    t = a;      // a=9, b=5, t=9
    a = b;      // a=5, b=5, t=9
    b = t;      // a=5, b=9, t=9

    printf("%d %d\n", a, b);
    return 0;
}
