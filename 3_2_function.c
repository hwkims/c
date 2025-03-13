// 3_2_function.c

#include <stdio.h>

int twice(int n, int m)

{

 int a=n*m;
    return a;
}

int main()
{
    int a = 1, b = 2, c = 3;
    a= b+c;
    printf("%d \n",a);
    // printf ("%d\n",twice(a));


    // int k1 = twice (a);
    // int k2 = twice (k1);
    // int k3 = twice (k2);
    // int k4 = twice (k3);
    // int k5 = twice (k4);
    // printf ("%d\n",twice(k5));


int n=0;
    while (n<a)
    {
        n++;
        
          printf ("%d\n",twice(a,n));


    }
    


    return 0;
}
