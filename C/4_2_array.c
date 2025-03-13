// 4_2_array.c
#include <stdio.h>

void show_array(int ages[3]);

int main() {
    int ages[3] = {10, 20, 30};

    // 퀴즈
    // 배열에 할당한 모든 나이를 출력하세요
    printf("%d\n", ages[0]);
    printf("%d\n", ages[1]);
    printf("%d\n", ages[2]);

    // int i = 0;
    // printf("%d\n", ages[i]);
    // i++;

    // printf("%d\n", ages[i]);
    // i++;

    // printf("%d\n", ages[i]);
    // i++;

    int i = 0;              // 0 1 2
    while (i < 3) {
        printf("%d ", ages[i]);
        i++;
    }
    printf("\n");

    printf("%d\n", ages[2]);
    printf("%d\n", ages[1]);
    printf("%d\n", ages[0]);

    // 퀴즈
    // 배열을 거꾸로 출력하세요
    i = 2;                  // 2 1 0     2, -1, -1
    while (i > -1) {
        printf("%d ", ages[i]);
        i--;
    }
    printf("\n");

    // 퀴즈
    // 배열의 합계를 구하세요
    int s = 0;
    i = 0;
    while (i < 3) {
        s += ages[i];
        i++;
    }
    printf("sum : %d\n", s);

    show_array(ages);    

    return 0;
}

// 퀴즈
// 배열을 출력하는 함수를 만드세요
void show_array(int ages[3]) {
    int i = 0;                      // 1
    while (i < 3) {                 // 2
        printf("%d ", ages[i]);     // 4
        i++;                        // 3
    }
    printf("\n");
}



