// 10_4_inheritance.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(const string& name="none") : name(name) {
        cout << "Shape C`tor" << endl;
    }

    ~Shape() {
        cout << "Shape D`tor" << endl;
    }

    virtual void show() {
        cout << name << endl;
    }

    // virtual void draw() = 0;        // 순수 가상 함수
};

class Rect : public Shape {
private:
    int x1, y1, x2, y2;

public:
    Rect(int x1, int y1, int x2, int y2) 
    : Shape("rectangle"), x1(x1), y1(y1), x2(x2), y2(y2) {
        cout << "Rect C`tor" << endl;
    }

    ~Rect() {
        cout << "Rect D`tor" << endl;
    }

    int area() {
        return (x2-x1) * (y2-y1);
    }

    void show() {
        cout << x1 << ' ' << y1 << ' ' 
             << x2 << ' ' << y2 << endl;
    }
};

class Circle : public Shape {
private:
    int x, y, r;

public:
    Circle(int x, int y, int r) 
    : Shape("circle"), x(x), y(y), r(r) {
        cout << "Circle C`tor" << endl;
    }

    int area() {
        return 3.14 * r * r;
    }

    void show() {
        cout << x << ' ' << y << ' ' << r << endl;
    }
};

void draw_shape(Shape& s) {
    s.show();
}

int main() { 
    Shape s("shape");
    s.show();

    // 부모 주소를 자식 주소로 변경 불가
    // Rect* t = &s;
    // t->area();

    Rect r(3, 4, 6, 8);
    cout << "area : " << r.area() << endl;
    r.show();

    // 퀴즈
    // Rect가 상속 받은 Shape의 show 함수를 호출해 보세요
    Rect* p = &r;
    (*p).show();
    p->show();

    Shape* q = &r;
    q->show();

    // cout << p << ' ' << q << endl;

    // r.show();
    // r.Shape::show();

    // ::abs();

    Circle c(10, 20, 30);
    c.show();

    draw_shape(s);
    draw_shape(r);
    draw_shape(c);

    return 0;
}

