#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    for(int i = 1; i <= n; ++i){
        string tmp = q.front();
        q.pop();
        cout << tmp << ' ';
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}