// Bai tap check tuoi
#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Nhap tuoi cua ban : " << endl;
    cin >> age;

    if ( age <= 0 ){
        cout << age << " khong hop le ";
    }
    if ( age <=17 ){
        cout << age << " Chua du tuoi thanh nien";
    }
    if ( age >= 18 ){
        cout << age <<" Da truong thanh";
    }
}