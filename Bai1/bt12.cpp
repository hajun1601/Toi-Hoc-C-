#include <iostream>

using namespace std;
int main(){
    int a,b;
    cout << "Nhap a = 5 nhap b = 10" << endl;
    cout << "Nhap a va b: "<< endl;
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b;
}