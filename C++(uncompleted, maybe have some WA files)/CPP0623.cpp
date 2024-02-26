#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien{
    string ten, msv, lop, mail;
    int khoa;
    void nhap(){
        cin >> msv;
        scanf("\n");
        getline(cin, ten);
        cin >> lop >> mail;
        khoa = 2000 + stoi(lop.substr(1, 2));
    }
    void in(){
        cout << msv << ' ' << ten << ' ' << lop << ' ' << mail << '\n';
    }
};

map<int, vector<SinhVien>> mp;

int main(){
    int n;
    cin >> n;
    SinhVien a[n];
    for(auto x : a){
        x.nhap();
        mp[x.khoa].push_back(x); 
    }
    int q;
    cin >> q;
    int k;
    while(q--){
        cin >> k;
        cout << "DANH SACH SINH VIEN KHOA " << k << ":\n";
        for(auto x : mp[k]) x.in();
    }
}