#include <bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo{
    public:
        ll tu, mau;
        PhanSo(){}
        PhanSo(ll a, ll b){
            tu = a; mau = b;
        }
        friend istream &operator >> (istream &cin, PhanSo &a){
            cin >> a.tu >> a.mau;
            return cin;
        }
        friend ostream &operator << (ostream &cout, PhanSo a){
            cout << a.tu << '/' << a.mau;
            return cout;
        }
        friend PhanSo operator + (PhanSo &a, PhanSo &b){
            PhanSo res;
            ll ucln = __gcd(a.mau, b.mau);
            ll bcnn = a.mau*b.mau/ucln;
            a.tu *= (bcnn/a.mau);
            b.tu *= (bcnn/b.mau);
            res.tu = a.tu + b.tu;
            res.mau = bcnn;
            ll tmp = __gcd(res.tu, res.mau);
            res.tu /= tmp; res.mau /= tmp;
            return res;
        }
};

int main() {
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

