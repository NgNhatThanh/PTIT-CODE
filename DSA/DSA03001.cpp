#include <bits/stdc++.h>
using namespace std;

int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void solve(){
    int n;
    cin >> n;
    int idx = 9, res = 0;
    while(n){
        int sl = n / money[idx];
        res += sl;
        n -= sl * money[idx--];
    }
    cout << res << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}