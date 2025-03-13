#include <iostream>
using namespace std;

class Array {
private:
    int buf[5];

public:
    // 생성자
    Array() {
        for (int i = 0; i < 5; i++)
            buf[i] = 0; // 모든 요소를 0으로 초기화
    }

    // 소멸자
    ~Array() {
        // 필요시 자원 해제 코드 삽입
    }

    // 배열 요소 출력 함수
    void show() {
        for (int i = 0; i < 5; i++)
            cout << buf[i] << ' '; // 출력 연산자 수정
        cout << endl; // 출력 후 줄 바꿈
    }
};

int main() {
    Array arr; // Array 객체 생성
    arr.show(); // 배열 요소 출력
    return 0;
}