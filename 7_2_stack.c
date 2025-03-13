// 7_2_stack.c
#include <stdio.h>

// C - 자료구조 - C++
// 스택: 곽티슈, 프링글스, 변수 할당, 함수 호출, 물르기
// 후입선출li fo

// 큐 줄서기 선입선출 fi fo

void push(int n);
int pop();
int is_empty();

int g_stack[256];
int g_top = 0;          // 데이터가 들어가는 위치

int main() {  
    push(11);
    push(22);
    push(33);
    push(44);

    // 퀴즈
    // 스택에 들어있는 모든 데이터를 출력하세요
    while (!is_empty()) {
        printf("%d\n", pop());
    }

    // 퀴즈
    // 스택을 사용해서 1차원 배열을 거꾸로 뒤집어보세요
    int orders[] = {5, 1, 8, 3, 4, 9, 2};   // 2 9 4 3 8 1 5

    for (int i = 0; i < 7; i++)
        push(orders[i]);

    for (int i = 0; is_empty() == 0; i++)
        orders[i] = pop();

    for (int i = 0; i < 7; i++)
        printf("%d ", orders[i]);
    printf("\n");

    // 퀴즈
    // 스택을 사용하지 말고 1차원 배열을 거꾸로 뒤집어보세요
    // 2 9 4 3 8 1 5
    // int t;
    // t = orders[0];
    // orders[0] = orders[6];
    // orders[6] = t;

    // t = orders[1];
    // orders[1] = orders[5];
    // orders[5] = t;

    // t = orders[2];
    // orders[2] = orders[4];
    // orders[4] = t;

    int t;
    for (int i = 0; i < 7/2; i++) {
        t = orders[i];
        orders[i] = orders[7-1-i];
        orders[7-1-i] = t;
    }


    for (int i = 0; i < 7; i++)
        printf("%d ", orders[i]);
    printf("\n");

    return 0;
}

void push(int n) {
    g_stack[g_top++] = n;
}

int pop() {
    return g_stack[--g_top];
}

int is_empty() {
    return g_top == 0;
}
