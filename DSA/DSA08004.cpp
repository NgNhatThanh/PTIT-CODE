#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int k;
    string s;
    cin >> k >> s;
    priority_queue<int> q;
    int pre[27] = {};
    for(char x : s) ++pre[x - 'A'];
    for(int i = 0; i < 26; ++i){
        if(pre[i]) q.push(pre[i]);
    }
    ll res = 0;
    while(k){
        int pre1 = q.top();
        q.pop();
        int pre2 = 0;
        if(!q.empty()){
            pre2 = q.top();
            q.pop();
        }
        int tmp = min(k, pre1 - pre2);
        if(!tmp) tmp = 1;
        pre1 -= tmp;
        k -= tmp;
        if(pre1) q.push(pre1);
        if(pre2) q.push(pre2);
    }
    while(!q.empty()){
        res += 1ll * q.top() * q.top();
        q.pop();
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