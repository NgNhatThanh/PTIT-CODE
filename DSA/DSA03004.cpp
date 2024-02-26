#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int id1 = 0, id2 = 1;
    ll v1 = 0, v2 = 0;
    while(id1 < n || id2 < n){
        if(id1 < n){
            v1 = v1 *10 + a[id1];
            id1 += 2;
        }
        if(id2 < n){
            v2 = v2 *10 + a[id2];
            id2 += 2;
        }
    }
    cout << v1 + v2 << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}