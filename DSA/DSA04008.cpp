#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

struct MaTran{
    ll mt[2][2] = {{1, 1}, {1, 0}};

    friend MaTran operator * (MaTran A, MaTran B){
        MaTran res;
        for(int i = 0; i < 2; ++i){
            for(int j = 0; j < 2; ++j){
                res.mt[i][j] = 0;
                for(int k = 0; k < 2; ++k) (res.mt[i][j] += (A.mt[i][k] * B.mt[k][j]) % mod) %= mod;
            }
        }
        return res;
    }
};

MaTran Pow(MaTran A, int k){
    if(k == 1) return A;
    MaTran res = Pow(A, k / 2);
    res = res * res;
    if(k % 2) res = res * A;
    return res;
}

void solve(){
    MaTran A;
    int n;
    cin >> n;
    A = Pow(A, n);
    cout << A.mt[1][0] << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}