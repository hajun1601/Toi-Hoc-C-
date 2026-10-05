#include <iostream>
using namespace std;

int main(){
    int a;
    cout <<"Nhap a :" << endl;
    cin >> a;

    if( a <= 0 ){
        cout << a << " Khong phai la so duong ";
    }
    if( a >= 0 ){
        cout << a << " La so duong";
    }
}