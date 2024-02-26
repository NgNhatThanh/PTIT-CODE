#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 123456789;

ll Pow(ll n, ll k){
    if(!k) return 1;
    ll res = Pow(n, k / 2);
    (res *= res) %= mod;
    if(k % 2) (res *= n) %= mod;
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << Pow(2, n - 1) << '\n';
    }
}