#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll binPow(ll n, ll k, ll mod){
    if(!k) return 1;
    ll res = binPow(n, k/2, mod);
    (res *= res) %= mod;
    if(k%2) (res *= n) %= mod;
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        ll b, m;
        cin >> n >> b >> m;
        ll res = 0;
        for(char x : n){
            res = (res*10 + x - '0') % m;
        }
        cout << binPow(res, b, m) << '\n';
    }
}   