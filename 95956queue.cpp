#include <iostream>
using namespace std; // iostream 헤더 파일을 포함하여 cout, cin과 같은 입출력 함수를 사용할 수 있도록 합니다.

class Queue {
private:
    int* arr;       // 큐의 데이터를 저장할 배열 포인터
    int front;      // 큐의 앞쪽 인덱스
    int rear;       // 큐의 뒤쪽 인덱스
    int capacity;   // 큐의 최대 용량
    int size;       // 현재 큐의 크기

public:
    Queue(int cap); // 생성자: 큐의 최대 용량을 설정
    ~Queue();       // 소멸자: 큐가 소멸될 때 호출

    void enqueue(int item);   // 큐에 아이템 추가하는 함수
    int dequeue();            // 큐에서 아이템 제거하는 함수
    bool isEmpty();           // 큐가 비어있는지 확인하는 함수
    int getSize();            // 현재 큐의 크기를 반환하는 함수
};

Queue::Queue(int cap) {
    capacity = cap; // 큐의 최대 용량을 설정
    front = 0;      // 큐의 앞쪽 인덱스를 초기화
    rear = -1;     // 큐의 뒤쪽 인덱스를 초기화
    size = 0;      // 현재 큐의 크기를 초기화
    arr = new int[capacity]; // 배열을 동적 할당
}

Queue::~Queue() {
    delete[] arr; // 배열을 동적 할당 해제
}

void Queue::enqueue(int item) {
    if (size == capacity) { // 큐가 이미 가득 찼다면
        cout << "Queue is full!" << endl; // "Queue is full!"을 출력
        return; // 함수를 종료
    }
    rear = (rear + 1) % capacity; // rear를 증가시키고
    arr[rear] = item; // arr에 아이템을 저장
    size++; // size를 증가시키고
}

int Queue::dequeue() {
    if (isEmpty()) { // 큐가 이미 비어 있다면
        cout << "Queue is empty!" << endl; // "Queue is empty!"을 출력
        return -1; // -1을 반환
    }
    int item = arr[front]; // front에서 아이템을 가져옴
    front = (front + 1) % capacity; // front를 증가시키고
    size--; // size를 감소시키고
    return item; // 아이템을 반환
}

bool Queue::isEmpty() {
    return size == 0; // 큐가 비어있는지 확인
}

int Queue::getSize() {
    return size; // 현재 큐의 크기를 반환
}

class EliminationGame {
private:
    int n; // 총 인원 수
    int step; // 제거 단계
    Queue people; // 사람들을 저장하는 큐

public:
    EliminationGame(int n, int step) : n(n), step(step), people(n) {
        // 큐에 1부터 n까지의 사람 번호 추가
        for (int i = 1; i <= n; ++i) {
            people.enqueue(i); // 큐에 아이템 추가
        }
    }

    int play() {
        while (people.getSize() > 1) { // 큐의 크기가 1보다 크다면
            // step-1 만큼 사람을 큐의 뒤로 이동
            for (int i = 0; i < step - 1; ++i) {
                int person = people.dequeue(); // 큐의 앞쪽 사람
                people.enqueue(person); // 큐의 뒤로 추가
            }

            // 제거할 사람
            int eliminatedPerson = people.dequeue(); // 제거할 사람

            // 제거된 사람 출력
            cout << "Eliminated person: " << eliminatedPerson << endl;
        }

        // 마지막 남은 사람의 번호 반환
        return people.dequeue();
    }
};

int main() {
    int n = 43; // 총 인원 수
    int step = 3; // 제거 단계

    EliminationGame game(n, step);
    int lastPerson = game.play();

    cout << "The last remaining person is: " << lastPerson << endl;

    return 0;
}