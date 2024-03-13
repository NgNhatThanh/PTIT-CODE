#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n + 1][n + 1] = {};
    cin.ignore();
    string s;
    for(int i = 1; i <= n; ++i){
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp) a[i][stoi(tmp)] = a[stoi(tmp)][i] = 1; 
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j) cout << a[i][j] << ' ';
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