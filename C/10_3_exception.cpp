// 10_3_exception.cpp
#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "divide by zero exception";

    if (b == -1)
        throw "b must not have -1";

    return a / b;
}

bool divide_2(int a, int b, int* p) {
    if (b == 0)
        return false;

    *p = a / b;
    return true;
}

int main() {      
    int a = 7, b = 0;

    cout << "start" << endl;
    
    try{
        cout << divide(a, b) << endl;
        // throw -1;
        // throw "something wrong";
    }
    catch(int e) {
        cout << "int exception occurred" << endl;
    }
    catch(const char* s) {
        cout << "char* exception occurred" << endl;
    }
    catch(...) {
        cout << "any exception occurred" << endl;
    }

    cout << "finish" << endl;

    return 0;
}

