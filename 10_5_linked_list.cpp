#include <iostream> // 입출력 스트림 라이브러리 포함

using namespace std; // 표준 네임스페이스 사용

// Stack 클래스 정의
class Stack {
private:
    int* arr; // 스택의 요소를 저장할 배열
    int top; // 스택의 최상위 요소 인덱스
    int capacity; // 스택의 최대 용량

public:
    // 생성자: 스택 초기화
    Stack(int size) {
        arr = new int[size]; // 주어진 크기로 배열 동적 할당
        capacity = size; // 최대 용량 설정
        top = -1; // 스택이 비어 있으므로 top을 -1로 설정
    }

    // 소멸자: 동적 할당된 배열 메모리 해제
    ~Stack() {
        delete[] arr; // 배열 메모리 해제
    }

    // 스택에 요소 추가 (푸시)
    void push(int x) {
        if (top == capacity - 1) { // 스택이 가득 찼는지 확인
            cout << "스택이 가득 찼습니다." << endl;
            return;
        }
        arr[++top] = x; // top을 증가시키고 배열에 요소 추가
        cout << x << " 푸시됨" << endl;
    }

    // 스택에서 요소 제거 (팝)
    int pop() {
        if (top == -1) { // 스택이 비어 있는지 확인
            cout << "스택이 비어 있습니다." << endl;
            return -1; // 에러 코드 반환
        }
        return arr[top--]; // 최상위 요소 반환 후 top 감소
    }

    // 스택의 최상위 요소 반환
    int peek() {
        if (top == -1) { // 스택이 비어 있는지 확인
            cout << "스택이 비어 있습니다." << endl;
            return -1; // 에러 코드 반환
        }
        return arr[top]; // 최상위 요소 반환
    }

    // 스택이 비어 있는지 확인
    bool isEmpty() {
        return top == -1; // top이 -1이면 비어 있음
    }
};

int main() {
    Stack stack(5); // 용량이 5인 스택 생성

    // 스택에 요소 추가
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // 스택의 최상위 요소 확인
    cout << "최상위 요소: " << stack.peek() << endl;

    // 요소 제거
    cout << stack.pop() << " 팝됨" << endl;
    cout << "최상위 요소: " << stack.peek() << endl;

    return 0; // 프로그램 정상 종료
}