#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 기본 클래스 Shape
class Shape {
private:
    string name;

public:
    // 생성자
    Shape(const string &n) : name(n) {}

    // 소멸자
    virtual ~Shape() {}

    // 이름 출력 메서드
    void displayName() const {
        cout << "Shape Name: " << name << endl;
    }
};

// 기본 클래스 Rect
class Rect : public Shape {
private:
    double width;
    double height;

public:
    // 생성자
    Rect(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

    // 소멸자
    virtual ~Rect() {}

    // 면적 계산 메서드
    double area() const {
        return width * height;
    }

    // 정보 출력 메서드
    void display() const {
        displayName();
        cout << "Rect: Width = " << width << ", Height = " << height 
             << ", Area = " << area() << endl;
    }
};

// 자식 클래스 Square
class Square : public Rect {
public:
    // 생성자 (정사각형은 너비와 높이가 같음)
    Square(double side) : Rect(side, side) {
        // Shape의 이름은 Rect에서 이미 설정됨
    }

    // 소멸자
    ~Square() {}
};

// 새로운 클래스 Circle
class Circle : public Shape {
private:
    double radius;

public:
    // 생성자
    Circle(double r) : Shape("Circle"), radius(r) {}

    // 소멸자
    ~Circle() {}

    // 면적 계산 메서드
    double area() const {
        return 3.14 * radius * radius; // M_PI는 cmath에 정의된 원주율
    }

    // 정보 출력 메서드
    void display() const {
        displayName();
        cout << "Circle: Radius = " << radius 
             << ", Area = " << area() << endl;
    }
};

// 새로운 클래스 Line
class Line : public Shape {
private:
    double length;

public:
    // 생성자
    Line(double l) : Shape("Line"), length(l) {}

    // 소멸자
    ~Line() {}

    // 길이 출력 메서드
    void display() const {
        displayName();
        cout << "Line: Length = " << length << endl;
    }
};

int main() {
    Rect rect(4.0, 5.0);
    Square square(4.0);
    Circle circle(3.0); // 반지름이 3인 원 생성
    Line line(10.0); // 길이가 10인 선 생성

    rect.display();
    square.display();
    circle.display(); // 원의 정보 출력
    line.display(); // 선의 정보 출력

    return 0;
}