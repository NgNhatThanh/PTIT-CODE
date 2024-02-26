#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

struct NhanVien{
    string ten, sex, mnv, date, diachi, mathue, ngayky;
    int ngay, thang, nam;
    friend istream &operator >> (istream &cin, NhanVien &a){
        scanf("\n");
        getline(cin, a.ten);
        cin >> a.sex >> a.date;
        scanf("\n");
        getline(cin, a.diachi);
        cin >> a.mathue >> a.ngayky;
        a.mnv = to_string(id++);
        while(a.mnv.size() < 5) a.mnv = "0" + a.mnv;
        a.ngay = stoi(a.date.substr(3, 2));
        a.thang = stoi(a.date.substr(0, 2));
        a.nam = stoi(a.date.substr(6, 4));
        return cin;
    }
    friend ostream &operator << (ostream &cout, NhanVien a){
        cout << a.mnv << ' ' << a.ten << ' ' << a.sex << ' ' << a.date << ' ' << a.diachi << ' ' << a.mathue << ' ' << a.ngayky << '\n';
        return cout;
    }
};

int cmp(NhanVien a, NhanVien b){
    if(a.nam == b.nam){
        if(a.thang == b.thang) return a.ngay < b.ngay;
        return a.thang < b.thang;
    }
    return a.nam < b.nam;
}

void sapxep(NhanVien a[], int n){
    sort(a, a+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}