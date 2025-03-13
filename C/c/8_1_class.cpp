// 8_1_class.cpp
#include <iostream>
using namespace std;

// 프로그램 = 코드(함수) + 데이터(변수)
// 클래스 = 함수 + 변수

// public: 모든 코드(누구나) 접근
// protected: 관련 있는 코드(상속) 접근
// private: 내 코드(나만) 접근
class Point {
public:
    int x, y;

    // 생성자(constructor)
    // Point() {
    //     cout << "c`tor" << endl;
    //     x = y = 0;
    // }

    // Point(int x, int y) {
    //     cout << "c`tor" << endl;
    //     this->x = x; 
    //     this->y = y; 
    // }

    // 퀴즈
    // 앞에서 만든 생성자 2개를 1개의 생성자로 합쳐보세요
    Point(int x=0, int y=0) {
        cout << "c`tor" << endl;
        this->x = x; 
        this->y = y; 
    }

    // 복사 생성자(copy constructor)
    Point(const Point& pt) {
        cout << "c`tor" << endl;
        x = pt.x;
        y = pt.y;
    }

    // 소멸자(destructor)
    ~Point() {
        cout << "d`tor" << endl;
    }

    void show() {
        cout << x << ' ' << y << endl;
    }
};

void show(Point pt) {       // Point pt = pt
    cout << pt.x << ' ' << pt.y << endl;
}

int main() {      
    Point pt;

    show(pt);
    // pt.show();

    // Point pt2(10, 20);
    // pt2.show();

    // Point pt3(30);
    // pt3.show();

    return 0;
}


