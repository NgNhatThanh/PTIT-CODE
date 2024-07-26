#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for(int &x : a){
        cin >> x;
        q.push(x);
    }
    ll res = 0;
    while(q.size() > 1){
        ll a = q.top(); q.pop();
        ll b = q.top(); q.pop();
        res += a + b;
        q.push(a + b);
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}