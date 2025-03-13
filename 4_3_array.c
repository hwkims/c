// 4_2_array.c

#include <stdio.h>

void qoduf(int ages[3], int num[5]);

// void show_array(int ages[],int size){
    
void show_array(int* ages, int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", ages[i]);
        i++;
    }
    printf("\n");
}

int main (){
    int ages[] = {10, 20, 30, 40, 50};
    int size = sizeof(ages) / sizeof(ages[0]);
    show_array(ages, size);
    return 0;
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

//  int ages[3]={10,20,30};
//  int num[5]={1,3,5,7,9};


// //   qoduf(ages,num);

//       int myArray[] = {1, 2, 3, 4, 5};
//     int size = sizeof(myArray) / sizeof(myArray[0]);
//   printf("%d \n",sizeof(myArray));

//     printf("%d \n",sizeof(myArray[0]));

//         int i=0;
// while (i<size)
// {

 

//      printf("%d \n",myArray[i]);
//     i++;
// }
 
//     return 0;

//int 배열 전체를 출력하는 함수
}


// 배열을 출력하는 함수
void qoduf(int ages[3], int num[5]){

     printf("%d \n",sizeof(ages));
           printf("%d \n",sizeof(num));
        

    
    int i=0;
while (i<3)
{

 

     printf("%d \n",ages[i]);
    i++;
}
i=0;
while (i<5)
{
     printf("%d \n",num[i]);
    i++;
}


}

void copy_array(int* src, int* dst, int size){

    int i=0;
    while (i<size){
        dst[i]=src[i];
        i++;
    }
}


 