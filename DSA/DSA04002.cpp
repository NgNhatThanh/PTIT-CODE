#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

ll Pow(ll n, ll k){
    if(!k) return 1;
    ll res = Pow(n, k / 2);
    (res *= res) %= mod;
    if(k % 2) (res *= n) %= mod;
    return res;
}

ll rev(ll n){
    ll res = 0;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << Pow(n, rev(n)) << '\n';
    }
}