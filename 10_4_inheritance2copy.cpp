#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 기본 클래스 Shape
class Shape {
private:
    string name;

public:
    Shape(const string &n) : name(n) {}
    virtual ~Shape() {}

    void displayName() const {
        cout << "Shape Name: " << name << endl;
    }

    // Declare display as a virtual function
    virtual void display() const = 0; // Pure virtual function
};

// 기본 클래스 Rect
class Rect : public Shape {
private:
    double width;
    double height;

public:
    Rect(double w, double h) : Shape("Rectangle"), width(w), height(h) {}
    virtual ~Rect() {}

    double area() const {
        return width * height;
    }

    // Implement the display function
    void display() const override {
        displayName();
        cout << "Rect: Width = " << width << ", Height = " << height 
             << ", Area = " << area() << endl;
    }
};

// 자식 클래스 Square
class Square : public Rect {
public:
    Square(double side) : Rect(side, side) {}
    ~Square() {}

    // Implement the display function
    void display() const override {
        displayName();
        cout << "Square: Side = " << Rect::area() / side 
             << ", Area = " << area() << endl;
    }
};

// 새로운 클래스 Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}
    ~Circle() {}

    double area() const {
        return 3.14 * radius * radius;
    }

    // Implement the display function
    void display() const override {
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
    Line(double l) : Shape("Line"), length(l) {}
    ~Line() {}

    // Implement the display function
    void display() const override {
        displayName();
        cout << "Line: Length = " << length << endl;
    }
};

int main() {
    // Create pointers for each shape
    Shape* rect = new Rect(4.0, 5.0);
    Shape* square = new Square(4.0);
    Shape* circle = new Circle(3.0);
    Shape* line = new Line(10.0);

    // Display information using pointers
    rect->display();
    square->display();
    circle->display();
    line->display();

    // Clean up memory
    delete rect;
    delete square;
    delete circle;
    delete line;

    return 0;
}