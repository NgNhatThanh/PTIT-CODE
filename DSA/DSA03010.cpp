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
        int t1 = q.top();
        q.pop();
        int t2 = q.top();
        q.pop();
        res += t1 + t2;
        q.push(t1 + t2);
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