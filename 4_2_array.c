// 4_2_array.c

#include <stdio.h>

void qoduf(int ages[3]);

int main (){

//     int ages[3]={10,20,30};


    
    
//     printf("%d \n",ages[0]);
//     printf("%d \n",ages[1]);
//     printf("%d \n",ages[2]);


//     int i=0;
// while (i<3)
// {
//      printf("%d \n",ages[i]);
//     i++;
// }

// // 거꾸로

//   i=2;
// while (i>=0)
// {
//      printf("%d \n",ages[i]);
//     i--;
// }

//   i=2;
// while (i>-1)
// {
//      printf("%d \n",ages[i]);
//     i=i-1;
// }

// // 배열의 합계
//      i=0;
//     int sum=0;
// while (i<3)
// {
//      printf("%d \n",ages[i]);
//      sum+=ages[i];
//     i++;
// }
//      printf("%d \n",sum);

 int ages[3]={10,20,30};

  qoduf(ages);
    return 0;
}


// 배열을 출력하는 함수
void qoduf(int *ages2){

  

    
    int i=0;
while (i<3)
{
     printf("%d \n",ages2[i]);
    i++;
}


}