#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, m;
    cin >> a >> m;
    for(int i=1; i<m; ++i){
        if(a*i%m == 1){
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}