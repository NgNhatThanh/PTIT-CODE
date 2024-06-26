#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

/*
Công thức chuyển từ số nhị phân b sang mã gray là 
g = b ^ (b >> 1)
*/

void solve(){
    string s;
    cin >> s;
    string g = s;
    g.pop_back();
    g.insert(begin(g), '0');
    for(int i = 0; i < g.size(); ++i) cout << (g[i] != s[i]);
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