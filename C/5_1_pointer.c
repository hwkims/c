// 5_1_pointer.c
#include <stdio.h>

void show_array(int* p, int size);
int find_max(int* p, int size);

int main() {      
    int digits[4] = {2, 4, 6, 9};
    int* p = digits;

    printf("%d\n", digits);
    printf("%d\n", p);

    printf("%d\n", digits[0]);
    printf("%d\n", p[0]);

    // 포인터가 가리키는 자료형의 크기만큼 증가
    // char* : 1
    // int* : 4
    // double* : 8
    // int[10]* : 40
    printf("%d\n", p + 1);  

    // 퀴즈
    // [] 사용하지 말고 digits를 모두 출력하세요
    // 0 1 2 3      0, 4, 1
    int i = 0;
    while (i < 4) {
        printf("%d ", digits[i]);
        // printf("%d ", p[i]);
        printf("%d ", *(p+i));
        // printf("%d ", *(digits+i));
        i++;
    }
    printf("\n");

    show_array(digits, 4);

    // 퀴즈
    // 1차원 정수 배열에서 가장 큰 값을 찾는 함수를 만드세요 
    int randoms[7] = {41, 53, 26, 77, 38, 91, 15};

    printf("max : %d\n", find_max(randoms, 7));

    return 0;
}

// 퀴즈
// show_array 함수에서 변수 i를 제거하세요
void show_array(int* p, int size) {
    int* end = p + size;
    while (p < end) {
        printf("%d ", *p++);
    }
    printf("\n");
}

int find_max(int* p, int size) {
    // int i = 1, m = p[0];
    // while (i < size) {
    //     if (m < p[i])
    //         m = p[i];
    //     i++;
    // }

    int* end = p + size;
    int m = p[0];
    while (p < end) {       // p - end
        if (m < *p)
            m = *p;

        p++;
    }

    return m;
}

