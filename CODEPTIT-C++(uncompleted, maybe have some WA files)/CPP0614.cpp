#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

struct NhanVien{
    string ten, sex, mnv, date, diachi, mathue, ngayky;
    friend istream &operator >> (istream &cin, NhanVien &a){
        scanf("\n");
        getline(cin, a.ten);
        cin >> a.sex >> a.date;
        scanf("\n");
        getline(cin, a.diachi);
        cin >> a.mathue >> a.ngayky;
        a.mnv = to_string(id++);
        while(a.mnv.size() < 5) a.mnv = "0" + a.mnv;
        return cin;
    }
    friend ostream &operator << (ostream &cout, NhanVien a){
        cout << a.mnv << ' ' << a.ten << ' ' << a.sex << ' ' << a.date << ' ' << a.diachi << ' ' << a.mathue << ' ' << a.ngayky << '\n';
        return cout;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}