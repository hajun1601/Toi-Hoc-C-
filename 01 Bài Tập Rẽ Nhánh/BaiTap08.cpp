#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout <<"Nhap 3 so : " << endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c){
        cout << "So lon nhat : " << a;
    }
    else if (b >= a ; b >= c){
        cout << "So lon nhat : " << b;
    }
    else{
        cout <<"So lon nhat : " << c;
    }
}