// 5_2_sentinel.c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void show_array(int* p, int size);
void show_sentinel(int* p);

int main() {      
    int a = 7;

    printf("%d\n", RAND_MAX);
    printf("%d %d\n", INT_MIN, INT_MAX);

    int randoms[256] = {41, 53, 26, 77, 38, 91, 15};

    show_array(randoms, 256);
    show_sentinel(randoms);

    // 데이터 1개: 정수, 실수, 단어, 문장
    char s[256] = "hello";    // \n, \r, \t, \a, \0
    // char s[256] = {'h', 'e', 'l', 'l', 'o'};
    printf("%s\n", s);

    int i = 0;
    while (i < 10) {
        printf("%c %d\n", s[i], s[i]);
        i++;
    }

    s[0] = '\0';

    return 0;
}

void show_array(int* p, int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", p[i]);
        i++;
    }
    printf("\n");
}

void show_sentinel(int* p) {
    // int i = 0;
    // while (p[i] != 0) {
    //     printf("%d ", p[i]);
    //     i++;
    // }

    while (*p)
        printf("%d ", *p++);
        
    printf("\n");
}
