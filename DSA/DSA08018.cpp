#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll lim = 1;
    for(int i = 1; i <= n; ++i) lim *= 10;
    queue<ll> q;
    vector<ll> res;
    q.push(6);
    q.push(8);
    while(!q.empty()){
        ll tmp = q.front();
        q.pop();
        res.push_back(tmp);
        if(lim / tmp > 1){
            q.push(tmp * 10 + 6);
            q.push(tmp * 10 + 8);
        }
    }
    cout << res.size() << '\n';
    for(ll x : res) cout << x << ' ';
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}