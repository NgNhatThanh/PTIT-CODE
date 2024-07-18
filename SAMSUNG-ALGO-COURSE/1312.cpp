#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '0') s[i--] = '1';
    if(i >= 0) s[i] = '0';
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}