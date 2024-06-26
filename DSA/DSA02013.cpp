#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, p, s;
vector<int> nt;
vector<vector<int>> res;
vector<int> cur;

int check(int n){
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0) return 0;
    }
    return 1;
}

void precal(){
    for(int i = 2; i <= 199; ++i){
        if(check(i)) nt.push_back(i);
    }
}

void Try(int i, int sum = 0){
    if(cur.size() > n) return;
    if(sum == s && cur.size() == n){
        res.push_back(cur);
        return;
    }
    for(int j = i + 1; j < nt.size(); ++j){
        if(sum + nt[j] <= s){
            cur.push_back(nt[j]);
            Try(j, sum + nt[j]);
            cur.pop_back();
        }
    }
}

void solve(){
    cin >> n >> p >> s;
    int idx = upper_bound(begin(nt), end(nt), p) - begin(nt);
    Try(idx - 1);
    cout << res.size() << '\n';
    for(auto v : res){
        for(int x : v) cout << x << ' ';
        cout << '\n';
    }
    res.clear();
}

int main(){
    precal();
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}