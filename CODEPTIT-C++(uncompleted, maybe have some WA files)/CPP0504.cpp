#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string ten, date, lop, msv = "B20DCCN001";
    double gpa;
};

void nhap(SinhVien &a){
    getline(cin, a.ten);
    cin >> a.lop >> a.date >> a.gpa;
}

string chuan(string &s){
    string res = "";
    string tmp = "";
    for(char x : s){
        if(x == '/'){
            if(tmp.size() < 2) tmp = "0" + tmp;
            res += tmp + "/";
            tmp = "";
        }
        else tmp += x;
    }
    res += tmp;
    return res;
}

void in(SinhVien a){
    cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << chuan(a.date) << ' ' << setprecision(2) << fixed << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
