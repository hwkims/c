// 1_2_operator.c
#include <stdio.h>

// 계산, 연산
// 3 + 5 + 8 + 9 
// 연산: 산술, 관계, 논리, 비트

// 산술: +  -  *  /  %
int main() {
    int a = 7, b = 3;

    printf("%d %d\n", a, b);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);              // 나눗셈(정수)
    printf("%lf\n", a / (float) b);     // 나눗셈(정수)
    printf("%d\n", a % b);              // 나머지
    printf("--------------\n");

    // 퀴즈
    // 나머지(%) 연산자를 사용하지 않고, 나머지를 구하세요
    printf("%d\n", a / b);
    printf("%d\n", a / b * b);
    printf("%d\n", a - a / b * b);
    printf("---------------\n");

    printf("%lf\n", 7.0 / 3.0);         // 나눗셈(실수)
    printf("%lf\n", 7.0 / 3);           // 나눗셈(실수)

    // 퀴즈
    // 2자리 양수를 거꾸로 뒤집어 주세요
    // 38 -> 83
    int n = 38;         // 3 * 10 + 8
    int d1 = n / 10;
    int d2 = n % 10;
    printf("%d %d\n", d1, d2);
    printf("%d\n", d1 + d2 * 10);

    // 퀴즈
    // 3자리 양수를 거꾸로 뒤집어 주세요
    // 318 -> 813
    int m = 318;    // 3 * 100 + 1 * 10 + 8
    int e1 = m / 100;
    // int e2 = m / 10;        // 31
    int e2 = m % 100;          // 18
    int e3 = m % 10;
    printf("%d %d %d\n", e1, e2 % 10, e3);
    printf("%d\n", e1 + e2 % 10 * 10 + e3 * 100);

    m = e1 + e2 % 10 * 10 + e3 * 100;
    printf("%d\n", m);

    return 0;
}

//     2            // /, 몫
//   +---
// 3 | 7
//     6
//    ---
//     1            // %, 나머지


