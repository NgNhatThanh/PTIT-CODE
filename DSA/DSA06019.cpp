#include <bits/stdc++.h>
using namespace std;

int pre[100005];

int cmp(int a, int b){
    if(pre[a] == pre[b]) return a < b;
    return pre[a] > pre[b];
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
        ++pre[x];
    }
    sort(a, a + n, cmp);
    for(int x : a) cout << x << ' ';
    cout << '\n';
    memset(pre, 0, sizeof(pre));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}