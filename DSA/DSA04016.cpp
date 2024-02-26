#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int a1 = 0, b1 = 0;
    vector<int> v;
    while(a1 < n && b1 < m){
        if(a[a1] <= b[b1]) v.push_back(a[a1++]);
        else v.push_back(b[b1++]);
    }
    while(a1 < n) v.push_back(a[a1++]);
    while(b1 < m) v.push_back(b[b1++]);
    cout << v[k - 1] << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}