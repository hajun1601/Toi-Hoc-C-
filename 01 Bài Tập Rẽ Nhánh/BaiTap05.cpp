#include <iostream>
using namespace std;

using namespace std;

int main(){
    int a, b;
    cout <<"Nhap a :";
    cin >> a;
    cout <<"Nhap b :";
    cin >> b;

    if (a % b == 0){
        cout << "A chia het cho B " << a % b;
    }
    if (a % b != 0){
        cout << "A Khong chia het cho B " << a % b;
    }
    if (a == 0 && b == 0 ){
        cout <<"Khong hop le ";
    }
}