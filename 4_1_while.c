// 4_1_while.c

#include <stdio.h>

int abs(int a );


void ns(int n);
void show_grid(int n);

int main(){


//     printf("%d  \n",    abs(-24));

//     printf("%d  \n",    abs(-4));

//     printf("%d  \n",    abs(-14));

// int i = 0;
// while (i<100)
// {
//     /* code */
//         printf("%d  \n",    abs(-i));
//         i++;
// }




// ns(5);
// ns(55);
// ns(53);
  show_grid(24);
    return 0;
}

//  정수 절대값을 반환하는 함수

int abs(int a ){

    if (a<0)
    a=-a;

    return a;
}


//  1부터 n 까지 짝수만 출력 함수
//  양수 n 보다 작은 짝수 출력

void ns(int n){
int m=0;
    while (m<n)
    {
        /* code */
        if(m%2==0)
        printf("%d ",m);
        
        m++;
    }

            printf("\n");
    
}



// 0부터 24 까지 정수를 한줄에 5개 씩 출력

void show_grid(int n){


int m=0;

int p= 5;

while (n>=m)
{
      printf("%d " , m);
      m++;

      if(m%p==0)
        printf("\n");

}


  printf("\n");
}