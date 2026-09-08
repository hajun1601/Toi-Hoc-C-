#include <iostream>

using namespace std;
int main(){
    int a,b;
    cout << "Nhap a va b: "<< endl;
    cout << "Nhap a = 5 nhap b = 10" << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << endl;
    cout << "b = " << b;
    }