#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor to initialize the Point
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}


    Point(Point& pt){

        cout<<"c`   tor"<<endl;
        x=pt.x;
        y=pt.y;




    }

// Point 변수 2개를 갖는 rect 클래스를 정의하세요


// 소멸자
    ~Point() {
        cout <<"d`tor"<< endl;

    }
    





    // Function to display the coordinates
    void show() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    // Create a Point object with coordinates (3, 4)
    Point pt(3, 4);
    
    // Show the coordinates
    pt.show();

    return 0;
}