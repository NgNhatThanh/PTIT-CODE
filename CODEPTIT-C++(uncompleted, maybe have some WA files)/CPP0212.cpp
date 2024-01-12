#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9+7;

ll binpow(int n, int k){
    if(!k) return 1;
    ll res = binpow(n, k/2);
    (res *= res) %= mod;
    if(k&1) (res *= n) %= mod;
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        int res = 0;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            (res += (1ll * a[i] * binpow(x, n-i-1)) % mod) %= mod;
        } 
        cout << res << '\n';
    }
}