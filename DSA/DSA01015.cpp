#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

vector<ll> ans;

void precal(){
    queue<string> q;
    q.push("9");
    while(1){
        string tmp = q.front();
        q.pop();
        if(tmp.size() > 18) return;
        ans.push_back(stoll(tmp));
        q.push(tmp + '0');
        q.push(tmp + '9');
    }
}

void solve(){
    int n;
    cin >> n;
    for(ll x : ans){
        if(x % n == 0){
            cout << x << '\n';
            return;
        }
    }
}

int main(){
    precal();
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}