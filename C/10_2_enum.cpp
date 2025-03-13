// 10_2_enum.cpp
#include <iostream>
using namespace std;

// #define RED 0
// #define GREEN 1
// #define BLUE 2

enum color {RED, GREEN, BLUE};
// enum color {RED, GREEN=7, BLUE};
// enum color {RED=1, GREEN=3, BLUE=5};

int main() {      
    cout << RED << ' ' << GREEN << ' ' << BLUE << endl;
    
    int a = 2;
    if (a == BLUE) 
        cout << "blue" << endl;
    else
        cout << "not blue" << endl;

    color b = BLUE;
    if (b == BLUE) 
        cout << "blue" << endl;
    else
        cout << "not blue" << endl;

    return 0;
}

