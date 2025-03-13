// 2_2_loop.c

#include <stdio.h>
// while dowhile for
void f1(int i);
void f2(int i);

void f3(int i);
void f4(int i);

void f5(  int j,int i);
int main(){
//     int i=0;
// while (i<5) {
//     printf ("hello %d\n",i);
//     i++;
//     i+=1;
//     }


// f1(5);
// f2(5);
// f3(5);
// f4(5);

// printf("%d %c\n",'A','A');
// printf("%d %c\n",'a','a');
f5('a','z');

 f5('A','Z');
    return 0;
}





void f1(int i){
    
  int j=0;
    while (j<i)
    {
        printf("hello %d\n",j)  ;
        j++;  /* code */
    }
    
}

void f2(int i){
    

 
    int j; // Declare j before the loop
    for (j = 0; j < i; j++) {
        printf("hello %d\n", j);
    }

}


void f3(int i){
    
  int j=0;
  if (j<i){
    while (j<i)
    {
        printf("hello %d\n",j)  ;
        j++;  /* code */
    }
    }
}

void f4(int i){
    i=-i;
  int j=0;
    while (j>i)
    {
        printf("hello %d\n",j)  ;
        j--;  /* code */
    }
    
}

 

void f5(  int j,int i){
    i++;
 
    while (j<i)
    {
        printf("%c %d\n",j,j)  ;
        j++;  /* code */
    }
    
}
