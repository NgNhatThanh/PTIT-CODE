#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
    ll tu, mau;
};

void nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo a, PhanSo b){
    PhanSo res;
    ll ucln = __gcd(a.mau, b.mau);
    ll bcnn = a.mau*b.mau/ucln;
    res.tu = a.tu*(bcnn/a.mau) + b.tu*(bcnn/b.mau);
    res.mau = bcnn;
    ll tmp = __gcd(res.tu, res.mau);
    res.tu /= tmp;
    res.mau /= tmp;
    return res;
}

void in(PhanSo a){
    cout << a.tu << '/' << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
