#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Mul(ll a, ll b, ll c){
    if(b == 1) return a;
    ll res = Mul(a, b/2, c);
    (res += res) %= c;
    if(b%2) (res += a) %= c;
    return res;
}

int main() {
	int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << Mul(a, b, c) << '\n';
    }
}