// 6_1_if_switch.c
#include <stdio.h>

char score2grade(int score);

int main() {          
    printf("95 : %c\n", score2grade(95));
    printf("85 : %c\n", score2grade(85));
    printf("75 : %c\n", score2grade(75));
    printf("65 : %c\n", score2grade(65));
    printf("35 : %c\n", score2grade(35));

    return 0;
}

// 퀴즈
// 학생 성적을 학점으로 변환하는 함수를 만드세요 (if문 사용)
// 성적 : 0 ~ 100
// 학점 : A 90 ~ 100
//        B 80 ~ 89
//        C 70 ~ 79
//        D 60 ~ 69
//        F 0 ~ 59
char score2grade(int score) {
    char grade = 'F';

    // 1번
    // if (90 <= score && score <= 100) 
    // if (score >= 90 && score <= 100) 
    //     grade = 'A';
    // else if (score >= 80 && score < 90) 
    //     grade = 'B';
    // else if (score >= 70 && score < 80) 
    //     grade = 'C';
    // else if (score >= 60 && score < 70) 
    //     grade = 'D';

    // 2번
    if      (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';

    return grade;
}

// 퀴즈
// 1 ~ n까지의 합계를 구하는 함수를 만드세요 (switch문 사용, 1 ~ 10)
// 1 2 3 4 -> 10
int sumation(int n) {
    int s = 0;
    switch (n) {
    case 10: s += 10;
    case  9: s += 9;
    case  8: s += 8;
    case  7: s += 7;
    case  6: s += 6;
    case  5: s += 5;
    case  4: s += 4;
    case  3: s += 3;
    case  2: s += 2;
    case  1: s += 1;
    }

    return s;
}
