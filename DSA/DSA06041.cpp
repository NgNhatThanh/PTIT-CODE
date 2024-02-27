#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> mp;
    for(int &x : a){
        cin >> x;
        ++mp[x];
    }
    for(auto x : mp){
        if(x.second > n / 2){
            cout << x.first << '\n';
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}