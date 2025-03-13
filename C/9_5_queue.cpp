// 9_5_queue.cpp
#include <iostream>
using namespace std;

class Queue {
private:
    int buf[5];
    int front, rear;

public:
    Queue() : front(0), rear(0) {
        for (int i = 0; i < 5; i++)
            buf[i] = 0;
    }

    void enqueue(int n) {
        buf[front] = n;
        front = (front+1) % 5;
    }

    int dequeue() {
        int n = buf[rear];
        rear = (rear+1) % 5;
        return n;
    }

    bool is_empty() {
        return front == rear;
    }

    void show() {
        for (int i=rear; i%5 != front; i++)
            cout << buf[i] << ' ';
        cout << endl;

        for (int i = 0; i < 5; i++)
            cout << buf[i] << ' ';
        cout << endl;

        char ch;
        for (int i = 0; i < 5; i++) {
            ch = (i == front) ? 'F' : (i == rear) ? 'R' : ' ';
            cout << ch << ' ';
        }
        cout << endl << endl;
    }
};

void queue_test() {
    Queue q;
    q.show();

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.show();

    q.dequeue();
    q.dequeue();
    q.show();

    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.show();

    q.dequeue();
    q.dequeue();
    q.show();
}

int main() {      
    queue_test();
    return 0;
}
