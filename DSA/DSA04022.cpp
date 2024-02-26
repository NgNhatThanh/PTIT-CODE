#include <bits/stdc++.h>
#define ll long long
using namespace std;

char cal(int n, ll k){
    ll mid = 1ll << (n - 1);
    if(k == mid) return char(n + 'A' - 1);
    if(k > mid) return cal(n - 1, k - mid);
    return cal(n - 1, k);
}

int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        cout << cal(n, k) << '\n';
    }
}