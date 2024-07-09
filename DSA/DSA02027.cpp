#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, res, mi = INT_MAX, vst[15];

int greedyPath(int a[][15]){
    int u = 0;
    int vst[n] = {};
    vst[0] = 1;
    int res = 0;
    for(int i = 1; i < n; ++i){
        int tmp = INT_MAX, v;
        for(int j = 0; j < n; ++j){
            if(u != j && !vst[j] && a[u][j] < tmp){
                tmp = a[u][j];
                v = j;
            }
        }
        vst[v] = 1;
        u = v;
        res += tmp;
    }
    res += a[u][0];
    return res;
}

void Try(int a[][15], int last, int cnt = 1, int sum = 0){
    if(cnt == n){
        res = min(res, sum + a[last][0]);
        return;
    }
    if(sum >= res || sum + (n - cnt + 1) * mi >= res) return;
    for(int i = 0; i < n; ++i){
        if(!vst[i]){
            vst[i] = 1;
            Try(a, i, cnt + 1, sum + a[last][i]);
            vst[i] = 0;
        }
    }
}

void solve(){
    cin >> n;
    int a[n][15];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            if(a[i][j]) mi = min(mi, a[i][j]);
        }
    }
    res = greedyPath(a);
    vst[0] = 1;
    Try(a, 0);
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}