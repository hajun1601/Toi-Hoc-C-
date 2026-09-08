// viết chương trình nhập thông tin cá nhân 
#include <iostream>
using namespace std;

int main(){
  string name, dia_chi, dhdh, email;
  int sdt;
    cout<<"Nhập tên : ";;
    cin >> name;
    cout<<"Nhập số điện thoại : ";
    cin >> sdt;
    cout<<"Nhập địa chỉ : ";
    cin >> dia_chi;
    cout<<"Nhập đại học hiện đang học : ";
    cin >> dhdh;
    cout<<"Nhập email : ";
    cin >> email;
    cout << "\n";
    cout << "Họ & Tên: " << name << endl;
    cout << "Số Điện Thoại: " << sdt << endl;
    cout << "Địa Chỉ: " << dia_chi << endl;
    cout << "Đại Hiện Đang Học : " << dhdh << endl;
    cout << "Email: " << email << endl;
    return 0;
}