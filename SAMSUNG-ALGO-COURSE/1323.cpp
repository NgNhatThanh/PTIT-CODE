#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(string a, string b){
    int idx = 0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] == b[idx]) ++idx;
        if(idx == b.size()) return 1;
    }
    return 0;
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int ma = cbrt(stoll(s));
    for(int i = ma; i >= 1; --i){
        string tmp = to_string(1ll * i * i * i);
        if(check(s, tmp)){
            cout << tmp << '\n';
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}