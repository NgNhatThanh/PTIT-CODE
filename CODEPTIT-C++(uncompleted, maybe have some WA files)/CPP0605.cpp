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
        void rutgon(){
            ll gcd = __gcd(tu, mau);
            tu /= gcd;
            mau /= gcd;
        }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

