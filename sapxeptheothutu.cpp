#include <iostream>
#include <algorithm>

using namespace std;

int median(int* arr, int n) {
    sort(arr, arr+n); // sắp xếp mảng theo thứ tự tăng dần

    int mid = n / 2; // vị trí của phần tử ở giữa

    if (n % 2 == 0) { // nếu số phần tử là số chẵn
        return (arr[mid-1] + arr[mid]) / 2; 
    } else { // nếu số phần tử là số lẻ
        return arr[mid]; 
    }
}

int main() {
    int n;

    cout << "Nhap so phan tu: ";
    cin >> n;

    int* arr = new int[n]; 

    cout << "Nhap " << n << " Phan TU: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr+i); 
    }

    int med = median(arr, n); 
    cout << "GT trung binh = " << med << endl;

    delete[] arr; 

    return 0;
}