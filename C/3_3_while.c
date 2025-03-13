// 3_3_while.c
#include <stdio.h>

// 0 1 2 3 4    0, 5, 1
// 4 5 6 7 8    4, 9, 1
// 4 3 2 1 0    5-1, -1, -1
// 0 2 4 6 8    0, 10, 2

int main() {      
    int i;

    i = 0;                  // 시작
    while (i < 5) {         // 종료
        printf("hello ");
        i += 1;             // 증감
    }
    printf("\n");

    i = 4;
    while (i <= 8) {
        printf("hello ");
        i += 1;
    }
    printf("\n");

    i = 4;
    while (i >= 0) {
        printf("hello ");
        i -= 1;
    }
    printf("\n");

    i = 5 - 1;
    while (i > -1) {
        printf("hello ");
        i -= 1;
    }
    printf("\n");

    // 퀴즈
    // 알파벳 대문자 전체를 출력하세요 (2가지)
    // 012345     
    // ABCDEF ... XYZ   65, 91, 1    A, Z, 1    0, 26, 1
    i = 65;
    while (i < 91) {
        printf("%c", i);
        i++;
    }
    printf("\n");

    i = 'A';
    while (i <= 'Z') {
        printf("%c", i);
        i++;
    }
    printf("\n");

    i = 0;
    while (i < 26) {
        printf("%c", i+'A');
        i++;
    }
    printf("\n");

    // 퀴즈
    // 알파벳 소문자 전체를 거꾸로 출력하세요
    // ZYX ... EDCBA    Z, A, -1
    i = 'z';
    while (i >= 'a') {
        printf("%c", i);
        i--;
    }
    printf("\n");

    // 퀴즈
    // 1 ~ 5까지의 합계를 구하세요
    // 1 2 3 4 5    1, 5, 1
    int s = 0;
    i = 1;
    while (i <= 100) {
        s += i;
        i++;
    }
    printf("%d ", s);

    return 0;
}
