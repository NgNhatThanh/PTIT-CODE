#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ke[1005];
int part[1005], ok = 1, v, e;

void bipart(int u){
    if(!ok) return;
    for(int x : ke[u]){
        if(part[x] == part[u]){
            ok = 0;
            return;
        }
        else if(!part[x]){
            part[x] = 3 - part[u];
            bipart(x);
        }
    }
}

void solve(){
    int x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= v; ++i){
        if(!part[i]){
            part[i] = 1;
            bipart(i);
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
    ok = 1;
    for(int i = 1; i <= v; ++i){
        ke[i].clear();
        part[i] = 0;
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