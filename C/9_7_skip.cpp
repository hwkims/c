// 9_7_skip.cpp
#include <iostream>
using namespace std;

class Queue {
private:
    int buf[256];
    int front, rear;

public:
    Queue() : front(0), rear(0) {
    }

    void enqueue(int n) {
        buf[front] = n;
        front = (front+1) % 256;
    }

    int dequeue() {
        int n = buf[rear];
        rear = (rear+1) % 256;
        return n;
    }

    bool is_empty() {
        return front == rear;
    }
};

// 퀴즈
// 43명이 둘러앉아 있는 상황에서 세 번째 앉은 사람은 죽는다
// 마지막에 남은 두 사람의 번호를 알려주세요
int main() {      
    Queue q;
    for (int i=1; i <= 43; i++)
        q.enqueue(i);

    for (int i=0; i < 41; i++) {
        q.enqueue(q.dequeue());
        q.enqueue(q.dequeue());
        q.dequeue();
    }

    while (q.is_empty() == false) 
        cout << q.dequeue() << ' ';
    cout << endl;

    return 0;
}
