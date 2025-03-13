// 9_4_sort.cpp
#include <iostream>
using namespace std;

void bubbleUp(int a[], int size);
void bubbleSort(int a[], int size);

int maxPos(int a[], int size);
void insertionSort(int a[], int size);

void show(int a[], int size);

int main() {      
    int a[10] = {8, 3, 9, 5, 4, 6, 1, 2, 7, 0};

    // bubbleSort(a, 10);
    insertionSort(a, 10);

    return 0;
}

void show(int a[], int size) {       
    for (int i = 0; i < size; i++)
        cout << a[i] << ' ';
    cout << endl;
}

void bubbleUp(int a[], int size) {
    for (int i = 0; i < size-1; i++) {
        if (a[i] > a[i+1])
            swap(a[i], a[i+1]);
    }
}

void bubbleSort(int a[], int size) {
    for (int i = 0; i < size-1; i++) {
        bubbleUp(a, size-i);
        show(a, size);
    }
}

int maxPos(int a[], int size) {
    int pos = 0;
    for (int i = 1; i < size; i++) {
        if (a[pos] < a[i])
            pos = i;
    }
    return pos;
}

void insertionSort(int a[], int size) {
    for (int i = 0; i < size-1; i++) {
        int p = maxPos(a, size-i);
        swap(a[p], a[size-1-i]);

        show(a, size);
    }
}

