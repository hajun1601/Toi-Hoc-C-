#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout <<"Nhap a : " <<endl;
    cin >> a;
    cout <<"nhap b : " <<endl;
    cin >> b;
    cout <<"Nhap c : " <<endl;
    cin >> c;

    if ( a >= b && a >= c){
        cout <<"So lon nhat la " << a;
    }
    else if (b >= a && b >= c){
        cout <<"So lon nhat la " << b;
    }
    else {
        cout <<"So lon nhat la " << c;
    }
}