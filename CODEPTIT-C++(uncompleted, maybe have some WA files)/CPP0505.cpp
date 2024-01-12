#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NhanVien{
    string ten, mnv = "00001", gioiTinh, ngaySinh, diaChi, maThue, ngayKy;
};

void nhap(NhanVien &a){
    getline(cin, a.ten);
    cin >> a.gioiTinh >> a.ngaySinh;
    cin.ignore();
    getline(cin, a.diaChi);
    cin >> a.maThue >> a.ngayKy;
}

void in(NhanVien a){
    cout << a.mnv << ' ' << a.ten << ' ' << a.gioiTinh << ' ' << a.ngaySinh << ' ' << a.diaChi << ' ' << a.maThue << ' ' << a.ngayKy;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

