#include <bits/stdc++.h>
#define ll long long
using namespace std;

int res, a[8][8], cot[8], cc[18], cp[18];

void quaylui(int i, int sum = 0){
    if(i == 8){
        res = max(res, sum);
        return;
    }
    for(int j = 0; j < 8; ++j){
        if(!cot[j] && !cc[i + j - 1] && !cp[i - j + 8]){
            cot[j] = 1;
            cc[i + j - 1] = 1;
            cp[i - j + 8] = 1;
            quaylui(i + 1, sum + a[i][j]);
            cot[j] = 0;
            cc[i + j - 1] = 0;
            cp[i - j + 8] = 0;
        }
    }
}

void solve(){
    for(int i = 0; i < 8; ++i){ 
        for(int j = 0; j < 8; ++j) cin >> a[i][j];
    }
    quaylui(0);
    cout << res << '\n';
    res = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}