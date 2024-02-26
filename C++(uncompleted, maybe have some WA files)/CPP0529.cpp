#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

struct SinhVien{
    string ten, msv, lop, mail, dn;
    int stt;
    void nhap(){
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        cin >> lop >> mail >> dn;
        stt = id++;
    }
    void in(){
        cout << stt << ' ' << msv << ' ' << ten << ' ' << lop << ' ' << mail << ' ' << dn << '\n';
    }
};

int cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

int main() {
	int n;
    cin >> n;
    map<string, vector<SinhVien>> mp;
    SinhVien a[n];
    for(SinhVien &x : a){
        x.nhap();
        mp[x.dn].push_back(x);
    }
    int q;
    cin >> q;
    string s;
    while(q--){
        cin >> s;
        sort(begin(mp[s]), end(mp[s]), cmp);
        for(SinhVien x : mp[s]) x.in();
    }
}