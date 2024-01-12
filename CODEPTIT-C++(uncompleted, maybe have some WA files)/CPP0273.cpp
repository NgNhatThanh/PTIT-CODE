#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int pre[n+1] = {};
    for(int i=0; i<n; ++i){
        cin >> a[i];
        pre[i+1] = pre[i] + a[i];
    }
    for(int i=1; i<=n; ++i){
        if(pre[i] == pre[n] - pre[i-1]){
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main() {
	int t;
    cin >> t;
    while(t--){
        solve();
    }
}