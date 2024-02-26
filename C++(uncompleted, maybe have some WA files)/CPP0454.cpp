#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(ll a){
    return sqrt(a) == (int)sqrt(a);
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            ll tmp = 1ll*a[i]*a[i] + 1ll*a[j]*a[j];
            if(!check(tmp)) continue;
            int idx = lower_bound(a+j+1, a+n, sqrt(tmp)) - a;
            if(idx < n && a[idx] == sqrt(tmp)){
                cout << "YES\n";
                return;
            } 
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}   