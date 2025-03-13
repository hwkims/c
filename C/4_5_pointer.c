// 4_5_pointer.c
#include <stdio.h>

int change_1(int a);
void change_2(int *p);
void change_3(int a);
void swap(int* p, int* q);
void swap_wrong(int c, int d);

int main() {      
    int a = 7;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", sizeof(a));
    printf("0x%p\n", &a);

    // int *p = &a, *q = &a;
    int* p = &a;
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", &p);
    printf("-------------\n");

    int** q = &p;
    int*** r = &q;

    // 퀴즈
    // p와, q와 r을 사용해서 변수 a를 출력하세요
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", **q);
    printf("%d\n", ***r);
    
    *p = 99;
    printf("%d\n", a);

    a = change_1(a);
    printf("%d\n", a);

    change_2(&a);
    printf("%d\n", a);

    change_3(a);
    printf("%d\n", a);

    // 퀴즈
    // 변수 c와 d의 값을 교환하는 함수를 만드세요 (함수 이름은 swap)
    int c = 3, d = 8;

    // swap 호출
    // int t = c;
    // c = d;
    // d = t;

    // swap_wrong(c, d);
    swap(&c, &d);

    printf("%d %d\n", c, d);    // 8 3

    return 0;
}

// * : 곱셈(*), 곱셈복합(*=), 주석(/* */), 변수 선언(int*), 값 접근(*p)

void swap(int* p, int* q) {
    int t = *p;
    *p = *q;
    *q = t;
}

void swap_wrong(int c, int d) {
    int t = c;
    c = d;
    d = t;
}

// 퀴즈
// main 함수에 선언한 변수 a를 바꾸는 함수를 만드세요
int change_1(int a) {
    return a+1;
}

void change_2(int *p) {     // int* p = &a;
    *p = *p + 1;
}

void change_3(int a) {      // int a = a;
    a++;
}

