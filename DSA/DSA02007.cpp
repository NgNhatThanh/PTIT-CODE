#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res, k;
string s;

void Try(int i, int cnt = 0){
    res = max(res, stoi(s));
    if(cnt == k || i == s.size()) return;
    for(int j = i + 1; j < s.size(); ++j){
        if(j == i) continue;
        Try(i + 1, cnt);
        swap(s[i], s[j]);
        Try(i + 1, cnt + 1);
        swap(s[i], s[j]);
    }
}

void solve(){
    cin >> k >> s;
    Try(0);
    cout << res << '\n';
    res = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}