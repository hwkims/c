// 4_4_array.c
#include <stdio.h>
#include <stdlib.h>

void make_randoms(int* p, int size);
void show_array(int* p, int size);
void show_odd(int* p, int size);

int main() {      
    // srand(23);                  // seed
    // printf("%d\n", rand());     // 0 ~ 32767
    // int a = rand();

    int randoms[10];
    make_randoms(randoms, 10);
    show_array(randoms, sizeof(randoms)/sizeof(randoms[0]));
    show_odd(randoms, 10);

    return 0;
}

// 퀴즈
// 0 ~ 99 사이의 양수 난수 10개를 배열에 저장하는 함수를 만드세요
// 함수 이름은 make_randoms
void make_randoms(int* p, int size) {
    int i = 0;
    while (i < size) {
        p[i] = rand() % 100;
        i++;
    }
}

void show_array(int* p, int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", p[i]);
        i++;
    }
    printf("\n");
}

// 퀴즈
// 1차원 배열에서 홀수만 출력하는 함수를 만드세요 
void show_odd(int* p, int size) {
    int i = 0;
    while (i < size) {
        if (p[i] % 2)
            printf("%d ", p[i]);
        i++;
    }
    printf("\n");
}

