#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien{
    string ten, msv, lop, mail;
    void nhap(){
        cin.ignore();
        getline(cin, ten);
        cin >> lop >> mail;
    }
    void in(){
        cout << msv << ' ' << ten << ' ' << lop << ' ' << mail << '\n';
    }
};

int cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

int main(){
    vector<SinhVien> a;
    string s;
    while(cin >> s){
        SinhVien tmp;
        tmp.msv = s;
        tmp.nhap();
        a.push_back(tmp);
    }
    sort(begin(a), end(a), cmp);
    for(auto x : a) x.in();
}