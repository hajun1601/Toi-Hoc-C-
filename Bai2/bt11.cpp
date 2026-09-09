#include<iostream>

using namespace std;

int main() {
	int a,b,c; // Khai báo số nguyên a,b,c
    cin >> a >> b >> c; // Nhập a b c
    if (a >= b && a >= c){ // So sánh a lớn hơn hoặc bằng b hoặc c
        cout << a; // Nếu đúng in ra a
    }
    else if(b >= c){ // Nếu trên không đúng chuyển xuống bên dưới : b nếu lớn hoặc bằng c 
        cout << b; // kết quả sẽ được in ra. vì trên kiểm tra a không lớn hơn b và c nên chuyển xuống dưới nó sẽ đi so sánh mỗi c.
    }
    else { // nếu cả 2 cái trên không đúng dưới sẽ là kết quả.
        cout << c;
    }
	return 0;
}
