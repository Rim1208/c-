#include <iostream>

int* reverseCopy(int arr[], int size) {
    int* newArr = new int[size]; // tạo một mảng mới
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[size - 1 - i]; // sao chép các phần tử đảo ngược
    }
    return newArr; // trả về con trỏ tới mảng mới
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int* newArr = reverseCopy(arr, size); // gọi hàm và nhận con trỏ tới mảng mới
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << newArr[i] << " ";
    }
    std::cout << std::endl;
    delete[] newArr; // 
    return 0;
}