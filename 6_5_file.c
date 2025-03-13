#include <stdio.h>

void print_file_1(){
     FILE* fp= fopen("poem.txt","r");

     printf("%d\n",fp);


int i;

int size= 220;

char ch;
// for (i=0;i<size;i++){
    
    while(1){
      ch= fgetc(fp);

if (ch==-1)
break;
        putchar(ch);
}

     fclose(fp);
}
int main(){
    print_file_1();

    return 0;
}
