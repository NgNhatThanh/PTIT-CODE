#include <bits/stdc++.h>
#define ll long long
using namespace std;

class SinhVien{
    public:
        string ten, msv = "B20DCCN001", lop, date;
        float gpa;
        friend istream &operator >> (istream &cin, SinhVien &a){
            getline(cin, a.ten);
            cin >> a.lop >> a.date >> a.gpa;
            if(a.date[2] != '/') a.date = "0" + a.date;
            if(a.date[5] != '/') a.date.insert(a.date.begin() + 3, '0');
            return cin;
        }
        friend ostream &operator << (ostream &cout, SinhVien a){
            cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.date << ' ' << setprecision(2) << fixed << a.gpa;
            return cout;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

