#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Nhap nam : " << endl;
    cin >> year;

    if(year % 4 == 0){
        cout << year <<" Nam nhuan";
    }
    else{
        cout << "Nam khong nhan";
    }
}