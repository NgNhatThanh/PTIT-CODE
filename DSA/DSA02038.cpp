#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, ok = 1;
int th[16];

void sinh(){
    int i = k - 1;
    while(i >= 0 && th[i] == n - k + i) --i;
    if(i < 0) ok = 0;
    else{
        ++th[i++];
        for(; i < k; ++i) th[i] = th[i - 1] + 1; 
    }
}

void solve(){
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0; i < k; ++i) th[i] = i;
    while(ok){
        for(int i = 0; i < k; ++i) cout << a[th[i]] << ' ';
        cout << '\n';
        sinh();
    }
    ok = 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}