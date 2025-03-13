// for
#include <stdio.h>

int main(){
   int i=0;

    for( i= 0; i<5; i++){

    
    printf("%d",i);
if (i==3)
continue;
    }
    printf("\n");

 i=0;
    while(i<5){
        printf("%d",i);

// if (i==2)
// break;

// if (i==3)
// continue;

        i++;
    }

    i=0;
    do{
        printf("%d",i);
        i++;
    }
    while(i<5);
    printf("\n");

    return 0;
}