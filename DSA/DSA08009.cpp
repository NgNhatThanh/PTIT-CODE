#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int s, t;
    cin >> s >> t;
    queue<int> q;
    q.push(s);
    unordered_map<int, int> mp;
    mp[s] = 1;
    while(!mp[t]){
        int tmp = q.front();
        q.pop();
        int t1 = tmp - 1, t2 = tmp * 2;
        if(tmp < t && !mp[t2]){
            mp[t2] = mp[tmp] + 1;
            q.push(t2);
        }
        if(t1 && !mp[t1]){
            mp[t1] = mp[tmp] + 1;
            q.push(t1);
        }
    }
    cout << mp[t] - 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}   