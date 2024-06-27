#include <bits/stdc++.h>
#define ll long long
using namespace std;

int binToDec(string a){
    int res = 0;
    for(int i = a.size() - 1; i >= 0; --i){
        res += (a[i] - '0') * (1 << (a.size() - 1 - i));
    }
    return res;
}

void solve(){
    string a, b;
    cin >> a >> b;
    int x = binToDec(a), y = binToDec(b);
    cout << 1ll * x * y << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}