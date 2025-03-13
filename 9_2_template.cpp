#include <iostream>
#include <string> // Include for std::string

using namespace std;

template <typename T>
void swap(T *p, T *q) {
    T t = *p;
    *p = *q;
    *q = t;
}

int main() {
    int a1 = 3, a2 = 7;

    // Use std::string instead of char* for mutable strings
    string s1 = "sunny", s2 = "cloudy";

    cout << "Before swap: " << a1 << ' ' << a2 << endl;
    swap(&a1, &a2);
    cout << "After swap: " << a1 << ' ' << a2 << endl;

    cout << "Before swap strings: " << s1 << ' ' << s2 << endl;
    swap(&s1, &s2); // Now this works correctly
    cout << "After swap strings: " << s1 << ' ' << s2 << endl;

    return 0;
}