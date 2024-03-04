#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    queue<ll> q;
    q.push(1);
    int cnt = 0;
    while(!q.empty()){
        ll tmp = q.front();
        q.pop();
        ++cnt;
        if(n / tmp >= 10) q.push(tmp * 10);
        if((n - 1) / tmp >= 10) q.push(tmp * 10 + 1);
    }
    cout << cnt << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}