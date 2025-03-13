// 2_1_if.c
#include <stdio.h>
 void f_1();

 void f_2(int a);
 void f_3();



int main() {
//  f_1();
//  f_2(5); f_2(-5); f_2(0);


f_3(1,3);
f_3(14,3);
f_3(1,23);
f_3(11,3);
f_3(11,11);
return 0;





}







 void f_1()   {

    // int a =7;


    // if(a%2)
    // printf("홀수입니다 odd number\n");
    // else
    // printf("even number \n");



// 짝수가 출력되도록 만드시오
// 

//  int aa= 8;
// int aaa=aa%2;
//  if (aaa)
//  {
//     printf("odd number %d\n",aa);
//  }
// else{
//      printf("even number  %d\n",aa);
// }
 

// 변수에 들어있는 값을 양수로 만드세요


int b= -5;
   printf("%d\n",b*-1);




  b= 9;


 int bb= b<0;
if (bb) {
b=-b;
}
// else{
//     return;
// }
printf("%d",b);

    // return 0;

}



void f_2(int a) { //매개변수
    // 어떤정수가 양수인지 음수인지 0인지 얄려주세요
//  int a= -1;
int aa= a;

 
 if (aa<0)
 {
    printf("negative number %d\n",a);
 }

  else if (aa==0){
        printf("0 number %d\n",a);
 }
else{
     printf("positive number  %d\n",a);
}


if (a<0){
    printf("nagative num");
}
else if (a > 0) {
    printf ("positive num");

}
else printf("zero");
 




}




void f_3(int a, int b){

    int c = a-b;
    if (c<0){
        printf("\n");
        printf("b is large");
    }
    else if (c>0){
        printf("\n");

        printf("a is large");

    }
    else {
        printf("\n");

        printf("same");
    }
}

// parameter version 
// argument version