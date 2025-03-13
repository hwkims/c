#include <stdio.h>

// Function to print a 2D array
void dlck(int a[3][5]) {

    int i;
    for ( i = 0; i < 3; i++) { // Change to 3 to match the number of rows


    int j;
        for ( j = 0; j < 5; j++) {
            printf("%d ", a[i][j]); // Print each element followed by a space
        }
        printf("\n"); // Print a newline after each row
    }
}

// 더하기

int ejgka(int a[3][5]) {
int sum;
    int i;
    for ( i = 0; i < 3; i++) { // Change to 3 to match the number of rows


    int j;
        for ( j = 0; j < 5; j++) {
            printf("%d ", a[i][j]); // Print each element followed by a space

            sum+=a[i][j];
        }
        printf("\n"); // Print a newline after each row
    }


    return sum;
}

 



int main() {
    // Properly initializing a 2D array
    int a[3][5] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14}
    };

   

    // Print the address of the entire array, the first row, and the first element
    printf("Address of array: %p\n", (void*)a);
    printf("Address of first row: %p\n", (void*)a[0]);
    printf("First element: %d\n", a[0][0]);

    // Pass the array to the function
    dlck(a); // Pass the array correctly
int b[2][2];
printf("%d", sizeof(b));
printf("%d", ejgka(a));

printf("%d", ejgka(&*a));
printf("%d", ejgka(&a[0]));
printf("%d\n",&a[0][0]);


int n=3;
int* p = &n;
int** q= &p;
int*** r= &q;

printf("11%d\n",n);
printf("11%d\n",&n);
printf("11%d\n",*(&n));

printf("%d\n",p);
printf("%d\n",*(p+1));
printf("%d\n",p[0]);
printf("%d\n",q);

 
// q를 이용하여 n을 출력하시오
printf("%d\n",**q);
printf("%d\n",q[0][0]);
printf("%d\n",*q[0]);


//    int (g)[3][5]=a;

   int(* g)[5]=a;

    return 0;
}                                    
