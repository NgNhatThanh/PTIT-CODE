#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n;
vector<int> res;

void in(){
    cout << '(';
    for(int i = 0 ; i < res.size(); ++i){
        cout << res[i];
        if(i != res.size() - 1) cout << ' ';
    }
    cout << ") ";
}

void Try(int k, int sum){
    if(sum > n) return;
    if(sum == n) in();
    for(int i = k; i >= 1; --i){
        res.push_back(i);
        Try(i, sum + i);
        res.pop_back();
    }
}

void solve(){
    cin >> n;
    for(int i = n; i >= 1; --i){
        res.resize(1);
        res[0] = i;
        Try(i, i);
    }
    cout << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}