// 3_1_function.c
#include <stdio.h>

// 코드(함수), 데이터(변수)
// 교수(A)와 학생(B)

// 교수 -> 데이터(매개변수) -> 학생
// 교수 <- 데이터(반환값) <- 학생
void f_1();
void f_2(int a);
int f_3();
int max_2(int a, int b);
int max_4(int a, int b, int c, int d);

int main() {      
    f_1();
    f_2(23);

    int b;
    b = f_3();
    printf("data %d\n", b);

    int c = f_3();
    printf("data %d\n", c);

    int d = printf("data %d\n", f_3());
    printf("return : %d\n", d);

    f_3();

    printf("max : %d\n", max_2(3, 7));
    printf("max : %d\n", max_2(7, 3));
    printf("max : %d\n", max_2(7, 7));
    printf("\n");

    printf("max4 : %d\n", max_4(1, 3, 5, 7));
    printf("max4 : %d\n", max_4(3, 5, 7, 1));
    printf("max4 : %d\n", max_4(5, 7, 1, 3));
    printf("max4 : %d\n", max_4(7, 1, 3, 5));
    return 0;
}

// 반환값 없고, 매개변수 없고
void f_1() {
    printf("f_1\n");
}

// 반환값 없고, 매개변수 있고
void f_2(int a) {
    printf("f_2 %d\n", a);
}

// 반환값 있고, 매개변수 없고
int f_3() {
    printf("f_3\n");
    return 7;
}

// 반환값 있고, 매개변수 있고
// 퀴즈
// 2개의 정수 중에서 큰 값을 찾는 함수를 만드세요
// 함수 이름은 max_2
int max_2(int a, int b) {
    // 1번
    // if (a > b) 
    //     return a;
    // else 
    //     return b;

    // 2번
    // if (a > b) 
    //     return a;
    
    // return b;

    // 3번
    if (a > b) 
        b = a;      // assign operator
    
    return b;
}

// 퀴즈
// 4개의 정수 중에서 큰 값을 찾는 함수를 만드세요 (2가지)
// 함수 이름은 max_4
int max_4(int a, int b, int c, int d) {
    // 10 <= age < 20
    // if (a > b > c > d)
    //     return a;

    // if (a > b && b > c && c > d)
    //     return a;

    // 1번
    // if (a >= b && a >= c && a >= d)
    //     return a;
    // else if (b >= a && b >= c && b >= d)
    //     return b;
    // else if (c >= a && c >= b && c >= d)
    //     return c;

    // return d;

    // 2번
    // if (a >= b && a >= c && a >= d)
    //     d = a;
    // else if (b > a && b > c && b > d)
    //     d = b;
    // else if (c > a && c > b && c > d)
    //     d = c;

    // 3번
    // if (d < a)  d = a;
    // if (d < b)  d = b;
    // if (d < c)  d = c;

    // return d;

    // 4번 - 복면가왕
    // int e = max_2(a, b);
    // int f = max_2(c, d);
    // int g = max_2(e, f);
    // return g;

    // return max_2(max_2(a, b), max_2(c, d));

    // 5번 - 한국시리즈
    return max_2(max_2(max_2(a, b), c), d);
}

