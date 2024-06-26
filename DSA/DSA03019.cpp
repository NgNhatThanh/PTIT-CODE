#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

struct PhanSo{
    ll tu, mau;

    friend istream &operator >> (istream &cin, PhanSo &a){
        cin >> a.tu >> a.mau;
        return cin;
    }

    friend ostream &operator << (ostream &cout, PhanSo a){
        cout << a.tu << '/' << a.mau;
        return cout;
    }

    friend PhanSo operator - (PhanSo a, PhanSo b){
        PhanSo res;
        ll bcnn = a.mau * b.mau / __gcd(a.mau, b.mau);
        a.tu *= bcnn / a.mau;
        b.tu *= bcnn / b.mau;
        res.tu = a.tu - b.tu;
        res.mau = bcnn;
        return res;
    }

    friend bool operator > (PhanSo a, PhanSo b){
        ll bcnn = a.mau * b.mau / __gcd(a.mau, b.mau);
        a.tu *= bcnn / a.mau;
        b.tu *= bcnn / b.mau;
        return a.tu > b.tu;
    }
};

void solve(){
    PhanSo a;
    cin >> a;
    PhanSo tmp{1, 2};
    while(1){
        tmp.mau = a.mau / a.tu + (a.mau % a.tu != 0);
        a = a - tmp;
        cout << tmp;
        if(!a.tu) break;
        else cout << " + ";
    }
    cout << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}