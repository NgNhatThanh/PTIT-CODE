#include <bits/stdc++.h>
using namespace std;

int id = 1;

struct GiangVien{
    string ma, hoten, lowten, mon;
    void getMon(){
        stringstream ss(mon);
        string tmp;
        mon = "";
        while(ss >> tmp) mon += toupper(tmp[0]);
    }
    void nhap(){
        getline(cin, hoten);
        lowten = hoten;
        for(char &x : lowten) x = tolower(x);
        getline(cin, mon);
        getMon();
        string tmp = to_string(id++);
        if(tmp.size() == 1) tmp = "0" + tmp;
        ma = "GV" + tmp;
    }
    void in(){
        cout << ma << ' ' << hoten << ' ' << mon << '\n';
    }
    void Find(string s){
        for(char &x : s) x = tolower(x);
        int idx = lowten.find(s);
        if(idx != string::npos) in();
    }
};

int main() {
	int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(auto &x : a){
        x.nhap();
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for(auto x : a){
            x.Find(s);
        }
    }
}