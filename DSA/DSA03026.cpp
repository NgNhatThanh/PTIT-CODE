#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

string minAns(int n, int s){
    string res = "";
    while(s > 9){
        res += '9';
        --n;
        s -= 9;
    }
    if(n > 1){
        res += char(s - 1 + '0');
        s = 1;
        --n;
        while(n > 1){
            res += '0';
            --n;
        }
    }
    res += char(s + '0');
    reverse(begin(res), end(res));
    return res;
}

string maxAns(int n, int s){
    string res = "";
    while(s){
        int k = min(s, 9);
        res += char(k + '0');
        --n;
        s -= k;
    }
    while(n--) res += '0';
    return res;
}

void solve(){
    int n, s;
    cin >> n >> s;
    if(1.0 * s / n > 9 || (!s && n > 1)) cout << "-1 -1";
    else cout << minAns(n, s) << ' ' << maxAns(n, s);
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}