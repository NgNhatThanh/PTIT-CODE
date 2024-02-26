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

map<string, vector<SinhVien>> mp;

int main(){
    int n;
    cin >> n;
    SinhVien a[n];
    for(auto x : a){
        x.nhap();
        mp[x.lop].push_back(x); 
    }
    int q;
    cin >> q;
    string s;
    while(q--){
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for(auto x : mp[s]) x.in();
    }
}