#include <iostream>
using namespace std;

int main(){
    int a;
    cout <<"Nhap a :" << endl;
    cin >> a;
    if ( a>=10 && a<= 100 ){
        cout << "{a} Trong khoang 10 den 100" << endl;
    }
    else {
        cout << "{a} khong thuoc 10 den 100" << endl;
    }
}