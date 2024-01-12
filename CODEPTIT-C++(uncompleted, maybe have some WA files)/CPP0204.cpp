#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nt[100005];
int cnt[100005];

void seive(){
    for(int i=2; i<=100000; ++i) nt[i] = 1;
    for(int i=2; i<=sqrt(100000); ++i){
        for(int j=i*i; j<=100000; j+=i) nt[j] = 0;
    }
    for(int i=2; i<=100000; ++i){
        cnt[i] = cnt[i-1] + nt[i];
    }
}

int main(){
    seive();
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << cnt[r] - cnt[l-1] << '\n';
    }
}   