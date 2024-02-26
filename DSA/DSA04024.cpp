#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1e9 + 7;

struct MaTran{
    ll mt[10][10] = {};
    int size;
    friend istream &operator >> (istream &cin, MaTran &A){
        for(int i = 0; i < A.size; ++i){
            for(int j = 0; j < A.size; ++j) cin >> A.mt[i][j];
        }
        return cin;
    }
    friend ostream &operator << (ostream &cout, MaTran A){
        ll res = 0;
        for(int i = 0; i < A.size; ++i) (res += A.mt[i][A.size - 1]) %= mod;
        cout << res << '\n';
        return cout;
    }
     friend MaTran operator * (MaTran A, MaTran B){
        MaTran res;
        res.size = A.size;
        for(int i = 0; i < A.size; ++i){
            for(int j = 0; j < A.size; ++j){
                res.mt[i][j] = 0;
                for(int k = 0; k < A.size; ++k) (res.mt[i][j] += (A.mt[i][k] * B.mt[k][j]) % mod) %= mod;
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
    int k;
    cin >> A.size >> k >> A;
    MaTran res = Pow(A, k);
    cout << res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}