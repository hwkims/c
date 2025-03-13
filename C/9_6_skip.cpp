// 9_6_skip.cpp
#include <iostream>
using namespace std;

// 퀴즈
// 43명이 둘러앉아 있는 상황에서 세 번째 앉은 사람은 죽는다
// 마지막에 남은 두 사람의 번호를 알려주세요
// 1 2 3 4 5 6 7 8 9 ... 41 42 43
//     *     *     *        *    
//   *         *
int kill_third(bool alive[], int size, int last);
void show_array(bool alive[], int size);

int main() {         
    bool alive[10] = {true, true, true, true, true, true, true, true, true, true};

    int p = 9;
    for (int i = 0; i < 8; i++) {
        p = kill_third(alive, 10, p);
        show_array(alive, 10);
    }

    for (int i = 0; i < 10; i++) {
        if (alive[i])
            cout << i+1 << ' ';
    }
    cout << endl;

    return 0;
}

void show_array(bool alive[], int size) {
    for (int i = 0; i < size; i++)
        cout << (alive[i] ? '*' : '-') << ' ';
    cout << endl;
}

int kill_third(bool alive[], int size, int last) {
    int killed = 0, i;
    for (i=last+1; i < last+size+1; i++) {
        // cout << i % size << endl;
        if (alive[i%size] == true) {
            killed++;

            if (killed == 3) {
                alive[i%size] = false;
                break;
            }
        }
    }

    return i % size;
}

// 0 10
// 1 11

