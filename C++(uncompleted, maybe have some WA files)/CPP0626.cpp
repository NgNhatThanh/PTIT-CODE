#include <bits/stdc++.h>
using namespace std;

int id = 1;

string getMon(string mon){
    string res = "";
    stringstream ss(mon);
    string tmp;
    while(ss >> tmp) res += toupper(tmp[0]);
    return res;
}

struct GiangVien{
    string ma, hoten, lowten, mon, mamon;
    void nhap(){
        getline(cin, hoten);
        lowten = hoten;
        for(char &x : lowten) x = tolower(x);
        getline(cin, mon);
        mamon = getMon(mon);
        string tmp = to_string(id++);
        if(tmp.size() == 1) tmp = "0" + tmp;
        ma = "GV" + tmp;
    }
    void in(){
        cout << ma << ' ' << hoten << ' ' << mamon << '\n';
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
        cout << "DANH SACH GIANG VIEN BO MON " << getMon(s) << ":\n";
        for(auto x : a){
            if(x.mon == s) x.in();
        }
    }
}