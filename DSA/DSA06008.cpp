#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    ll res = 0;
    sort(a, a + n);
    for(int x : b){
        if(!x || x == 1) res += n - (upper_bound(a, a + n, x) - a);
        else if(x == 2 || x == 4) res += upper_bound(a, a + n, 3) - lower_bound(a, a + n, 3);
        else if(x != 3) res += lower_bound(a, a + n, x) - upper_bound(a, a + n, 1); 
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