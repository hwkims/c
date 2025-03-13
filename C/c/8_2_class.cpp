// 8_2_class.cpp
#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x=0, int y=0) : x(x), y(y) {
        // this->x = x; 
        // this->y = y; 
    }

    // 연산자 오버로딩
    const Point& operator=(const Point& pt) {
        cout << "= operator" << endl;

        x = pt.x;
        y = pt.y;

        return *this;
    }

    void show() {
        cout << x << ' ' << y << endl;
    }
};

// 퀴즈
// 참조 변수를 사용해서 int 변수를 swap하는 함수를 만드세요
void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

// 퀴즈
// Point 변수 2개를 갖는 Rect 클래스를 정의하세요
class Rect {
public:
    Point pt1, pt2;

    Rect() : pt1(0, 0), pt2(0, 0) {
        cout << "Rect" << endl;
    }

    Rect(const Point& pt1, const Point& pt2) : pt1(pt1), pt2(pt2) {
        cout << "Rect" << endl;
        // this->pt1.show();

        // this->pt1 = pt1;
        // this->pt2 = pt2;

        adjust();
    }

    Rect(int x1, int y1, int x2, int y2) : pt1(x1, y1), pt2(x2, y2) {
        cout << "Rect" << endl;
        adjust();

        // pt1.x = x1;
        // pt1.y = y1;
        // pt2.x = x2;
        // pt2.y = y2;
    }

    void show() {
        // cout << pt1.x << ' ' << pt1.y << ' '
        //      << pt2.x << ' ' << pt2.y << endl;

        pt1.show();
        pt2.show();
    }

    int width() {
        return pt2.x - pt1.x;
    }

    int height() {
        return pt2.y - pt1.y;
    }

    int area() {
        return width() * height();
    }

private:
    void adjust() {
        if (pt1.x > pt2.x) swap(pt1.x, pt2.x);
        if (pt1.y > pt2.y) swap(pt1.y, pt2.y);
    }
};

int main() {      
    Rect r;
    r.show();

    Point pt1(10, 20), pt2(30, 40);
    Rect r2(pt1, pt2);
    r2.show();

    Rect r3(Point(50, 60), Point(70, 80));
    r3.show();

    Rect r4(50, 70, 10, 30);
    r4.show();

    Point pt3(1, 2), pt4(3, 4), pt5(5, 6);

    pt3 = pt4 = pt5;
    pt3 = pt4.operator=(pt5);
    pt3.show();

    return 0;
}

