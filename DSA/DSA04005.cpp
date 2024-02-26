#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fib[93];

void init(){
    fib[1] = fib[2] = 1;
    for(int i = 3; i < 93; ++i) fib[i] = fib[i - 1] + fib[i - 2];
}

char cal(int n, ll k){
    if(n < 3) return char(n - 1 + 'A');
    ll mid = fib[n - 2];
    if(k > mid) return cal(n - 1, k - mid);
    return cal(n - 2, k);
}

int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        cout << cal(n, k) << '\n';
    }
}