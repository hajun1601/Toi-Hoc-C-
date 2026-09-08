// Bắt mình phải nhập b, vào c
#include <iostream>

using namespace std;
int main(){
    char c; // Khai báo biến c kiểu char là b
    cout << "Nhap b xuong day : "; // Yêu cầu nhập b
    cin >> c; // c đang chờ nhập giá trị b vào
    c = c + 1; // b = 62 nên b + 1 = 63 vậy ra c = 63.
    cout << "C = " << c; // ỉn ra giá trị của c là 63, nhưng 63 là ký tự '?' trong bảng mã ASCII.
}