#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i - 1; j >= 0; --j){
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
        cout << "Buoc " << cnt++ << ": ";
        for(int j = 0; j <= i; ++j) cout << a[j] << ' ';
        cout << '\n';
    }
}

int main(){ 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();        
    }
}