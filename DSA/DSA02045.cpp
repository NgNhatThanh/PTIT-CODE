#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<string> res;
    for(int i = 1, lim = 1 << n; i < lim; ++i){
        string tmp = "";
        for(int j = 0; j < n; ++j){
            if(i & (1 << j)) tmp += s[j];
        }
        res.push_back(tmp);
    }
    sort(begin(res), end(res));
    for(string x : res) cout << x << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}