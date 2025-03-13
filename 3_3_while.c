// while

#include <stdio.h>
//  0 4 1

//  4 8 1

//  4 0 -1


void num(int s, int e, int ss){
    while ((ss > 0 && s <= e) || (ss < 0 && s >= e)){
        printf("  %d  ", s);
        s += ss;
    }

          printf("\n ");
}



void f5(  int j,int i){
 
 
    while (j<=i)
    {
        printf("%c %d\n",j,j)  ;
        j++;  /* code */
    }
    
}

// 알파벳 소문자 전체 거꾸로출력

void f51(  int i,int j){

    if(i>=j){
     while (i>=j)
    {
        printf("%c %d\n",i,i)  ;
        i--;  /* code */
    }
    }

    else
    {

         while (i<=j)
    {
        printf("%c %d\n",i,i)  ;
        i++;  /* code */
    }
   }


}

void fp(int a , int b){
  int c=0;
    while (b>=a)
    {
        
            printf("%d \n ",a);
            c+=a;
            a++;
    }
    printf("%d \n ",c);
    

}

int main( ){
    // int i;



    // i=0;

    // while (i<=4){
    //     printf( "  %d  " ,i);
    //     i++;

    // }
    

//     num(0,4,1);
//     num(4,8,1);
//     num(4,0,-1);
//     num(8,0,-3);

//    int i=5;

//     while(i>0){
//         printf("hello ");
//         i-=1;
//     }
//     printf("\n");


// //  f5('A','Z');

//  f51('a','z');
// //  f5('z','a');

// f51('A','Z');

f51('z','a');

f51('a','z');

// 1~5 까지의 합계 를 구하시오.
fp(1,5);
fp(1,100);
    return 0;
}




