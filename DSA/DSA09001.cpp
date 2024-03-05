#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int v, e;
    cin >> v >> e;
    vector<int> ke[v + 1];
    int x, y;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= v; ++i){
        cout << i << ": ";
        for(int k : ke[i]) cout << k << ' ';
        cout << '\n';
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}