#include <bits/stdc++.h>
#define ll long long
using namespace std;

string Nganh(string ma){
    if(ma == "DCKT") return "KE TOAN";
    if(ma == "DCCN") return "CONG NGHE THONG TIN";
    if(ma == "DCAT") return "AN TOAN THONG TIN";
    if(ma == "DCVT") return "VIEN THONG";
    return "DIEN TU";
}

struct SinhVien{
    string ten, msv, lop, mail, nganh;
    void nhap(){
        cin >> msv;
        scanf("\n");
        getline(cin, ten);
        cin >> lop >> mail;
        nganh = Nganh(msv.substr(3, 4));
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
        if((x.nganh != "CONG NGHE THONG TIN" && x.nganh != "AN TOAN THONG TIN") || x.lop[0] != 'E') mp[x.nganh].push_back(x); 
    }
    int q;
    cin >> q;
    scanf("\n");
    string s;
    while(q--){
        getline(cin, s);
        for(char &x : s) x = toupper(x);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for(auto x : mp[s]) x.in();
    }
}