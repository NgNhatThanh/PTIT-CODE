#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[k];
    for(int &x : a) cin >> x;
    int i = k - 1;
    while(i > 0 && a[i] - a[i - 1] == 1) --i;
    if(i > 0) --a[i++];
    for(; i < k; ++i) a[i] = n - k + i + 1;
    for(int x : a) cout << x << ' ';
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