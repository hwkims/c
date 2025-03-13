// 6_5_file.c
#include <stdio.h>
#include <string.h>

void print_file_1();
void print_file_2();
void write_file_1();
void write_file_2();
void csv_file();

int main() {      
    // print_file_1();
    // print_file_2();

    // write_file_1();
    // write_file_2();
    csv_file();
    return 0;
}

// 텍스트 : txt, json, c, cpp, py, csv, 
// binary: exe, hwp, xls, ppt, jpg, ...

void print_file_1() {
    FILE* fp = fopen("poem.txt", "r");
    printf("%d\n", fp);

    // 퀴즈
    // fgetc 함수를 사용해서 파일 전체를 출력하세요
    // for (int i = 0; i < 200; i++) {
    //     char ch = fgetc(fp);
    //     // putchar(ch);
    //     printf("%c %d\n", ch, ch);
    // }

    int ch;
    while (1) {             // 무한루프
        ch = fgetc(fp);

        if (ch == -1)
            break;

        putchar(ch);
    }

    // char buf[128] ={};
    // for (int i = 0; i < 100; i++) {
    //     char ch = fgetc(fp);
    //     buf[i] = ch;
    // }
    // puts(buf);

    fclose(fp);
}

// 퀴즈
// fgets 함수를 사용해서 파일 전체를 출력하세요
// 시작(파일 처음부터), 종료(EOF까지), 증감(읽은만큼)
void print_file_2() {
    FILE* fp = fopen("poem.txt", "r");

    char buf[16];
    while (fgets(buf, sizeof(buf), fp)) {
        printf("%s", buf);
    }

    // char* p;
    // while (1) {
    //     p = fgets(buf, sizeof(buf), fp);

    //     if (p == NULL)
    //         break;

    //     printf("%s", buf);
    // }

    fclose(fp);
}

// 사용하면 안되는 코드
char* get_buffer() {
    char buf[256] = "hello";    // 지역 변수
    return buf;
}

int get_age() {
    int age = 30;
    return age;
}

void write_file_1() {
    FILE* fp = fopen("sample.txt", "w");

    for (int i = 0; i < 26; i++)
        fputc('a'+i, fp);
    fputc('\n', fp);

    fputs("Friday, i am happy!", fp);
    fclose(fp);
}

// 퀴즈
// 사용자가 exit을 입력할 때까지 입력한 모든 문자열을 파일에 저장해 보세요
void write_file_2() {
    FILE* fp = fopen("sample.txt", "w");

    char buf[256];
    while (1) {
        scanf("%s", buf);

        if (strcmp(buf, "exit") == 0)
            break;

        // puts(buf);
        fputs(buf, fp);
        fputc('\n', fp);
    }

    fclose(fp);
}

void csv_file() {
    FILE* fp_w = fopen("sample.csv", "w");

    // printf("%d %lf %c %s\n", 3, 4.5, 'A', "ace");
    // fprintf(fp_w, "%d %lf %c %s\n", 3, 4.5, 'A', "ace");
    // fprintf(fp_w, "%d %lf %c %s\n", 1, 2.7, 'B', "bed");

    char buf[256];
    sprintf(buf, "%d,%lf,%c,%s\n", 3, 4.5, 'A', "ace");
    fputs(buf, fp_w);

    sprintf(buf, "%d,%lf,%c,%s\n", 1, 2.7, 'B', "bed");
    fputs(buf, fp_w);

    fclose(fp_w);

    // -------------------------------- //
    
    FILE* fp_r = fopen("sample.csv", "r");

    int a;
    double b;
    char c;
    char d[256];

    fscanf(fp_r, "%d,%lf,%c,%s", &a, &b, &c, d);
    printf("%d %lf %c %s\n", a, b, c, d);

    fscanf(fp_r, "%d,%lf,%c,%s", &a, &b, &c, d);
    printf("%d %lf %c %s\n", a, b, c, d);

    fclose(fp_r);
}
