#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien{
    string ten, lop, msv;
    float d1, d2, d3;
};

int cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}

int main() {
    int n;
    cin >> n;
    SinhVien a[n];
    for(auto &x : a){
        cin >> x.msv;
        scanf("\n");
        getline(cin, x.ten);
        cin >> x.lop >> x.d1 >> x.d2 >> x.d3;
    }
    sort(a, a+n, cmp);
    int stt = 1;
    for(auto x : a){
        cout << stt++ << ' ' << x.msv << ' ' << x.ten << ' ' << x.lop << ' ' << setprecision(1) << fixed << x.d1 << ' ' << x.d2 << ' ' << x.d3 << '\n';
    }
}