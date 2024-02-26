#include <bits/stdc++.h>
using namespace std;

int a[11][11], n;
vector<string> res;

void solve(int i, int j, string path){
    if(i == n || j == n) return;
    if(i == n - 1 && j == n - 1){
        res.push_back(path);
        return;
    }
    if(i < n - 1 && a[i + 1][j]) solve(i + 1, j, path + 'D');
    if(j < n - 1 && a[i][j + 1]) solve(i, j + 1, path + 'R');
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j) cin >> a[i][j];
        }
        if(!a[0][0]) cout << -1 << '\n';
        else{
            solve(0, 0, "");
            if(res.empty()) cout << -1 << '\n';
            else{
                for(string x : res) cout << x << ' ';
                cout << '\n';
                res.clear();
            }
        }
    }
}