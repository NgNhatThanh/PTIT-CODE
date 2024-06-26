#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, x, ok;
int a[22];

vector<int> res;

void in(){
    ok = 1;
    cout << '[';
    for(int i = 0; i < res.size() - 1; ++i) cout << res[i] << ' ';
    cout << res.back();
    cout << ']';
}

void Try(int i, int sum = 0){
    if(sum == x){
        in();
        return;
    }
    for(int j = i; j < n; ++j){
        if(sum + a[j] <= x){
            res.push_back(a[j]);
            Try(j, sum + a[j]);
            res.pop_back();
        }
    }
}

void solve(){
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    Try(0);
    cout << (ok ? "\n" : "-1\n");
    ok = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}