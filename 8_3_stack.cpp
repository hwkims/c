#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> elements; // 스택의 요소를 저장할 벡터

public:
    Stack(); // 생성자
    ~Stack(); // 소멸자

    void push(int value); // 요소 삽입
    void pop(); // 요소 삭제
    int top(); // 최상위 요소 반환
    bool isEmpty(); // 스택이 비어있는지 확인
};

// 생성자
Stack::Stack() {
    // 초기화 작업이 필요할 경우 여기에 추가
}

// 소멸자
Stack::~Stack() {
    // 자원 해제 작업이 필요할 경우 여기에 추가
}

// 요소 삽입
void Stack::push(int value) {
    elements.push_back(value);
}

// 요소 삭제
void Stack::pop() {
    if (!isEmpty()) {
        elements.pop_back();
    } else {
        cout << "스택이 비어있습니다!" << endl;
    }
}

// 최상위 요소 반환
int Stack::top() {
    if (!isEmpty()) {
        return elements.back();
    } else {
        cout << "스택이 비어있습니다!" << endl;
        return -1; // 에러 값을 반환
    }
}

// 스택이 비어있는지 확인
bool Stack::isEmpty() {
    return elements.empty();
}

int main() {
    Stack stack; // 스택 객체 생성

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "최상위 요소: " << stack.top() << endl; // 30 출력

    stack.pop(); // 30 삭제
    cout << "최상위 요소: " << stack.top() << endl; // 20 출력

    stack.pop(); // 20 삭제
    stack.pop(); // 10 삭제

    stack.pop(); // 스택이 비어있습니다! 출력

    return 0;
}