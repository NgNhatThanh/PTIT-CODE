#include <bits/stdc++.h>
using namespace std;

void chuanHoaTen(string &s){
    stringstream ss(s);
    string tmp;
    s = "";
    while(ss >> tmp){
        for(char &x : tmp) x = tolower(x);
        tmp[0] -= 32;
        s += tmp + " ";
    }
}

class SinhVien{
    public:
        string ten, lop, msv, date;
        float gpa;
        friend istream &operator >> (istream &cin, SinhVien &a){
            a.msv = "B20DCCN001";
            getline(cin, a.ten);
            chuanHoaTen(a.ten);
            cin >> a.lop >> a.date >> a.gpa;
            if(a.date[2] != '/') a.date = "0" + a.date;
            if(a.date[5] != '/') a.date.insert(begin(a.date) + 3, '0');
            return cin;
        }
        friend ostream &operator << (ostream &cout, SinhVien a){
            cout << a.msv << ' ' << a.ten << a.lop << ' ' << a.date << ' ' << setprecision(2) << fixed << a.gpa;
            return cout;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}