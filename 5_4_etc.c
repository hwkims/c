// 5_4_etc.c
#include <stdio.h>
// 학생성적을 if 문으로

char score2grade(int score)
{
    char grade = 'F';
    if (score > 89)
        grade = 'A';
    else if (score > 79)
        grade = 'B';
    else if (score > 69)
        grade = 'C';
    else if (score > 59)
        grade = 'D';
 

    return grade;
}


// 1~n까지의 합계를 구하는 함수

int  nsum (int n){
    int sum = 0; // 합계를 저장할 변수
    int m = 1;   // 1부터 시작
    int s=0;

    switch (n) {

        case 10: s+=10;
        case 9: s+=9;
 
        default:
            // n이 1 이상인 경우
            while (m <= n) {
                sum += m; // m을 sum에 추가
                m++; // m을 증가시킴
            }


            break;
    }

    return sum; // 합계를 반환
}







int main()
{

    char s1[] = "hello";
    char *s2 = "world";

    // 값이 상수

    s1[0] = 'H';
    // s2[0]='W';
    // 에러

    // s2=s1;
    // *s1=*s2;

    puts(s1);
    puts(s2);

    printf("%d\n", sizeof(s1));
    printf("%d\n", sizeof(s2));

    puts("--------------\n");

    // 빨강 0 초록 1 파랑 2

    int color = 1;

    if (color == 0)
        puts("red");

    else if (color == 1)
        puts("green");

    else
        puts("blue");

    switch (color)
    {

    case 0:
        puts("red");
        break;
    case 1:
        puts("green");
        break;
    default:
        puts("blue");
        break;
    }

    // 학생 성적을 학점으로 변환하는 함수를 만드세요
    // 성적 0 ~ 100
    // 학점 a90 100 b 80 89 c 70 79 d 60 69 f 0 59

    int score = 75;

    switch (score / 10)
    {
    case 10:
        puts("A+");
        break;
    case 9:
        puts("A");
        break;
    case 8:
        puts("b");
        break;
    case 7:
        puts("c");
        break;
    case 6:
        puts("d");
        break;
    default:
        puts("f");
        break;
    }

    printf("%c", score2grade(35));

    printf("%c", score2grade(135));

    printf("%c", score2grade(75));


   printf("\n%d",  nsum(14));
   

    return 0;
}
