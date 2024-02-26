#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int cnt = 1, ok;
    for(int i = 0; i < n - 1; ++i){
        ok = 0;
        for(int j = 0; j < n - 1; ++j){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                ok = 1;
            }
        }
        if(ok){
            cout << "Buoc " << cnt++ << ": ";
            for(int x : a) cout << x << ' ';
            cout << '\n';
        }
        else break;
    }
}

int main(){ 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();        
    }
}