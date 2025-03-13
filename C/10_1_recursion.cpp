// 10_1_recursion.cpp
#include <iostream>
#include <cstring>
using namespace std;

void show(int i);
void show_char_1(const char* s, int i);
void show_char_2(const char* s);
void show_rev_char_1(const char* s, int i);
void show_rev_char_2(const char* s);
int sum(int i);

int main() {
    // show(0);      

    const char* s = "hello";
    show_char_1(s, 0);      cout << endl;
    show_char_2(s);         cout << endl;

    show_rev_char_1(s, strlen(s)-1);  cout << endl;
    show_rev_char_2(s);               cout << endl;

    cout << "10 :" << sum(10) << endl;
    cout << "100 :" << sum(100) << endl;
    return 0;
}

void show(int i) {
    // if (i < 5-1)
    //     show(i+1);

    // cout << "show";

    // if (i < 5) {
    //     show(i+1);
    //     cout << "show";
    // }

    if (i >= 5)
        return;

    show(i+1);
    cout << "show";
}

// 퀴즈
// 문자열을 출력하는 재귀 함수를 만드세요
// (한 번 호출할 때마다 한 글자씩 출력)
void show_char_1(const char* s, int i) {
    if (s[i] == '\0')
        return;

    cout << s[i];           // *(s+i)
    show_char_1(s, i+1);
}

void show_char_2(const char* s) {
    if (*s) {
        cout << *s;             // hello
        show_char_2(s+1);
    }
}

// 퀴즈
// 문자열을 거꾸로 출력하는 재귀 함수를 만드세요
// (한 번 호출할 때마다 한 글자씩 출력)
void show_rev_char_1(const char* s, int i) {
    if (i >= 0) {
        cout << s[i];
        show_rev_char_1(s, i-1);
    }
}

void show_rev_char_2(const char* s) {
    if (*s) {
        show_rev_char_2(s+1);       // hello
        cout << *s;
    }
}

// show_rev_char_2("ello");       
    // show_rev_char_2("llo");       
        // show_rev_char_2("lo");       
            // show_rev_char_2("o");       
                // show_rev_char_2("");       

                // cout << *s;       // 'o'
            // cout << *s;       // 'l'
        // cout << *s;       // 'l'
    // cout << *s;       // 'e'
// cout << *s;       // 'h'

// 퀴즈
// 1부터 n까지의 합계를 구하는 재귀 함수를 만드세요
int sum(int i) {
    if (i == 1)
        return 1;

    return i + sum(i-1);
}

// sum(9) : 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1
// sum(8) : 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1

// sum(9) : 9 + sum(8)
// sum(8) : 8 + sum(7)
// ...
// sum(2) : 2 + sum(1)
// sum(1) : 1

