#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nt[1000005];

void seive(){
    for(int i=2; i<=sqrt(1000000); ++i){
        for(int j=i*i; j<=1000000; j+=i) nt[j] = 1;
    }
}

int main(){
    seive();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int res = 0;
        for(int i=2; 1ll*i*i<=n; ++i){
            res += !nt[i];
        }
        cout << res << '\n';
    }
}

