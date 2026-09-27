// viết chương trình tính điểm trung bình qua môn
#include <iostream>
#include <string>

using namespace std;

int main(){
    int a,b,c;
    cout <<"Nhap diem thi: " << endl;
    cin >> a;
    cout <<"Nhap diem kiem tra : " << endl;
    cin >> b;

    c = (a + b)/2;

    if (c >= 4){
        cout << c <<" ban da qua mon !!!";
    }
    else{
        cout << c <<" Ban da truot mon hoc nay ( hay co cho lan sau )";
    }
}