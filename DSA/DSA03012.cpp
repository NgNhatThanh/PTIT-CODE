#include <bits/stdc++.h>
using namespace std;

int check(string s){
    int pre[30] = {};
    int n = s.size();
    int lim = n / 2 + n % 2;
    for(char x : s){
        ++pre[x - 'a'];
        if(pre[x - 'a'] > lim) return -1;
    }
    return 1;
}

void solve(){
    string s;
    cin >> s;
    cout << check(s) << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}