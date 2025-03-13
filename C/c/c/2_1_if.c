// 2_1_if.c
#include <stdio.h>

void f_1();
void f_2(int a);
void f_3();

int main() {
    // f_1();
    // f_2(5);
    // f_2(-5);
    // f_2(0);
    f_3();
    return 0;
}

void f_1() {      
    int a = 7;

    if (a % 2 == 1) {
        printf("홀수입니다\n");
    }
    else
        printf("짝수입니다\n");

    if (a % 2) {
        printf("홀수입니다\n");
    }
    else
        printf("짝수입니다\n");

    // 퀴즈
    // 짝수가 출력되도록 만드세요
    a = 0;
    if (a) {
        printf("홀수입니다\n");
    }
    else
        printf("짝수입니다\n");

    // 퀴즈
    // 변수에 들어있는 값을 양수로 만드세요
    int b = -5;

    if (b > 0) 
        ;
    else 
        b = -b;

    if (b < 0)
        b = -b;
    else
        ;

    if (b < 0)
        b = -b;

    printf("%d\n", b);
}

// 퀴즈
// 어떤 정수가 양수인지 음수인지 0인지 알려주세요
void f_2(int a) {       // 매개 변수        int a = 5
    // int a;

    if (a < 0) { 
        printf("음수\n");
    }
    else {
        // printf("음수가 아니라면");
        // printf("양수, 제로");
        if (a > 0) {
            printf("양수\n");
        }
        else {
            printf("제로\n");
        }
    }

    if (a < 0) 
        printf("음수\n");
    else if (a > 0) 
        printf("양수\n");
    else 
        printf("제로\n");

    if (a < 0) 
        printf("음수\n");
    else 
        if (a > 0) 
            printf("양수\n");
        else 
            printf("제로\n");

    if (a < 0) 
        printf("음수\n");
    if (a > 0) 
        printf("양수\n");
    if (a == 0) 
        printf("제로\n");
}

// 퀴즈
// 2개의 정수 중에서 큰 숫자를 찾아보세요
void f_3() {
    int a = 7, b = 3;

}

// http://192.168.0.194/
