#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int k;
    string s;
    cin >> k >> s;
    map<int, int> pre;
    for(char x : s) ++pre[x];
    priority_queue<int> q;
    for(auto x : pre) q.push(x.second);
    while(k){
        int v = q.top();
        q.pop();
        --v;
        --k;
        q.push(v);
    }
    int sum = 0;
    while(!q.empty()){
        sum += q.top() * q.top();
        q.pop();
    }
    cout << sum << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}