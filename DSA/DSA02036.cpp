#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> res;
vector<int> cur;

void Try(int *a, int n, int i, int sum = 0){
    if(sum & 1) res.push_back(cur);
    for(int j = i + 1; j < n; ++j){
        cur.push_back(a[j]);
        Try(a, n, j, sum + a[j]);
        cur.pop_back();
    }
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    Try(a, n, -1);
    sort(begin(res), end(res));
    for(auto v : res){
        for(int x : v) cout << x << ' ';
        cout << '\n';
    }
    res.clear();
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}