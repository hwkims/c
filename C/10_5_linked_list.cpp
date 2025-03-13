// 10_5_linked_list.cpp
#include <iostream>
using namespace std;

// 배열: 같은 자료형, 연속된 공간
// 리스트: 같은 자료형, 포인터로 연결
struct NODE {
    NODE(int data=0) : data(data), next(NULL) {}

    int data;
    NODE* next;
};

void show_node(NODE* cur);

int main() { 
    // 퀴즈
    // n0, n1, n2, n3을 연결하세요
    NODE n0(0);
    NODE n1(1);
    NODE n2(2);
    NODE n3(3);

    NODE* head = &n0;
    n0.next = &n1;
    n1.next = &n2;
    n2.next = &n3;

    // 퀴즈
    // head만 사용해서 모든 노드의 값을 출력하세요
    cout << head->data << ' ';
    cout << head->next->data << ' ';
    cout << head->next->next->data << ' ';
    cout << head->next->next->next->data << endl;

    // 퀴즈
    // 반복문을 사용해서 모든 노드를 출력하세요
    NODE* cur = head;
    while (cur) {
        cout << cur->data << ' ';
        cur = cur->next;
    }
    cout << endl;

    show_node(head);

    return 0;
}

// 퀴즈
// 재귀 함수를 사용해서 모든 노드를 출력하세요
void show_node(NODE* cur) {
    if (cur) {
        cout << cur->data << ' ';
        show_node(cur->next);
    }
}

