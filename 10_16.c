// while문에서 센티널(sentinel)사용
// sentinel : 데이터의 끝을 알리는 데 사용되는 값
// 정상적인 데이터 값에서는 절대 등장할수 없는 값으로 선택하는 것이 좋다.
 
// 평균 계산
#include <stdio.h>
 
int main(){
    int grade, n;
    float sum, average;
 
    n = 0;
    sum = 0;
    grade = 0;
 
    printf("성적 입력을 종료하려면 음수를 입력하세요\n\n");
 
    while(grade>=0)
    {
        printf("성적 입력 : ");
        scanf("%d", &grade);
 
        sum += grade;
        n++;
    }
 
    sum = sum - grade;// 센티널로써 입력한 음수도 합계에 들어갔으므로 다시 빼서 센티널 제거
    n--;                       // 음수(센티널)을 입력하는 순간에도 n이 카운트 되었으므로 센티널 제거
 
    average = sum / n;
    printf("평균 : %f \n", average);    // 평균은 부동소수점형으로 출력
 
 
    return 0;
}
