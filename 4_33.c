#include <stdio.h>

int change_1(int a);
void change_2(int *p);
void change_3(int a);
void swap (int* p, int* q);
void swap_wrong(int c,int d);

int main () {
    int a=7;
    printf("%d \n",&a);

    a=change_1(a);
    printf("%d \n", a);

    change_2(&a);
    printf("%d \n", a);
    printf("%d \n", &a);

    
    return 0;
}

int change_1(int a){
    return a+1;
}

void change_2(int *p) {
    *p= *p+1;
}

void change_3(int a){
    a++;
}