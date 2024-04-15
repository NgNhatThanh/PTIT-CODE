#include <iostream>
#define ll long long
using namespace std;

void solve(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    ll a[n1], b[n2], c[n3];
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;
    for(ll &x : c) cin >> x;
    int i = 0, j = 0, k = 0;
    int cnt = 0;
    while(i < n1 && j < n2 & k < n3){
        if(a[i] == b[j] && a[i] == c[k]){
            cout << a[i] << ' ';
            ++i; ++j; ++k;
            ++cnt;
        }
        else if(a[i] < b[j]) ++i;
        else if(b[j] < c[k]) ++j;
        else ++k;
    }
    if(!cnt) cout << "-1";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}