#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, b;
    cin >> n >> k >> b;
    int cnt[n+2] = {};
    int x;
    while(b--){
        cin >> x;
        ++cnt[x];
    }
    for(int i=1; i<=n; ++i) cnt[i] += cnt[i-1];
    int i = k;
    int res = n;
    while(i <= n){
        res = min(res, cnt[i] - cnt[i-k]);
        ++i;
    }
    cout << res;
}       