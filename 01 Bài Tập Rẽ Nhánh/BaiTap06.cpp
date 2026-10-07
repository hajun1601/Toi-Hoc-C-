#include <iostream>
using namespace std;

int main(){
    float a;
    cout << "Nhap diem : ";
    cin >> a;

    if ( a <= 3.5){
        cout <<"Kem";
    }
    else if (a <= 5){
        cout << "Yeu";
    }
    else if (a <= 6.5){
        cout << "Trung Binh ";
    }
    else if (a <= 8) {
        cout << "Kha ";
    }
    else if ( a <= 10){
        cout << "Gioi ";
    }
}