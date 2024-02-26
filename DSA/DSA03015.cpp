#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, s, m;
    cin >> n >> s >> m;
    int need = s * m;
    int dayToBuy = need / n + (need % n != 0);
    (dayToBuy <= s - s / 7) ? cout << dayToBuy << '\n' : cout << "-1\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}