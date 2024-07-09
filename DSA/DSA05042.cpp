#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll k;
    cin >> n >> k;
    int a[n];
    ll pre[n + 1];
    pre[0] = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        pre[i + 1] = pre[i] + a[i];
    }
    for(int i = 1; i <= n; ++i){
        int idx = binary_search(pre + i, pre + n + 1, pre[i - 1] + k);
        if(idx){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){ 
    int t = 1;
    cin >> t;
    while(t--){
        solve();        
    }
}