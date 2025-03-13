// 9_2_template.cpp
#include <iostream>
#include <cstring>
using namespace std;

// void swap(int* p, int* q);
// void swap(double* p, double* q);

template <typename T>
void swap(T* p, T* q) {
    T t = *p;
    *p = *q;
    *q = t;
}

void swap(char* s1, char* s2) {
    char t[128];
    strcpy(t, s1);
    strcpy(s1, s2);
    strcpy(s2, t);
}

int main() {      
    int a1 = 3, a2 = 7;
    cout << a1 << ' ' << a2 << endl;

    swap(&a1, &a2);
    cout << a1 << ' ' << a2 << endl;

    double b1 = 3.14, b2 = 2.7182;
    cout << b1 << ' ' << b2 << endl;

    swap(&b1, &b2);
    cout << b1 << ' ' << b2 << endl;

    // 퀴즈
    // C언어의 문자열을 교환하는 함수를 만드세요
    // main 함수에 필요한 변수까지 선언해 주세요
    char* s1 = "sunny", * s2 = "cloudy";
    cout << s1 << ' ' << s2 << endl;

    swap(&s1, &s2);
    cout << s1 << ' ' << s2 << endl;

    char s3[128] = "rainy", s4[128] = "thunder";
    cout << s3 << ' ' << s4 << endl;

    swap(s3, s4);
    cout << s3 << ' ' << s4 << endl;

    char* s = "hello";
    char** p = &s;
    *p = "world";

    int k = 11;
    int* m = &k;
    *m = 22;

    return 0;
}

// void swap(int* p, int* q) {
//     int t = *p;
//     *p = *q;
//     *q = t;
// }

// void swap(double* p, double* q) {
//     double t = *p;
//     *p = *q;
//     *q = t;
// }

