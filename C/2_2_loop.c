// 2_2_loop.c
#include <stdio.h>

// while, do-while, for

int main() {      
    // 퀴즈
    // 'hello'를 5회 출력하는 반복문을 만드세요 (3가지)
    int i = 0;
    while(i < 5) {
        printf("hello ");
        i++;
    }
    printf("\n");

    i = 100;
    while(i < 105) {
        printf("hello ");
        i++;
    }
    printf("\n");

    i = 5;                  // 시작
    while(i > 0) {          // 종료
        printf("hello ");
        i--;                // 증감
    }
    printf("\n");

    printf("%d %c\n", 'A', 'A');
    printf("%d %c\n", 'a', 'a');

    // 퀴즈
    // 대문자 전체를 출력해 보세요
    i = 65;
    while(i <= 90) {
        printf("%c ", i);
        i++;
    }
    printf("\n");

    i = 'A';
    while(i <= 'Z') {
        printf("%c ", i);
        i++;
    }
    printf("\n");

    return 0;
}





