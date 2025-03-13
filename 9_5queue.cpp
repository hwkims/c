#include <iostream> // 입출력을 위한 헤더 파일 포함
using namespace std; // 표준 네임스페이스 사용

class Queue { // Queue 클래스 정의
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
    void show();              // 큐의 현재 상태를 출력하는 함수
};

Queue::Queue(int cap) { // 생성자 정의
    capacity = cap; // 최대 용량 설정
    front = 0;      // 앞쪽 인덱스 초기화
    rear = -1;      // 뒤쪽 인덱스 초기화
    size = 0;       // 현재 큐의 크기 초기화
    arr = new int[capacity]; // 동적 배열 할당
}

Queue::~Queue() { // 소멸자 정의
    delete[] arr; // 동적 배열 해제
}

void Queue::enqueue(int item) { // enqueue 함수 정의
    if (size == capacity) { // 큐가 가득 찼을 경우
        cout << "Queue is full!" << endl; // 큐가 가득 찼다는 메시지 출력
        return; // 함수 종료
    }
    rear = (rear + 1) % capacity; // 원형 큐 구현을 위한 뒤쪽 인덱스 갱신
    arr[rear] = item; // 배열에 아이템 추가
    size++; // 큐의 크기 증가
}

int Queue::dequeue() { // dequeue 함수 정의
    if (isEmpty()) { // 큐가 비어있을 경우
        cout << "Queue is empty!" << endl; // 큐가 비어있다는 메시지 출력
        return -1; // 에러 코드 반환
    }
    int item = arr[front]; // 앞쪽 아이템 저장
    front = (front + 1) % capacity; // 원형 큐 구현을 위한 앞쪽 인덱스 갱신
    size--; // 큐의 크기 감소
    return item; // 제거한 아이템 반환
}

bool Queue::isEmpty() { // isEmpty 함수 정의
    return size == 0; // 큐가 비어있으면 true 반환
}

void Queue::show() { // show 함수 정의
    if (isEmpty()) { // 큐가 비어있을 경우
        cout << "Queue is empty!" << endl; // 큐가 비어있다는 메시지 출력
        return; // 함수 종료
    }
    cout << "Queue elements: "; // 큐의 요소 출력 시작
    for (int i = 0; i < size; i++) { // 큐의 모든 요소 출력
        cout << arr[(front + i) % capacity] << " "; // 원형 큐 구현을 위한 인덱스 계산
    }
    cout << endl; // 줄 바꿈

    // 내부 포인터 상태 출력
    cout << "Front index: " << front << endl; // 앞쪽 인덱스 출력
    cout << "Rear index: " << rear << endl; // 뒤쪽 인덱스 출력
    cout << "Current size: " << size << endl; // 현재 큐의 크기 출력
    cout << "Capacity: " << capacity << endl; // 큐의 최대 용량 출력
}

int main() { // 메인 함수 시작
    Queue q(5); // 용량이 5인 큐 생성

    q.enqueue(10); // 큐에 10 추가
    q.enqueue(20); // 큐에 20 추가
    q.enqueue(30); // 큐에 30 추가
    q.enqueue(10); // 큐에 10 추가
    q.enqueue(20); // 큐에 20 추가
    q.enqueue(30); // 큐에 30 추가
    q.show(); // 큐의 상태 출력

    cout << "Dequeued: " << q.dequeue() << endl; // 큐에서 아이템 제거 후 출력
    q.show(); // 큐의 상태 출력

    return 0; // 프로그램 종료
}