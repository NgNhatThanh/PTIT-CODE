#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, k, s, res;

void Try(int val, int cnt, int sum){
    if(sum > s) return;
    if(cnt == k && sum == s){
        ++res;
        return;
    }
    for(int i = val - 1; i >= 1; --i) Try(i, cnt + 1, sum + i);
}

void solve(){
    for(int i = n; i >= k; --i) Try(i, 1, i);
    cout << res << '\n';
}

int main(){
    faster()
    while(cin >> n >> k >> s){
        if(!n) return 0;
        if(k > n) cout << "0\n";
        else solve();
        res = 0;
    }
}