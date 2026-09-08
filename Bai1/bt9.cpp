// viet chuong trinh nhap thong tin.
#include <iostream>
#include <string>
using namespace std;

int main(){
  string name, dia_chi, dhdh, email;
  int sdt;
    cout<<"1: ";
    cin >> name;
    cout<<"2: ";
    cin >> sdt;
    cout<<"3: ";
    cin >> dia_chi;
    cout<<"4: ";
    cin >> dhdh;
    cout<<"5: ";
    cin >> email;
    cout << "\n";
	cout << "1 :" << name << endl;
	cout << "2 :" << sdt << endl;
	cout << "3 :" << dia_chi << endl;
	cout << "4 :" << dhdh << endl;
	cout << "5 : " << email << endl;
    system("pause");
}
