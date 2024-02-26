#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(int d, string s){
    int pre[30] = {};
    int n = s.size();
    for(char x : s){
        ++pre[x - 'A'];
        if((pre[x - 'A'] - 1) * d + 1 > n) return -1;
    }
    return 1;
}

void solve(){
    int d;
    string s;
    cin >> d >> s;
    cout << check(d, s) << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}