#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    vector<int> le, chan;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(i & 1) le.push_back(a[i]);
        else chan.push_back(a[i]);
    }
    sort(begin(le), end(le));
    sort(begin(chan), end(chan), greater<int>());
    int i = 0, j = 0;
    for(int k = 1; k <= n; ++k){
        if(k & 1) cout << le[i++] << ' ';
        else cout << chan[j++] << ' ';
    }
    cout << '\n';
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}