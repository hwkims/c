// 9_1_array.cpp
#include <iostream>
using namespace std;

template <int count>
class Array {
private:
    int buf[count];

public:
    Array(int arraySize) {
        for (int i = 0; i < count; i++)
            buf[i] = 0;
    }

    void show() {       
        for (int i = 0; i < count; i++)
            cout << buf[i] << ' ';
        cout << endl;
    }

    // 퀴즈
    // << 연산자를 오버로딩하세요
    // const ostream& operator<<(int a) {
    //     show();
    //     return cout;
    // }

    int& operator[](int idx) {
        // cout << idx << ' ' << buf[idx] << endl;
        return buf[idx];
    }

    // void push(int idx, int value) {
    //     buf[idx] = value;
    // }

    // 퀴즈
    // 배열의 크기를 알려주는 함수를 만드세요
    inline int size() {
        return count;
    }
};

const ostream& operator<<(const ostream& out, Array<5>& arr) {
    arr.show();
    return out;
}

// + (이항) 오버로딩 : 
//   operator+(int a, int b), 
//   operator+(Point a, Point b)   전역
//   Point::operator+(Point b)     클래스

// + (단항) 오버로딩 : 
//   operator+(int a), 

int main() { 
    Array<5> a1;
    a1.show();

    a1[0] = 7;
    a1.show();

    // a1.operator<<(99);
    // a1 << 99;

    cout << a1;
    cout << a1.size() << endl;
    cout << 5 << endl;

    return 0;
}
