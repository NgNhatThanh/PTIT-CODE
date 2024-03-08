#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res, n, k;

void quaylui(int i, int a[], int n, int cnt){
    if(cnt == k){
        ++res;
        return;
    }
    for(int j = i + 1; j < n; ++j){
        if(a[j] > a[i]) quaylui(j, a, n, cnt + 1);
    }
}

void solve(){
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i <= n - k; ++i) quaylui(i, a, n, 1);
    cout << res << '\n';
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}