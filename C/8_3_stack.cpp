// 8_3_stack.cpp
#include <iostream>
using namespace std;

// 퀴즈
// C버전으로 만든 스택을 클래스 버전으로 만드세요
class Stack {
private:
    int buf[256];
    int top;

public:
    Stack() : top(0) {
        cout << "Stack" << endl;
    }

    void push(int n) {
        buf[top++] = n;
    }

    int pop() {
        return buf[--top];
    }

    bool is_empty() {
        return top == 0;
    }
};

int main() {      
    Stack stack;

    int orders[] = {5, 1, 8, 3, 4, 9, 2};

    for (int i = 0; i < 7; i++)
        stack.push(orders[i]);

    for (int i = 0; stack.is_empty() == false; i++)
        orders[i] = stack.pop();

    for (int i = 0; i < 7; i++)
        cout << orders[i] << ' ';
    cout << endl;

    return 0;
}

