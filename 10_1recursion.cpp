#include <iostream>

using namespace std;

void printString(const char* str, int index) {
    // 문자열의 끝에 도달했는지 확인
    if (str[index] == '\0') {
        return; // 기저 사례: 문자열 끝
    }

    // 현재 문자를 출력
    cout << str[index];

    // 다음 문자 출력하기 위한 재귀 호출
    printString(str, index - 1);
}

int main() {
    const char* s = "hello";
    printString(s, 4); // 문자열 출력 시작
    cout << endl; // 줄 바꿈
    return 0;
}