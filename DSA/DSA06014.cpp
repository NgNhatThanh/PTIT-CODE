#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
vector<int> nt;
int nto[N];

void seive(){
    nto[1] = 1;
    for(int i = 2; i <= sqrt(N); ++i){
        for(int j = i * i; j < N; j += i) nto[j] = 1;
    }
    for(int i = 2; i < N; ++i){
        if(!nto[i]) nt.push_back(i);
    }
}

void solve(){
    int n;
    cin >> n;
    for(int x : nt){
        if(n <= x) break;
        if(!nto[x] && !nto[n - x]){
            cout << x << ' ' << n - x << '\n';
            return;
        }
    }
    cout << "-1\n";
}   

int main(){
    seive();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}