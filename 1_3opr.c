#include <stdio.h>
#define TRUE 1
#define FALSE 0
// Swap a and b without using an additional variable
void swap(int *a, int *b)
{
    if (a != b)
    {
        if (*a > *b)
        {
            *a = *a + *b;
            *b = *a - *b;
            *a = *a - *b;
        }
        else
        {
            *a = *a - *b;
            *b = *a + *b;
            *a = *b - *a;
        }
    }
}

void f_3()
{
    int a = 3, b = 7;
    a = a + b;
    // printf("\n%d",a);
    //     printf("\n%d",b);
    b = a - b;
    printf("\n%d", b);
    a = a - b;
    printf("\n%d", a);
}

// 곱셍므로 하기
void f_4()
{
    int a = 3, b = 7;
    a = a * b;
    // printf("\n%d", a);
    // printf("\n%d", b);
    // b = a / b;
    // printf("\n%d", b);
    // a = a / b;
    // printf("\n%d", a);

    // printf("%d\n",a >b);
    // printf("%d\n",a >=b);
    // printf("%d\n",a <b);
    // printf("%d\n",a <=b);
    // printf("%d\n",a ==b);
    // printf("%d\n",a !=b);


    // 나이가 10대인지 알려주세요
    // int age=19;
    // age=age-10;
 
    // printf("%d\n", age <10  );

    // int age1=29;

    // printf("%d\n",age1 <20);

    // int age2=39;

    // printf("%d\n",age2 <20);

int age =23;
int c1 = age >=10;
int c2 =age <20;

printf("%d : %d\n",age,(c1+c2)==2);
printf("%d : %d\n",age,c1==c2); 
printf("%d : %d\n",age,c1*c2); 
printf("%d : %d\n",age,c1&&c2);  




age =13;
 c1 = age >=10;
c2 =age <20;


printf("%d : %d\n",age,(c1+c2)==2);
printf("%d : %d\n",age,c1==c2); 
printf("%d : %d\n",age,c1*c2); 
printf("%d : %d\n",age,c1&&c2);  

}
// 실수를 입력받아서 소숫점아래 영역만 출력
// 변수 ab 값을 추가변수 없이 교환

void f_2()
{

    int a = 0;
    printf("input :");
    scanf("%d", &a);
}
void f_5();
int main()
{
    // int a = 5;
    // int b = 10;

    // printf("Before swap: a = %d, b = %d\n", a, b);

    // swap(&a, &b);

    // printf("After swap: a = %d, b = %d\n", a, b);

    f_5();

    return 0;
}

void f_5() {
 printf("%d\n",TRUE);

 printf("%d\n",TRUE && TRUE);
 printf("%d\n",TRUE && FALSE);
 printf("%d\n",FALSE && TRUE);
 printf("%d\n",FALSE && FALSE);

 unsigned int c= -1;
 printf("%u\n",c);
  printf("%u\n",c+1);
   printf("%u\n",c+c);
}
