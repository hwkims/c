// 3_2_function.c
#include <stdio.h>

int twice(int n) {
    return n * 2;
}

int main() {      
    int a = 1, b = 2, c = 3;
    a = b + c;
    printf("%d\n", a);

    a = 1;
    int k1 = twice(a);
    int k2 = twice(k1);
    int k3 = twice(k2);
    int k4 = twice(k3);
    printf("%d\n", k4);

    a = 1;
    printf("%d\n", twice(twice(twice(twice(a)))));

    return 0;
}
