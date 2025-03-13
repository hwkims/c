#include <iostream>
#include <stdexcept>

class Array {
private:
    int* data;      // 동적 배열을 저장할 포인터
    int size;       // 배열의 크기

public:
    // 생성자
    Array(int s) : size(s) {
        if (s <= 0) {
            throw std::invalid_argument("Size must be positive.");
        }
        data = new int[size]; // 배열 메모리 할당
    }

    // 소멸자
    ~Array() {
        delete[] data; // 메모리 해제
    }

    // 요소에 접근하는 함수
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of bounds.");
        }
        return data[index];
    }

    // 배열의 크기를 반환하는 함수
    int getSize() const {
        return size;
    }
};

int main() {
    try {
        Array arr(5); // 크기가 5인 배열 생성

        // 배열에 값 할당
        for (int i = 0; i < arr.getSize(); ++i) {
            arr[i] = i * 10; // 0, 10, 20, 30, 40
        }

        // 배열의 값 출력
        for (int i = 0; i < arr.getSize(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}