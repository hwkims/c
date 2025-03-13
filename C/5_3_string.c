// 5_3_string.c
#include <stdio.h>
#include <string.h>

int my_len(const char s[256]);
char* my_cpy(char* dst, const char* src);

int main() {      
    char s[256] = "mountain";
    char buffer[256];

    printf("length : %d\n", strlen(s));

    strcpy(buffer, s);
    puts(buffer);

    strcat(buffer, s);      // 문자열 덧셈
    puts(buffer);

    // 문자열 관계 (-1, 0, 1 반환)
    printf("compare : %d\n", strcmp(s, buffer));
    printf("compare : %d\n", strcmp(s, s));
    printf("compare : %d\n", strcmp(buffer, s));

    printf("find : %d\n", strchr(s, 'a'));
    printf("find : %d\n", *strchr(s, 'a'));

    // 퀴즈
    // a가 몇 번째 글자인지 알려주세요
    printf("n_th : %d\n", strchr(s, 'a') - s);

    printf("find : %s\n", strstr(buffer, s));
    printf("find : %d\n", strstr(buffer, s));

    // 실패하면, 0(null pointer) 반환
    printf("find : %d\n", strstr(buffer, "sea"));   

    printf("length : %d\n", strlen(s));
    printf("length : %d\n", my_len(s));

    printf("copy : %s\n", strcpy(buffer, "hello"));
    printf("copy : %s\n", my_cpy(buffer, "world123456789"));

    return 0;
}

// 퀴즈
// 문자열의 길이를 알려주는 함수를 만드세요
int my_len(const char* s) {
    // 0 1 2 3 4 ...    0, ?, 1

    // 1번
    // int i = 0;
    // while (s[i] != '\0') {
    //     i++;
    // }
    // return i;

    // 2번
    // int i = 0;
    // while (s[i++])
    //     ;
    
    // return i-1;

    // 3번
    const char* p = s;
    while (*p++)
        ;
    
    return p - s - 1;
}

// 퀴즈
// 문자열을 복사하는 함수를 만드세요
char* my_cpy(char* dst, const char* src) {
    // 1번
    // int i = 0;
    // while (src[i] != '\0') {
    //     dst[i] = src[i];
    //     i++;
    // }
    // dst[i] = '\0';

    // 틀린 코드
    // dst: hello
    // src: wordl123456789
    // int i = 0;
    // while (dst[i] != '\0') {
    //     dst[i] = src[i];
    //     i++;
    // }

    // return dst;

    // 3번
    // char* base = dst;
    // while (*src)
    //     *dst++ = *src++;
    
    // *dst = '\0';

    // 4번
    char* base = dst;
    while (*dst++ = *src++)
        ;

    return base;
}
