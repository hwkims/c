#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_NUM_COUNT 6
#define LOTTO_MAX_NUM 45
#define LOTTO_RUN_COUNT 50000000 // 생성할 로또 번호 세트의 개수

void generate_lotto_numbers(int lotto_numbers[], int count) {
    int i = 0;
    int num;

    while (i < count) {
        // 1부터 LOTTO_MAX_NUM까지의 랜덤 숫자 생성
        num = rand() % LOTTO_MAX_NUM + 1;

        // 중복 체크
        int j = 0;
        int is_duplicate = 0;

        // 중복 체크를 위한 while 문
        while (j < i) {
            if (lotto_numbers[j] == num) {
                is_duplicate = 1; // 중복이 발견되면 플래그 설정
                break;
            }
            j++;
        }

        // 중복이 아닐 경우 번호 저장
        if (!is_duplicate) {
            lotto_numbers[i] = num;
            i++;  // 다음 번호로 이동
        }
    }
}

void print_lotto_numbers(int lotto_numbers[], int count) {
    printf("생성된 로또 번호: ");
    int k = 0;
    while (k < count) {
        printf("%d ", lotto_numbers[k]);
        k++;
    }
    printf("\n");
}

void save_to_csv(int lotto_numbers[], int count, FILE *file) {
    int i = 0;
    while (i < count) {
        fprintf(file, "%d", lotto_numbers[i]);
        if (i < count - 1) {
            fprintf(file, ","); // 마지막 번호 뒤에는 쉼표를 추가하지 않음
        }
        i++;
    }
    fprintf(file, "\n"); // 한 줄 끝내기
}

int main() {
    int lotto_numbers[LOTTO_NUM_COUNT];

    // 랜덤 시드 초기화
    srand(time(NULL));

    // CSV 파일 열기
    FILE *file = fopen("lotto_numbers.csv", "w");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1; // 오류 발생 시 종료
    }

    // 여러 번 로또 번호 생성
    int run = 0;
    while (run < LOTTO_RUN_COUNT) {
        generate_lotto_numbers(lotto_numbers, LOTTO_NUM_COUNT);
        print_lotto_numbers(lotto_numbers, LOTTO_NUM_COUNT);
        save_to_csv(lotto_numbers, LOTTO_NUM_COUNT, file);
        run++; // 다음 세트로 이동
    }

    fclose(file);
    printf("로또 번호가 lotto_numbers.csv에 저장되었습니다.\n");

    return 0;
}