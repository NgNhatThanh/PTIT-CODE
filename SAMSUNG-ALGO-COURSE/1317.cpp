#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, ok, a[10][10];

void Try(int i, int j, string path = ""){
    if(i == n - 1 && j == n - 1){
        ok = 1;
        cout << path << ' ';
        return;
    }
    if(i + 1 < n && a[i + 1][j]) Try(i + 1, j, path + 'D');
    if(j + 1 < n && a[i][j + 1]) Try(i, j + 1, path + 'R');
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    if(!a[0][0]) cout << "-1\n";
    else{
        Try(0, 0);
        if(!ok) cout << -1;
        cout << '\n';
        ok = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}