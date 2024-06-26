#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> ops(n);
    vector<vector<int>> res;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j) cin >> a[i][j];
    }
    for(int i = 1; i <= n; ++i) ops[i - 1] = i;
    do{
        int sum = 0;
        for(int i = 1; i <= n; ++i) sum += a[i][ops[i - 1]];
        if(sum == k) res.push_back(ops);
    }
    while(next_permutation(begin(ops), end(ops)));
    cout << res.size() << '\n';
    for(auto v : res){
        for(int x : v) cout << x << ' ';
        cout << '\n';
    }
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}