// 5_1_pointer.c

#include <stdio.h>

#include <stdlib.h>
void show_array(int * p, int size);
void max7(int *p,int size);

int find_max(int *p, int size);


int main(){

    int digits[4]={2,4,6,9};

            printf("%d \n",sizeof(*digits));

            
            printf("%d \n",sizeof(digits));
                   printf("%d \n",sizeof(digits[0]));
    int *p=digits;

    // printf("%d\n",digits);

    //  printf("%d\n",p);


    // printf("%d\n",digits[0]);
    //       printf("%d\n",p[0]);
// 포인터가 가리키는 자료형의 크기만큼 증가
// char * 1 int * 4 double* 8 int[10]* 40
    //  printf("%d\n",p+1);

    //  int* q=p+1;
    // //  *q
    //      printf("%d\n",q);
    //       printf("%d\n",*q);



// int n=0;


//           while(n<4)
//           {     

//             int *q=digits+n;
//             printf("%d \n",*q);
//             printf("%d \n",*(p+n));
//             n++;


//           }

show_array(digits,4);


int randoms[7]={41,53,26,77,38,91,15};
// 1차원 정수 배열에서 가장 큰값을 찾는 함수.
// max7(randoms,7);

    int i =0;
    srand(22);
    while (i <7){
        randoms[i]=rand()%100;;
        i++;
    }
printf("max  %d \n",find_max(randoms, 7));
    return 0;
}

int find_max(int *p, int size){

    // int i=0,m=p[0];
    // while (i<size){

    //     if (m< p[i])
    //         m=p[i];
    //     i++;
    // }
    // return m;    

    int  m=p[0];
    int* end= p+size;
    while (p<end){

        if (m< *p)
            m=*p;

            p++;
         
    }
    return m;
}

void max7(int *q,int size){

    // int n=0;
int* end= q+size;

          while(q<end)
          {     

            // int *q=digits+n;
            // printf("%d \n",*q);

            printf("%d \n",*q++);


            // n++;
 

          }
              printf("%d \n",q+size);
}

void show_array(int * p, int size){

    // int n=0;
int* end= p+size;

          while(p<end)
          {     

            // int *q=digits+n;
            // printf("%d \n",*q);
            printf("%d \n",*p++);
            // n++;


          }
          
}


//  ++i i++ 차이