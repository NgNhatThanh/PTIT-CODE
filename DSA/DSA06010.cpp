#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n], cc[10] = {};
    for(int &x : a){
        cin >> x;
        while(x){
            ++cc[x % 10];
            x /= 10;
        }
    }
    for(int i = 0; i < 10; ++i){
        if(cc[i]) cout << i << ' ';
    }
    cout << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}