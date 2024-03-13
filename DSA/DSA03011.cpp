#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

void solve(){
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    while(n--){
        cin >> x;
        q.push(x);
    }
    int res = 0;
    while(q.size() > 1){
        int x1 = q.top();
        q.pop();
        int x2 = q.top();
        q.pop();
        int tmp = (x1 + x2) % mod;
        (res += tmp) %= mod;
        q.push(tmp);
    }
    cout << res << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}