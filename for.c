#include <stdio.h>

int main()
{

    int i;
    for (i = 0; i < 5; i++)
    {

        //    printf(" ");

        //     int j;
        //     for (j = 0; j < 5; j++)
        //     {
        //        if(i==j)

        //         printf("*");

        //         else
        //         if((i+j)==4)

        //         printf("*");

        //         else
        //         printf(" ");

        //     }

        //     printf("\n");
        // 엑스였음

        printf(" ");

        int j;
        for (j = 0; j < 5; j++)
        {
            if ((i == 0) || i == 4 || j == 0 || j == 4)

                printf("*");

            else

                printf(" ");
        }

        printf("\n");
        // 박스
    }

    return 0;
    }
