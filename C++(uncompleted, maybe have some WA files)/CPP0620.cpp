#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien{
    string ten, msv, lop, mail;
    void nhap(){
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        cin >> lop >> mail;
    }
    void in(){
        cout << msv << ' ' << ten << ' ' << lop << ' ' << mail << '\n';
    }
};

int cmp(SinhVien a, SinhVien b){
    if(a.lop == b.lop) return a.msv < b.msv;
    return a.lop < b.lop;
}

int main(){
    int n;
    cin >> n;
    SinhVien a[n];
    for(auto &x : a) x.nhap();
    sort(a, a+n, cmp);
    for(auto x : a) x.in();
}