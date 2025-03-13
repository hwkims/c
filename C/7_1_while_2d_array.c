// 7_1_while_2d_array.c
#include <stdio.h>

void show_lotto(int lotto[45]);
void show_lotto_2(int lotto[], int size);
void show_array(int* array, int size);

int main() {      
    int lotto[45] = {19, 31, 26, 45, 41, 3, 29, 0, 1, 2, 3, 4, 5};

    show_lotto(lotto);
    show_lotto_2(lotto, 45);

    int grid[3][4] = {
        0, 1, 2, 3, 
        4, 5, 6, 7, 
        8, 9, 10, 11,
    };

    show_array(grid[0], 4);
    show_array(grid[1], 4);
    show_array(grid[2], 4);
    show_array(&grid[2][0], 4);

    for (int i = 0; i < 3; i++)
        show_array(grid[i], 4);

    show_array(grid[0], 12);

    printf("%d %d\n", lotto, grid);
    show_array(grid[0], 12+45);

    return 0;
}

// 퀴즈
// lotto 배열에 들어있는 유효한 값을 출력하는 함수를 만드세요
// 0 이전에 나온 값들만 유효하다고 판단합니다
void show_lotto(int lotto[45]) {
    // 0 1 2 3 4 ... n
    // 시작 0
    // 종료 배열의 값이 0이 나올 때까지
    // 증감 1
    int i = 0;
    while (lotto[i] != 0) {
        printf("%d ", lotto[i]);
        i++;
    }
    printf("\n");

    for (int i = 0; lotto[i] != 0; i++) {
        printf("%d ", lotto[i]);
    }
    printf("\n");
}

void show_lotto_2(int lotto[], int size) {
    // 0 1 2 ... 44      0, 45, 1
    // for (int i = 0; i < size; i++) {
    // for (;;)
    for (int i = 0; ; i++) {
        if (lotto[i] == 0)
            break;

        printf("%d ", lotto[i]);
    }
    printf("\n");
}

// 퀴즈
// 2차원 배열에서 n번째 요소를 출력하는 함수를 만드세요
// 그리고, 호출까지 해봅니다
void show_array(int* array, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

// 퀴즈
// 2차원 배열을 출력하는 함수를 만드세요
// 2차원 형식을 유지하지 말고, 한 줄로 출력해주세요
// --> 0 1 2 3 4 5 6 7 8 9 10 11
