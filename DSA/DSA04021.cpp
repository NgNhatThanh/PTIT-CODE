#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fib[93];

void init(){
    fib[1] = fib[2] = 1;
    for(int i = 3; i < 93; ++i) fib[i] = fib[i - 1] + fib[i - 2];
}

int cal(int n, ll k){
    if(n < 3) return n - 1;
    if(k > fib[n - 2]) return cal(n - 1, k - fib[n - 2]);
    return cal(n - 2, k);
}

void solve(){
    int n;
    ll k;
    cin >> n >> k;
    cout << cal(n, k) << '\n';
}

int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}