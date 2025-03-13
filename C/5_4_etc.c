// 5_4_etc.c
#include <stdio.h>

char score2grade(int score);

int main() {      
    char s1[] = "hello";    // 이름이 상수
    char* s2 = "world";     // 값이 상수

    s1[0] = 'H';
    // s2[0] = 'W';         // 에러 

    s2 = s1;
    // s1 = s2;             // 에러

    puts(s1);
    puts(s2);

    printf("%d\n", sizeof(s1));
    printf("%d\n", sizeof(s2));
    puts("----------------------\n");

    // 빨강(0), 초록(1), 파랑(2)
    int color = 1;

    if (color == 0)
        puts("red");
    else if (color == 1)
        puts("green");
    else
        puts("blue");

    switch (color) {
    case 0:
        puts("red");
        break;
    case 1:
        puts("green");
        break;
    default:
        puts("blue");
    }

    printf("95 : %c\n", score2grade(95));
    printf("85 : %c\n", score2grade(85));
    printf("75 : %c\n", score2grade(75));
    printf("65 : %c\n", score2grade(65));
    printf("35 : %c\n", score2grade(35));

    return 0;
}

// 퀴즈
// 학생 성적을 학점으로 변환하는 함수를 만드세요
// 성적 : 0 ~ 100
// 학점 : A 90 ~ 100
//        B 80 ~ 89
//        C 70 ~ 79
//        D 60 ~ 69
//        F 0 ~ 59
char score2grade(int score) {
    char grade = 'F';

    switch (score / 10) {
    case 10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    }

    return grade;
}
