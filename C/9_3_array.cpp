// 9_3_array.cpp
#include <iostream>
using namespace std;

class Array {
private:
    int* buf;
    int count;

public:
    Array(int count=32) : count(count) {
        buf = (int*) malloc(count * sizeof(int));

        for (int i = 0; i < count; i++)
            buf[i] = 0;
    }

    ~Array() {
        free(buf);
        buf = NULL;
    }

    void show() {       
        for (int i = 0; i < count; i++)
            cout << buf[i] << ' ';
        cout << endl;
    }

    int& operator[](int idx) {
        return buf[idx];
    }

    inline int size() {
        return count;
    }
};

const ostream& operator<<(const ostream& out, Array& arr) {
    arr.show();
    return out;
}

int main() { 
    Array a(6);
    cout << a;

    a[0] = 99;
    a[5] = 11;
    cout << a;

    return 0;
}

