// 6_3_for.c
#include <stdio.h>

int main() {      
    // 0 1 2 3 4      0, 5, 1
    //      시작   종료   증감
    //        1     2      3
    for(int i = 0; i < 5; i++) {
        printf("%d ", i);           // 4

        // if (i == 2)
            // break;                  // 반복문 탈출

        if (i == 3)
            continue;
    }
    printf("\n");

    int i = 0;
    while (i < 5) {
        printf("%d ", i);

        // if (i == 2)
        //     break;                  // 반복문 탈출

        // if (i == 3)
        //     continue;            //마지막으로 이동

        i++;
    }
    printf("\n");

    i = 0;
    do {
        printf("%d ", i);
        i++;
    }
    while (i < 5);
    printf("\n");

    return 0;
}

