#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res = 0, k;

void Try(string s, int i, int cnt = 0){
    res = max(res, stoi(s));
    if(cnt == k || i == s.size()) return;
    for(int j = i + 1; j < s.size(); ++j){
        if(j != i && s[j] > s[i]){
            swap(s[i], s[j]);
            Try(s, i + 1, cnt + 1);
            swap(s[i], s[j]);
        }
    }
    Try(s, i + 1, cnt);
}

void solve(){
    string s;
    cin >> k >> s;
    Try(s, 0);
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