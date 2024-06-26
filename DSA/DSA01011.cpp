#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    string tmp = s;
    cout << n << ' ';
    if(next_permutation(begin(s), end(s))) cout << s << '\n';
    else cout << "BIGGEST\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    cout << t << '\n';
    while(t--){
        solve();
    }
}