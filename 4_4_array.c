#include <stdio.h>
#include <stdlib.h>

void make_randoms(int *p, int size);
void show_array(int* p, int size);
void show_odd(int* p , int size);



int main(){

    srand(23);

    printf("%d\n",rand());
    int a= rand();

    int randoms [10];

    int k[100];

    make_randoms(randoms,10);

    show_array(randoms,sizeof(randoms)/sizeof(randoms[0]));
 show_odd(randoms,10);


    return 0;
}

void make_randoms(int *p, int size){

    int i =0;
    while (i <size){
        p[i]=rand()%100;
        i++;
    }
}

void show_array(int* p, int size){
    int i=0;
    while (i<size){
        printf("%d ",p[i]);
        i++;
    }
    printf("\n");

}
void show_odd(int* p , int size){

    int i=0;
    while (i<size){
        if (p[i]%2)
        printf("%d ",p[i]);
        i++;
    }
    printf("\n");

}