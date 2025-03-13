// 6_2_multi_loop.c
#include <stdio.h>

// * * * * *
// * * * * *
// * * * * *
// * * * * *

// 퀴즈
// 아래처럼 출력하는 2차원 반복문 코드를 만드세요
//   0123
// 0 *   
// 1 **  
// 2 *** 
// 3 ****

//   0123
// 3 ****
// 2 *** 
// 1 **  
// 0 *   

//    *
//   **
//  ***
// ****

// ****
//  ***
//   **
//    *

void show_line(int size) {
    for (int j = 0; j < size; j++) {
        printf("* ");
    }
    printf("\n");
}

int main() {     
    for (int i = 0; i < 4; i++) {
        // printf("* * * * *\n");
        for (int j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        // printf("* * * * *\n");
        show_line(5);
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i >= j)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            if (i >= j)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 3; j >= 0; j--) {
            if (i >= j)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= 0; j--) {
            if (i >= j)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    printf("\n");

    // 퀴즈
    // 아래처럼 출력하세요
    //   01234
    // 0 *   *
    // 1  * *
    // 2   *
    // 3  * *
    // 4 *   *
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || i+j == 4)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    printf("\n");

    // 퀴즈
    // 아래처럼 출력하세요
    //   01234
    // 0 *****
    // 1 *   *
    // 2 *   *
    // 3 *   *
    // 4 *****
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i % 4 == 0 || j % 4 == 0)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }

    return 0;
}
