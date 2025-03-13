// 4_3_array.c
#include <stdio.h>

void show_array(int ages[3], int size);
void copy_array(int src[5], int dst[5], int size);

int main() {
    int a = 3;
    int ages[3] = {10, 20, 30};
    int numbers[5] = {1, 3, 5, 7, 9};
    int copied[5];

    numbers[0] = 99;

    // copied[0] = numbers[0];
    // copied[1] = numbers[1];
    // copied[2] = numbers[2];
    // copied[3] = numbers[3];
    // copied[4] = numbers[4];

    copy_array(numbers, copied, 5);

    printf("%d\n", ages);
    printf("%d\n", sizeof(ages));
    printf("%d\n", sizeof(ages) / 4);
    printf("%d\n", sizeof(numbers) / sizeof(int));
    printf("%d\n", sizeof(numbers) / sizeof(numbers[0]));

    show_array(ages, 3);
    show_array(numbers, 5);

    show_array(copied, 5);

    return 0;
}

// 퀴즈
// int 배열 전체를 출력하는 함수를 만드세요
// void show_array(int ages[], int size)
void show_array(int* ages, int size) {
    // int size = sizeof(ages) / sizeof(ages[0]);
    // printf("%d\n", ages);

    int i = 0;
    while (i < size) {
        printf("%d ", ages[i]);
        i++;
    }
    printf("\n");
}

// 퀴즈
// 배열을 복사하는 함수를 만드세요
void copy_array(int* src, int* dst, int size) {
    int i = 0;
    while (i < size) {
        dst[i] = src[i];
        i++;
    }
}
