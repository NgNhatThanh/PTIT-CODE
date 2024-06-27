#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    ll res = 0;
    ll tmp = 1;
    ll m = 1;
    for(int i = s.size() - 1; i >= 0; --i){
        res += (s[i] - '0') * (i + 1) * tmp;
        m *= 10;
        tmp += m;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}