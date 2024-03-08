#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, ok = 1;
vector<int> a;

void sinh(){
    int i = n - 1;
    while(i >= 0 && a[i]) a[i--] = 0;
    if(i >= 0) a[i] = 1;
    else ok = 0;
}

int check(){
    int cnt = 0;
    for(int i = 0; i < n - k + 1; ++i){
        int sum = 0;
        for(int j = i; j <= i + k - 1; ++j) sum += a[j];
        if(!sum) ++cnt;
    }
    return cnt == 1;
}

void solve(){
    cin >> n >> k;
    a.resize(n);
    vector<vector<int>> res;
    while(ok){
        if(check()) res.push_back(a);
        sinh();
    }
    cout << res.size() << '\n';
    for(auto x : res){
        for(int k : x) cout << (char)(k + 'A');
        cout << '\n';
    }
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}