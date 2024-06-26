#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string a[n];
    for(string &s : a) cin >> s;
    int res = INT_MAX;
    int hv[k];
    for(int i = 0; i < k; ++i) hv[i] = i;
    do{
        int mi = INT_MAX, ma = 0;
        for(string s : a){
            int tmp = 0;
            for(int i = 0; i < k; ++i) tmp = tmp * 10 + s[hv[i]] - '0';
            mi = min(mi, tmp);
            ma = max(ma, tmp); 
        }
        res = min(res, ma - mi);
    }
    while(next_permutation(hv, hv + k));
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