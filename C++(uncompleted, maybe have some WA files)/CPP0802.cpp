#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll check(string s){
    ll ans = 0;
    for(char x : s){
        if(!isdigit(x) || ans > INT_MAX) return 0;
        ans = ans*10 + x - '0';
    }
    return ans;
}

int main() {
    freopen("DATA.in", "r", stdin);
    string s;
    ll res = 0;
    while(cin >> s){
        res += check(s);
    }
    cout << res;
}
