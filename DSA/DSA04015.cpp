#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    int idx = upper_bound(a, a + n, x) - a;
    cout << idx - 1 + (idx > 0)<< '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}