#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Nhap so nguyen n chia het cho 2 xuong day " << endl;
    cin >> n;
    if (n % 2 == 0){
        cout << " So nguyen " << n <<  " chia het cho 2 ";
    }
    else {
        cout << " So nguyen " << n <<  " khong chia het cho 2 ";
    }
}