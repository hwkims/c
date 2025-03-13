// 3_1_function.c

#include <stdio.h>
 
int max2(int a, int b) {
    // return (a > b) ? a : b;

    if(a>b){
        b=a;
    }
    return b;
}
  
int max_2(int a, int b) {
    // return (a > b) ? a : b;

    if(a>b){
        b=a;
    }
    return b;
}
int max_4(int a, int b , int c ,int d){
    int max=a;

    if(a<b)
    max=b;
    if(a<c)
    max=c;
    if(a<d)
    max=d;
   
   return max;
}

void max4(int a, int b , int c ,int d){

 
    printf("%d %d %d %d\n", (a,b,c,d));

}

 int main(){
    // printf("%d\n", max_4(5,3,6,1));
    // printf("%d\n", max_4(54,32,16,15));


    // printf ("%d\n",max2(max2(23,156),15));


    int a = 12;
int b = 45;
int c = 78;
int d = 23;
int e = 91;

int max1 = max_2(a, b);
int max2 = max_2(max1, c);
int max3 = max_2(max2, d);
int max4 = max_2(max3, e);

printf("%d %d %d %d %d\n", a, b, c, d, e);

if(a != max4) printf("%d ", a);
if(b != max4) printf("%d ", b);
if(c != max4) printf("%d ", c);
if(d != max4) printf("%d ", d);
if(e != max4) printf("%d ", e);

printf("\n");


 }

 

//  4개의 정수중에 큰값을 찾는 함수
 
// int max4(int a, int b, int c, int d) {
//     int max_ab = max2(a, b);
//     int max_cd = max2(c, d);
//     return max2(max_ab, max_cd);
// }
