#include <iostream>

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    // Point 객체를 출력하는 메서드
    void print() const {
        std::cout << "Point(" << x << ", " << y << ")";
    }

    // + 연산자 오버로딩
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
};

class Rect {
private:
    Point bottom_left;
    Point top_right;

public:
    Rect(Point bl, Point tr) : bottom_left(bl), top_right(tr) {}

    // 면적을 계산하는 메서드
    int area() const {
        int width = top_right.x - bottom_left.x;
        int height = top_right.y - bottom_left.y;
        return width * height;
    }

    // Rect 객체를 출력하는 메서드
    void print() const {
        std::cout << "Rect: ";
        bottom_left.print();
        std::cout << " to ";
        top_right.print();
        std::cout << std::endl;
    }

    // 사각형의 크기를 조정하는 메서드
    void adjust(int width, int height) {
        top_right.x = bottom_left.x + width;
        top_right.y = bottom_left.y + height;
    }

    // 좌표를 교환하는 메서드
    void swap() {
        std::swap(bottom_left.x, top_right.x);
        std::swap(bottom_left.y, top_right.y);
    }

    // << 연산자 오버로딩
    friend std::ostream& operator<<(std::ostream& os, const Rect& rect) {
        os << "Rect: ";
        rect.bottom_left.print();
        os << " to ";
        rect.top_right.print();
        return os;
    }
};

int main() {
    Point bl(1, 1);  // 좌하단
    Point tr(4, 3);  // 우상단
    Rect rect(bl, tr);

    rect.print();  // Rect: Point(1, 1) to Point(4, 3)
    std::cout << "Area: " << rect.area() << std::endl;  // Area: 6

    rect.adjust(4, 2);  // 크기 조정
    rect.print();  // Rect: Point(1, 1) to Point(4, 3)
    std::cout << "Area: " << rect.area() << std::endl;  // Area: 6

    rect.swap();  // 좌표 교환
    std::cout << rect << std::endl;  // Rect: Point(4, 3) to Point(1, 1)
    std::cout << "Area: " << rect.area() << std::endl;  // Area: -6

    // Point 객체의 + 연산자 사용 예시
    Point p1(2, 3);
    Point p2(4, 5);
    Point p3 = p1 + p2;  // Point(6, 8)
    p3.print();  // Point(6, 8)

    return 0;
}