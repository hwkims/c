// 6_4_2d_array.c
#include <stdio.h>

void show_2d_array(int a[3][5]);
int sum_2d_array(int a[3][5]);

int main()
{
    int a[3][5] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14},
    };

    int(*p)[5] = a;

    printf("%d\n", a); // a+1    -> 20
    printf("%d\n", a + 1);
    printf("%d\n", a[0]); // a[0]+1 -> 4
    printf("%d\n", a[0] + 1);
    printf("%d\n", a[0][0]);
    printf("%d\n", &a[0][0]); // &a[0][0]+1 -> 4
    printf("\n");

    int n = 3;
    int *p = &n;
    // p+1 -> 4

    int **q = &p;
    // q+1->4

    int ***r = &q;

    // r+1->4

    printf("%d\n", p);
    printf("%d\n", p[0]);
    printf("%d\n", *(p + 0));
    printf("%d\n", *p);
    printf("%d\n", q[0][0]);
    printf("%d\n", **q);
    printf("%d\n", r[0][0][0]);

    // show_2d_array(a);

    printf("sum : %d\n", sum_2d_array(a));
    printf("sum : %d\n", sum_2d_array(*&a));
    printf("sum : %d\n", sum_2d_array(&a[0]));
    return 0;
}

// 퀴즈
// 2차원 배열을 출력하는 함수를 만드세요
void show_2d_array(int a[3][5])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}

int sum_2d_array(int a[][5])
{
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            s += a[i][j];
        }
    }

    return s;
}
