// 3_1_function.c

#include <stdio.h>

void f_1();
void f_2(int a);
int f_3( );

int max_22(int a, int b);
int max_2(int a, int b);

int main () {
f_1();
f_2(23);

int b;

b= f_3();
printf("data %d\n",b);
    int c= f_3();
    printf("data %d\n",c);

    printf("data %d\n",f_3());


int d= printf("data %d\n",f_3());
    printf("return : %d\n",d);

    f_3();
    


 printf("return : %d\n",max_22(6, 3));

 printf("return : %d\n",max_2(3, 3));

 printf("return : %d\n",max_22(3, 7));

    return 0;

    
}

void f_1(){
    printf ("hello\n");
}



// 반환값 매개변수 차이


void f_2(int a){
    printf ("f2\n");
}

int f_3(  ) {
 printf ("f3\n");
    return 7;
}


// 2개의 정수 중에서 큰 값을 찾는 함수를 만드세요 반환 매개

int max_22(int a , int b){
 

    if (a>b){
        return a;
    }
    if (b>a){
        return b;
    }
    
    return 3;

}

int max_2(int a , int b){
    //   if (a>b){
    //     return a;
    // }
    // else if (b>a){
    //     return b;
    // }
    
    // else
    // printf("same\n");
    // return printf("same\n");


//     if (a> b)
//     return a;

// return b;



if (a>b)
b=a;

return b;
}