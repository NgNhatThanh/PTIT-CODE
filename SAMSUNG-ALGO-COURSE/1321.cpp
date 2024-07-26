#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(auto &x : a) cin >> x.second;
    for(auto &x : a) cin >> x.first;
    sort(a, a + n);
    int cnt = 1, last = a[0].first;
    for(int i = 1; i < n; ++i){
        if(a[i].second >= last){
            last = a[i].first;
            ++cnt;
        }
    }
    cout << cnt << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}