#include <iostream>

using namespace std;

int main(){
    double toan,van,anh,ketqua;
    cout << "Nhap diem toan xuong day :" << endl;
    cin >> toan;
    cout << "Nhap diem van xuong day : " << endl;
    cin >> van;
    cout << "Nhap diem anh xuong day : " << endl;
    cin >> anh;

    ketqua = ( toan + van + anh ) / 3;

    cout << " Diem tong : " << ketqua << endl;
    if(ketqua >= 8) {
        cout << "Xep loai: Gioi ";
    }
    if(ketqua >= 6.5) {
        cout << "Xep loai: Kha ";
     }
    if(ketqua >= 5){
        cout << "Xep loai: trung binh";
    }
    if(ketqua < 5){
        cout << "Xep loai: Yeu";
    }
}