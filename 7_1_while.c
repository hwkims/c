// while..2d array

#include <stdio.h>

 

//  0이전에 나온값들만 유효하다고 판단
// 로또배열에 들어있는 유훃나 값을 출력하는 함수

void prilo(int *a){


    while (*a)
    {
          printf("%d ",*a);
          *a++;
    }
    

}

void show_lotto(int lotto[45]){

    int i=0;

    while(lotto[i]!=0){
        printf(" %d ",lotto[i]);

        i++;
    }


    printf("\n");

 i=0;
    for(i=0;lotto[i]!=0;i++){
        printf(" %d ",lotto[i]);

        
    }


}



void show_lotto2(int lotto[],int size){

    // for(int i=0;i<size;i++){
    //     if(lotto[i]==0)
    //     break;

    //     printf("%d",lotto[i]);
    // }

int i;
        for(i=0; ;i++){
        if(lotto[i]==0)
        break;

        printf("%d ",lotto[i]);
    }
}


// 이차원배열에서 엔번째 요소를 출력하는 함수 호촐

void show_array(int* array, int size){

int i;
for (i=0;i<size;i++){
    printf("%d ",array[i]);


}
printf(" \n ");





}


//  이차원 배열을 출력하는 함수 한줄로 출력

void show_array2(int * array, int size){
int i;
    for(i=0; i<size;i++){
    printf ("%d",array[i]);}
}

int main(){

    int lotto[45]={19,31,25,45,41,3,29,3,29,0,1,2,3,4,5};

prilo(lotto);

        printf("\n");


    show_lotto(lotto);
       printf("\n");
show_lotto2(lotto,45);

                                                                                                                   
 printf("\n");

    int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    // 이차원 배열을 1차원 포인터로 전달
    show_array((int*)array, 6); // 총 12개의 요소

    show_array2((int*)array, 6); // 총 12개의 요소



printf("   %d    %d", lotto, array);
 
 show_array(array[0],12+45);
    return 0;
}