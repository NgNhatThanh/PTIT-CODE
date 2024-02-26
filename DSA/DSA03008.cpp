#include <bits/stdc++.h>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void solve(){
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(auto &x : a) cin >> x.first;
    for(auto &x : a) cin >> x.second;
    sort(a, a + n, cmp);
    int res = 1;
    int last = a[0].second;
    for(int i = 1; i < n; ++i){
        if(a[i].first >= last){
            last = a[i].second;
            ++res;
        }
    }
    cout << res << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}