#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    queue<ll> q;
    q.push(1);
    while(1){
        ll tmp = q.front();
        q.pop();
        if(tmp % n == 0){
            cout << tmp << '\n';
            return;
        }
        q.push(tmp * 10);
        q.push(tmp *10 + 1);
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}