#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int a,b;
    char c;
    cout << "Nhap gia tri Dau : " << endl;
    cin >> a;
    cout << "Nhap gia tri logic ( + ; - ; * ; /) : " << endl;
    cin >> c;
    cout << "Nhap gia tri Cuoi : " << endl;
    cin >> b;

    switch (c){
        case '+':
        cout << "Dap An : " << a + b ;

        case '-':
        cout << "Dap An : " << a - b ;

        case '*':
        cout << "Dap An : " << a * b;

        case '/':
        cout << "Dap An : " << a / b;
    }
}