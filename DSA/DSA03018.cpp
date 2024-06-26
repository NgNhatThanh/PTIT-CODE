#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    int bay = n / 7;
    int du = n % 7;
    int i = 0;
    while((4 * i - du) % 7 != 0) ++i;
    int del = (4 * i - du) / 7;
    if(del > bay) cout << "-1\n";
    else{
        bay -= del;
        int bon = (7 * del + du) / 4;
        while(bon--) cout << 4;
        while(bay--) cout << 7;
        cout << '\n';
    }
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}