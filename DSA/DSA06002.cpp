#include <bits/stdc++.h>
using namespace std;

int x, n;

int cmp(int a, int b){
    return abs(a - x) < abs(b - x);
}

void solve(){
    cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a + n, cmp);
    for(int x : a) cout << x << ' ';
    cout << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}