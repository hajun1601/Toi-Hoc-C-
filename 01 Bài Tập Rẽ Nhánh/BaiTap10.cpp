#include <iostream>
using namespace std;

int main(){
    float a,b;
    cout << "Nhap a : " << endl;
    cin >> a;
    cout << "nhap b : " << endl;
    cin >> b;

    if(a != 0){
        float x = -b / a;
        cout << "Phuong trinh co nghie x = " << x ;
    }
    else if(a == 0 && b != 0){
        cout << "Phuong trinh vo nghiem ";
    }
    else if(a == 0 && b == 0){
        cout << "Vo so nghiem ";
    }
}