#include <iostream>

using namespace std;
int main() {
    int a;
    cout << "Nhap gia tri bat ki xuong day : " << endl;
    cin >> a;
    if (a > 0) {
        cout << "Gia tri " << a << " la so duong ";
    }

    if (a < 0) {
        cout << "Gia tri " << a << " la so am";
    }

    if (a == 0) {
        cout << " n bang 0";
    }
}