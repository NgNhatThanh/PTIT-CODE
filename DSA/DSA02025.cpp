#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string a[n];
    for(string &s : a) cin >> s;

    int lap[n][n] = {};

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j <= i) lap[i][j] = lap[j][i];
            else{
                map<char, int> mp;
                for(char c : a[i]) ++mp[c];
                for(char c : a[j]) lap[i][j] += mp[c];
            }
        }
    }

    int res = INT_MAX;
    int hv[n];
    for(int i = 0; i < n; ++i) hv[i] = i;
    do{
        int tmp = 0;
        for(int i = 1; i < n; ++i) tmp += lap[hv[i]][hv[i - 1]];
        res = min(res, tmp);
    }
    while(next_permutation(hv, hv + n));
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}