#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
    ll tu, mau;
    void rutgon(){
        ll uc = __gcd(tu, mau);
        tu /= uc; mau /= uc;
    }
    friend PhanSo operator + (PhanSo a, PhanSo b){
        PhanSo res;
        ll bc = a.mau * b.mau / __gcd(a.mau, b.mau);
        a.tu *= bc/a.mau;
        b.tu *= bc/b.mau;
        res.tu = a.tu + b.tu;
        res.mau = bc;
        res.rutgon();
        return res;
    }
};

void process(PhanSo a, PhanSo b){
    PhanSo c = a + b;
    c.tu *= c.tu; c.mau *= c.mau;
    c.rutgon();
    cout << c.tu << '/' << c.mau << ' ';
    PhanSo d;
    d.tu = c.tu * a.tu * b.tu;
    d.mau = c.mau * a.mau * b.mau;
    d.rutgon();
    cout << d.tu << '/' << d.mau << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}