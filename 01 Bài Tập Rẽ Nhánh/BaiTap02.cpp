// Bai tap kiem tra so le va so chan
#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Nhap a : " << endl;
    cin >> a;

    if ( a % 2 == 0 ){
        cout << "So chan";
    }
    if ( a % 2 != 0){
        cout << "So le";
    }
}