// 8_0_cpp_basic.cpp
// #include <cstdio>
#include <iostream>
using namespace std;

void show_my_age(int age=20) {      // 기본인자 default parameter
    cout << "age : " << age << endl;
}

void change(int& z) {
    z = 33;
}

int main() {      
    show_my_age();
    show_my_age(30);

    printf("%d\n", 1234);
    std::cout << 1234 << ' ' << 3.14 << ' ' << "abc" << '\n';
    cout << 5678 << endl;
    cout << true << ' ' << false << endl;

    cout.operator<<(1234).operator<<(5678);
    cout << endl;

    // int a;
    // double b;
    // cin >> a >> b;
    // cout << a << ' ' << b << endl;

    int k = 7;
    cout << k << endl;

    int& t = k;             // &: 참조(reference)
    t = 99;
    cout << k << endl;

    change(k);
    cout << k << endl;

    string s = "my name is kim";
    cout << s << endl;
    cout << s.length() << endl;
    cout << s[0] << s.operator[](0) << endl;

    return 0;
}



// c 구조적 플 객체
