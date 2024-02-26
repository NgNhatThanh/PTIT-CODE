#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NhanVien{
    string ten, maNhanVien, gioiTinh, ngaySinh, diaChi, maThue, ngayKy;
};
int id = 1;

void nhap(NhanVien &a){
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gioiTinh >> a.ngaySinh;
    cin.ignore();
    getline(cin, a.diaChi);
    cin >> a.maThue >> a.ngayKy;
    string ma = to_string(id++);
    while(ma.size() < 5) ma = "0" + ma;
    a.maNhanVien = ma;
}

void in(NhanVien a){
    cout << a.maNhanVien << ' ' << a.ten << ' ' << a.gioiTinh << ' ' << a.ngaySinh << ' ' << a.diaChi << ' ' << a.maThue << ' ' << a.ngayKy << '\n';
}

void inds(NhanVien a[], int n){
    for(int i=0; i<n; ++i) in(a[i]);
}

int main(){
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

