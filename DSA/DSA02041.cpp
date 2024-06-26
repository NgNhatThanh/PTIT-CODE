#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    mp[n] = 1;
    queue<int> q;
    q.push(n);
    while(1){
        int v = q.front();
        q.pop();
        if(v % 2 == 0 && !mp[v / 2]){
            mp[v / 2] = mp[v] + 1;
            q.push(v / 2);
        }   
        if(v % 3 == 0 && !mp[v / 3]){
            mp[v / 3] = mp[v] + 1;
            q.push(v / 3);
        }
        if(!mp[v - 1]){
            mp[v - 1] = mp[v] + 1;
            q.push(v - 1);
        }
        if(mp[1]) break;
    }
    cout << mp[1] - 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}