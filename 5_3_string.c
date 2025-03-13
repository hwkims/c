// 5_3_string.c

#include <stdio.h>
#include <string.h>

int mylen(const char s[256]){
    int i=0;
    // while (s[i]!='\0')
    // {
    //     /* code */
    //     i++;
    // }

const char* p=s;
    while (*p++)
    {
      ;
        
    }

    return p-s-1;
    //     while (s[i++])
    // {
    //     /* code */
        
    // }

    // return i-1;
}
// int mylen(char *c)
// {

//     int n = 0;

//     while (*c++)
//     {
//         n++;
//     }

//     return n;
// }


// 문자열을 복사하는 함수를 만드세요

// int py2(char *o, char *c){
//     while ((*c = *o) != '\0') {
//         o++;
//         c++;
//     }
//     return *c;
// }

char* my_cpy(char* dst, const char* src){
//     int i=0;
//     while (src[i] !='\0'){
// dst[i]=src[i];
// i++;
//     }
//     dst[i]='\0';
   

//     return dst; 
  
//   char* base = dst;
//     while (*src !='\0'){
// *dst++=*src++;
 
//     }
//     *dst='\0';
   

//     return base;
// }
  char* base = dst;
    while (*dst++=*src++){
;
 
    }
 
   

    return base;
}
int main()
{

    char s[256] = "mountain";
    char buffer[256];
    printf("length : %d \n", strlen(s));

    strcpy(buffer, s);

    puts(buffer);

    strcat(buffer, s);

    puts(buffer);

    printf("compare : %d\n", strcmp(s, buffer));
    printf("compare : %d\n", strcmp(s, s));

    printf("compare : %d\n", strcmp(buffer, s));

    printf("find : %d \n", strchr(s, 'a'));
    printf("find : %d \n", *strchr(s, 'a'));

    // a가 몇번째 글자인지

    printf("n_th : %d \n", strchr(s, 'a') - s);

    printf("find : %s \n ", strstr(buffer, s));

    printf("find : %d \n ", strstr(buffer, s));

    //    실패하면 0 (null pointer)반환

    printf("find :%d \n", strstr(buffer, "sea"));

    printf("%d", mylen("gfdg"));

    printf("copy : %s \n",strcpy(buffer,"hello"));
    printf("copy : %s \n",strcpy(buffer,"world"));

    printf("copy : %s \n",my_cpy(buffer,"world22"));

    return 0;
}

// 문자열의 길이를 알려주는 함수




void copy_array(int* src, int* dst, int size){

    int i=0;
    while (i<size){
        dst[i]=src[i];
        i++;
    }
}


 