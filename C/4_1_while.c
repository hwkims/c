// 4_1_while.c
#include <stdio.h>

int abs(int n);
void show_even(int n);
void show_grid();

int main() {
    printf("%d\n", abs(7));
    printf("%d\n", abs(-7));  

    show_even(10);
    show_even(20);

    show_grid();
    return 0;
}

// 퀴즈
// 정수 절대값을 반환하는 함수를 만드세요 (함수 이름 abs)
int abs(int n) {
    if (n < 0)
        n = -n;

    return n;
}

// 퀴즈
// 양수 n보다 작은 짝수만 출력하는 함수를 만드세요
// 0 2 4 6 8                    0, 10, 2
// 0 2 4 6 8 10 12 14 16 18     0, 20, 2
void show_even(int n) {
    int i = 0;
    while (i < n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
}

// 퀴즈
// 0 ~ 24까지의 정수를 한 줄에 5개씩 출력하세요 (반복문 1개만 사용)
//  0  1  2  3  4 
//  5  6  7  8  9
// 10 11 12 13 14
// 15 16 17 18 19
// 20 21 22 23 24
void show_grid() {
    // int i = 0;
    // while (i < 25) {
    //     printf("%d %d %d %d %d\n", i, i+1, i+2, i+3, i+4);
    //     i += 5;
    // }

    int i = 0;
    while (i < 25) {
        printf("%d ", i);

        // if (i == 4 || i == 9 || i == 14 || i == 19 || i == 24)
        // if (i % 10 == 4 || i % 10 == 9)
        if (i % 5 == 4)
            printf("\n");

        i++;
    }
}
