#include <iostream>

using namespace std;

// 재귀 함수: 1부터 n까지의 합계를 계산
int sumRecursive(int n) {
    // 기저 사례: n이 1 이하인 경우
    if (n <= 1) {
        return n;
    }

    // 재귀 호출: n-1까지의 합계에 n을 더함
    return n + sumRecursive(n - 1);
}

int main() {
    int n=30;

    int result = sumRecursive(n);
    cout << "1부터 " << n << "까지의 합계: " << result << endl;

    return 0;
}