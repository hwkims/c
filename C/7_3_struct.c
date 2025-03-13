// 7_3_struct.c
#include <stdio.h>

struct POINT {
    int x, y;
};

struct RECT {
    struct POINT pt1, pt2;
};

void show_point(struct POINT pt);
struct POINT change_1();
void change_2(struct POINT* ppt);

int main() {      
    struct POINT pt = {10, 20};

    printf("%d %d\n", pt.x, pt.y);

    // 퀴즈
    // scanf 함수를 통해 pt에 좌표를 입력 받아보세요
    // scanf("%d %d", &pt.x, &pt.y);
    // printf("%d %d\n", pt.x, pt.y);

    pt = change_1();
    show_point(pt);

    change_2(&pt);
    show_point(pt);

    struct RECT rc = {
        {1, 2}, 
        {3, 4},
    };

    // 퀴즈
    // RECT 구조체에 포함된 모든 값을 출력하세요
    printf("%d %d %d %d\n", rc.pt1.x, rc.pt1.y, rc.pt2.x, rc.pt2.y);

    // 퀴즈
    // p를 선언하고 p를 사용해서 RECT의 모든 값을 출력하세요
    struct RECT* p = &rc;
    printf("%d %d %d %d\n", p->pt1.x, (*p).pt1.y, (&p->pt2)->x, (&(*p).pt2)->y);

    return 0;
}

void show_point(struct POINT pt) {
    printf("%d %d\n", pt.x, pt.y);
}

// 퀴즈
// POINT 구조체의 x, y를 88, 99로 변경하는 함수를 만드세요
struct POINT change_1() {
    struct POINT pt = {88, 99};
    return pt;
}

void change_2(struct POINT* ppt) {
    (*ppt).x = 66;
    ppt->y = 77;
}
