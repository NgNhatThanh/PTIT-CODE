#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int maxidx[n];
    maxidx[n - 1] = a[n - 1].second;
    for(int i = n - 2; i >= 0; --i) maxidx[i] = max(a[i].second, maxidx[i + 1]);
    int res = 0;
    for(int i = 0; i < n; ++i){
        if(a[i].first < a[n - 1].first) res = max(res, maxidx[i] - a[i].second);
    }
    if(!res) cout << "-1\n";
    else cout << res << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}