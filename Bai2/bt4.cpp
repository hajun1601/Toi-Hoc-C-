#include <iostream>

using namespace std;
int main(){
    int a;
    cout <<"Nhap gia tri bat ki xuong day : " << endl;
    cin >> a;
    if (a % 2 == 0){
        cout << a << " la so chan ";
    }
    else{
        cout << a << " la so le ";
    }
}