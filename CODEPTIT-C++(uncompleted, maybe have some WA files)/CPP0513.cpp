#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

struct SinhVien{
    string ten, lop, date, msv = "B20DCCN";
    float gpa;
    void nhap(){
        cin.ignore();
        getline(cin, ten);
        cin >> lop >> date >> gpa;
        if(date[2] != '/') date = "0" + date;
        if(date[5] != '/') date.insert(begin(date) + 3, '0');
        string ma = to_string(id++);
        while(ma.size() < 3) ma = "0" + ma;
        msv += ma;
    }
    void in(){
        cout << msv << ' ' << ten << ' ' << lop << ' ' << date << ' ' << setprecision(2) << fixed << gpa << '\n';
    }
};

void nhap(SinhVien a[], int n){
    for(int i=0; i<n; ++i) a[i].nhap();
}

void in(SinhVien a[], int n){
    for(int i=0; i<n; ++i) a[i].in();
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}  