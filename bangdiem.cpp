#include <iostream>
#include <iomanip>
using namespace std;

// Hàm nhập điểm thi từ người dùng
void inputScores(int* scores, int size) {
    for (int i = 0; i < size; i++) {
        do {
            cout << "Nhap diem thi cua hoc sinh " << i + 1 << ": ";
            cin >> *(scores + i);
        } while (*(scores + i) < 0);  // Kiểm tra đầu vào hợp lệ
    }
}


void sortScores(int* scores, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(scores + i) > *(scores + j)) {
                int temp = *(scores + i);
                *(scores + i) = *(scores + j);
                *(scores + j) = temp;
            }
        }
    }
}


float averageScore(int* scores, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(scores + i);
    }
    return sum / size;
}


void displayScores(int* scores, int size, float avg) {
    cout << "Danh sach diem thi da sap xep theo thu tu tang dan:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Diem thi cua hoc sinh " << i + 1 << ": " << *(scores + i) << endl;
    }
    cout << "Diem trung binh cua lop: " << fixed << setprecision(2) << avg << endl;
}

int main() {
    int size;
    cout << "Nhap so luong hoc sinh trong lop: ";
    cin >> size;

   
    int* scores = new int[size];

    // Nhập các điểm thi 
    inputScores(scores, size);

    
    sortScores(scores, size);

    // Tính điểm trung bình của mảng điểm thi
    float avg = averageScore(scores, size);

    // Hiển thị mảng điểm thi và điểm trung bình
    displayScores(scores, size, avg);

   
    delete[] scores;

    return 0;
}