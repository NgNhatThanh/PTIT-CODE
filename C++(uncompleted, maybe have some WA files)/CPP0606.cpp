#include <iostream>
using namespace std;
#define ll long long

class NhanVien{
    string maNV = "00001";
    string name, sex, dateofBirth, addr, maThue, dateofSign;
    public:
        void nhap(){
            getline(cin, name);
            cin >> sex >> dateofBirth;
            cin.ignore();
            getline(cin, addr);
            cin >> maThue >> dateofSign;
        }
        void xuat(){
            cout << maNV << ' ' << name << ' ' << sex << ' ' << dateofBirth << ' ' << addr << ' ' << maThue << ' ' << dateofSign;
        }
};

int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
} 