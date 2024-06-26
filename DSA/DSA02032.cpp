#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, s;
int a[22];
vector<vector<int>> res;
vector<int> cur;

void Try(int i, int sum = 0){
    if(sum == s){
        res.push_back(cur);
        return;
    }
    for(int j = i; j < n; ++j){
        if(sum + a[j] <= s){
            cur.push_back(a[j]);
            Try(j, sum + a[j]);
            cur.pop_back();
        }
    }
}

void solve(){
    cin >> n >> s;
    for(int i = 0; i < n; ++i) cin >> a[i];
    Try(0);
    if(res.empty()) cout << "-1\n";
    else{
        cout << res.size() << ' ';
        for(auto v : res){
            cout << '{';
            for(int i = 0; i < v.size() - 1; ++i) cout << v[i] << ' ';
            cout << v.back() << "} ";
        }
        cout << '\n';
        res.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}