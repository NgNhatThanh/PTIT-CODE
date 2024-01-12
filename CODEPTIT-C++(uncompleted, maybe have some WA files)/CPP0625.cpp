#include <bits/stdc++.h>
using namespace std;

int id = 1;

struct GiangVien{
    string ma, hoten, ten, mon;
    void getTen(){
        stringstream ss(hoten);
        string tmp;
        while(ss >> tmp) ten = tmp;
    }
    void getMon(){
        stringstream ss(mon);
        string tmp;
        mon = "";
        while(ss >> tmp) mon += toupper(tmp[0]);
    }
    void nhap(){
        getline(cin, hoten);
        getline(cin, mon);
        getTen();
        getMon();
        string tmp = to_string(id++);
        if(tmp.size() == 1) tmp = "0" + tmp;
        ma = "GV" + tmp;
    }
    void in(){
        cout << ma << ' ' << hoten << ' ' << mon << '\n';
    }
};

int cmp(GiangVien a, GiangVien b){
    if(a.ten == b.ten) return a.ma < b.ma;
    return a.ten < b.ten;
}

int main() {
	int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(auto &x : a){
        x.nhap();
    }
    sort(a, a+n, cmp);
    for(auto x : a) x.in();
}